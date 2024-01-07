/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:42:30 by hbettal           #+#    #+#             */
/*   Updated: 2023/12/05 17:21:23 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_doors(va_list args, char c)
{
	int	result;

	result = 0;
	if (c == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (c == 's')
		result = ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		result = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		result = ft_puthexa(va_arg(args, unsigned int), c);
	else if (c == 'p')
	{
		result = ft_putstr("0x");
		result += ft_putaddress(va_arg(args, unsigned long));
	}
	else if (c == '%')
		result = ft_putchar('%');
	else
		result = ft_putchar(c);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		result;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, str);
	result = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1])
				result += ft_doors(args, str[++i]);
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result);
}

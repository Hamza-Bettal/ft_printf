/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:00:32 by hbettal           #+#    #+#             */
/*   Updated: 2023/12/05 14:55:55 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa_upper(unsigned int nbr)
{
	int		result;
	char	*base;

	result = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		result += ft_puthexa_upper(nbr / 16);
		result += ft_puthexa_upper(nbr % 16);
	}
	else
		result += ft_putchar(base[nbr % 16]);
	return (result);
}

int	ft_puthexa(unsigned int nbr, char c)
{
	int		result;
	char	*base;

	if (c == 'X')
		return (ft_puthexa_upper(nbr));
	result = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		result += ft_puthexa((nbr / 16), c);
		result += ft_puthexa((nbr % 16), c);
	}
	else
		result += ft_putchar(base[nbr % 16]);
	return (result);
}

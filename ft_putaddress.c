/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:41:27 by hbettal           #+#    #+#             */
/*   Updated: 2023/12/02 21:13:46 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(unsigned long nbr)
{
	int		result;
	char	*base;

	result = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		result += ft_putaddress(nbr / 16);
		result += ft_putaddress(nbr % 16);
	}
	else
		result += ft_putchar(base[nbr % 16]);
	return (result);
}

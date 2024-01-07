/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:25:33 by hbettal           #+#    #+#             */
/*   Updated: 2023/12/02 17:10:44 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	r;

	r = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		r += write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		r += ft_putnbr(nb / 10);
		r += ft_putnbr(nb % 10);
	}
	else
		r += ft_putchar(nb + 48);
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:26:07 by hbettal           #+#    #+#             */
/*   Updated: 2023/12/05 17:21:39 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putunbr(unsigned int nb);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned int nbr, char c);
int	ft_putaddress(unsigned long nbr);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:51:25 by santonie          #+#    #+#             */
/*   Updated: 2021/11/27 15:54:35 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_long(unsigned int n, int *count)
{
	char	c;

	if (n >= 10)
		ft_putnbr_long(n / 10, count);
	c = n % 10 + '0';
	ft_putchar_count(c, count);
}

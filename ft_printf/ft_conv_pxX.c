/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_pxX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:00:56 by santonie          #+#    #+#             */
/*   Updated: 2021/12/09 15:15:03 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_p(unsigned long n, int *count)
{
	if (n > 15)
	{
		ft_hexa_p((n / 16), count);
		n = n % 16;
	}
	if (n > 9 && n < 16)
		ft_putchar_count((87 + n), count);
	if (n >= 0 && n < 10)
		ft_putchar_count((48 + n), count);
}

void	ft_hexa_x(unsigned int n, int *count)
{
	if (n > 15)
	{
		ft_hexa_x((n / 16), count);
		n = n % 16;
	}
	if (n > 9 && n < 16)
		ft_putchar_count((87 + n), count);
	if (n >= 0 && n < 10)
		ft_putchar_count((48 + n), count);
}

void	ft_hexa_upx(unsigned int n, int *count)
{
	if (n > 15)
	{
		ft_hexa_upx((n / 16), count);
		n = n % 16;
	}
	if (n > 9 && n < 16)
		ft_putchar_count((55 + n), count);
	if (n >= 0 && n < 10)
		ft_putchar_count((48 + n), count);
}

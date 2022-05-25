/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:23:54 by santonie          #+#    #+#             */
/*   Updated: 2021/12/09 16:42:59 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_var(const char *to_print, va_list args, int i, int *count)
{
	if (to_print[i + 1] == 'c')
		ft_putchar_count((int)va_arg(args, int), count);
	if (to_print[i + 1] == 'd' || to_print[i + 1] == 'i')
		ft_putnbr((int)va_arg(args, int), count);
	if (to_print[i + 1] == 'p')
	{
		ft_putstr("0x", count);
		ft_hexa_p(va_arg(args, unsigned long), count);
	}
	if (to_print[i + 1] == 's')
		ft_putstr((char *)va_arg(args, const char *), count);
	if (to_print[i + 1] == 'u')
		ft_putnbr_long((unsigned int)va_arg(args, unsigned int), count);
	if (to_print[i + 1] == 'x')
		ft_hexa_x(va_arg(args, unsigned int), count);
	if (to_print[i + 1] == 'X')
		ft_hexa_upx(va_arg(args, unsigned int), count);
	if (to_print[i + 1] == '%')
		ft_putchar_count('%', count);
}

int	ft_printf(const char *to_print, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start (args, to_print);
	i = 0;
	count = 0;
	if (!to_print)
		return (0);
	while (to_print[i])
	{
		if (to_print[i] != '%')
			ft_putchar_count(to_print[i], &count);
		else
		{
			print_var(to_print, args, i, &count);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

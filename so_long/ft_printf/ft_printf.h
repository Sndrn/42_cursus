/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:56:24 by santonie          #+#    #+#             */
/*   Updated: 2021/11/30 14:55:51 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *to_print, ...);
void	ft_putchar_count(char c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr_long(unsigned int n, int *count);
void	ft_hexa_p(unsigned long n, int *count);
void	ft_hexa_x(unsigned int n, int *count);
void	ft_hexa_upx(unsigned int n, int *count);

#endif

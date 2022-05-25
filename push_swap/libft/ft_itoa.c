/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:46:10 by santonie          #+#    #+#             */
/*   Updated: 2021/10/28 16:37:15 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnbr(long n, int len, char *ptr)
{
	size_t	mod;

	mod = 0;
	ptr[len] = 0;
	if (n < 0)
	{
		ptr[0] = 45;
		n *= -1;
	}
	while (n)
	{
		mod = n % 10;
		ptr[--len] = mod + 48;
		n = n / 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nbr;

	nbr = n;
	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	ft_putnbr(nbr, len, ptr);
	if (nbr == 0)
		ptr[0] = '0';
	return (ptr);
}

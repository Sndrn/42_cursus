/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:55:35 by santonie          #+#    #+#             */
/*   Updated: 2021/10/28 17:35:46 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;
	size_t	l;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	l = 0;
	if (dstsize == 0)
		return (s);
	while ((src[l] != '\0') && ((d + l) < (dstsize - 1)))
	{
		dst[d + l] = src[l];
		l++;
	}
	dst[d + l] = '\0';
	if (dstsize > d)
		return (d + s);
	return (dstsize + s);
}

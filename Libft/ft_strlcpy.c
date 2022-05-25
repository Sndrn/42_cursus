/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:13:09 by santonie          #+#    #+#             */
/*   Updated: 2021/10/22 12:49:19 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	a;

	len_src = 0;
	a = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (dstsize == 0)
		return (len_src);
	while (src[a] != '\0' && a < (dstsize - 1))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (len_src);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:43:51 by santonie          #+#    #+#             */
/*   Updated: 2021/10/28 17:23:35 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstu;
	unsigned char	*srcu;
	size_t			s;

	dstu = (unsigned char *)dst;
	srcu = (unsigned char *)src;
	if (!dstu && !srcu)
		return (0);
	s = 0;
	if (dstu > srcu)
	{
		while (--len + 1)
			dstu[len] = srcu[len];
	}
	else
	{
		while (s < len)
		{
			dstu[s] = srcu[s];
			s++;
		}
	}
	return (dst);
}

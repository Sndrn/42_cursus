/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:56:43 by santonie          #+#    #+#             */
/*   Updated: 2021/10/28 17:38:05 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s;

	s = 0;
	while (s < n && (s1[s] || s2[s]))
	{
		if (s1[s] != s2[s])
			return (((unsigned char *)s1)[s] - ((unsigned char *)s2)[s]);
		s++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:46:21 by santonie          #+#    #+#             */
/*   Updated: 2021/10/28 17:31:54 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ca;

	ca = (char *)s;
	while (*ca)
	{
		if (*ca == '\0')
		{
			return (0);
		}
		else if ((char)c == *ca)
		{
			return (ca);
		}
		ca++;
	}
	if ((char)c == '\0')
	{
		return (ca);
	}
	return (0);
}

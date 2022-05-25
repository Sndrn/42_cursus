/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:41:06 by santonie          #+#    #+#             */
/*   Updated: 2022/04/08 11:00:17 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exit_door(t_vars ***v)
{
	int	x;

	x = 0;
	while ((**v)->map[x])
		exit(0);
}

int	ft_exit_mouse(t_vars *v)
{
	int	x;

	x = 0;
	while (v->map[x])
	{
		exit(0);
	}
	return (0);
}

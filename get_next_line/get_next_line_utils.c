}/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:00:14 by santonie          #+#    #+#             */
/*   Updated: 2021/12/21 16:10:04 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//initialise la structure
int	init_check(int fd, t_read *info) // adresse d'info stocké dans t_read
{
	info->pos = 0;//->accès aux membres de t_read
	info->fd = fd;
	info->max = read(info->fd, info->data, BUFFER_SIZE);
	if (info->max < 0)
		return (0); //(0) is returned if the file is finished reading
    else
		return (1); //(1) is returned if a line is read
}

char	read_check(t_read *info)
{
	char	result;

	if (info->pos >= info->max)
	{
		info->max = read(info->fd, info->data, BUFFER_SIZE);
		info->pos = 0;
		if (info->max <= 0)
			return (0);
	}
	result = info->data[info->pos];
	info->pos++;
	return (result);
}

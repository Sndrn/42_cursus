/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:55:31 by santonie          #+#    #+#             */
/*   Updated: 2021/12/21 15:59:44 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_read //definition des types de données
{
	int		fd;
	int		max;
	int		pos;
	char	data[BUFFER_SIZE];
}	t_read; //creation d'une variable (autre façon de faire voire note)

int		init_check(int fd, t_read *info);
char	read_check(t_read *info);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*join(char *str, char c);

#endif

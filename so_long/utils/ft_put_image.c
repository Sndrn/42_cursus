/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:43:27 by santonie          #+#    #+#             */
/*   Updated: 2022/04/08 11:08:54 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_image(t_vars ***v, int x, int y, char *img)
{
	int	img_w;
	int	img_h;

	(**v)->img = mlx_xpm_file_to_image((**v)->mlx, img, &img_w, &img_h);
	mlx_put_image_to_window((**v)->mlx, (**v)->win, (**v)->img, x, y);
}

void	sprites_setting(char p, int x1, int y1, t_vars **v)
{
	if (p == '1')
		put_image(&v, x1, y1, "./img/wall.xpm");
	else if (p == 'C')
	{
		put_image(&v, x1, y1, "./img/floor.xpm");
		put_image(&v, x1, y1, "./img/collect.xpm");
		(*v)->collect++;
	}
	else if (p == 'E')
	{
		put_image(&v, x1, y1, "./img/floor.xpm");
		put_image(&v, x1, y1, "./img/exit.xpm");
	}
	else if (p == 'P')
	{
		(*v)->y_p = y1;
		(*v)->x_p = x1;
		put_image(&v, x1, y1, "./img/floor.xpm");
		put_image(&v, x1, y1, "./img/player.xpm");
	}
	else
		put_image(&v, x1, y1, "./img/floor.xpm");
}

void	put_sprites_to_img(t_vars *vars)
{
	int	y1;
	int	y_map;
	int	backup_w;
	int	x1;
	int	x_map;

	y1 = 0;
	y_map = 0;
	backup_w = vars->win_w;
	while (vars->win_h > 0)
	{
		x1 = 0;
		x_map = 0;
		while (vars->win_w > 0)
		{
			sprites_setting(vars->map[y_map][x_map], x1, y1, &vars);
			x_map++;
			x1 += 50;
			vars->win_w--;
		}
		vars->win_w = backup_w;
		y_map++;
		y1 += 50;
		vars->win_h--;
	}
}

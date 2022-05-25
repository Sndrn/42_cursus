/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:36:32 by santonie          #+#    #+#             */
/*   Updated: 2022/04/21 13:17:48 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_vars(t_vars *vars)
{
	vars->collect = 0;
	vars->movement = 0;
	vars->win_w = ft_strlen(vars->map[0]);
	vars->win_h = get_height(vars->map);
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (argc <= 1)
	{
		perror("Error");
		exit(1);
	}
	(void)argv;
	check_file_is_valid(argv[1]);
	vars.map = get_map(argv[1]);
	if (vars.map != NULL)
	{
		check_map_valid(&vars);
		init_vars(&vars);
		vars.mlx = mlx_init();
		vars.win = mlx_new_window(vars.mlx,
				vars.win_w * 50, vars.win_h * 50, "so_long");
		put_sprites_to_img(&vars);
		mlx_hook(vars.win, 2, (1L << 0), key_hook, &vars);
		mlx_hook(vars.win, 17, (1L << 0), ft_exit_mouse, &vars);
		mlx_loop(vars.mlx);
	}
	return (0);
}

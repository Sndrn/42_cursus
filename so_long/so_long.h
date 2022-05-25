/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:37:21 by santonie          #+#    #+#             */
/*   Updated: 2022/04/08 10:56:48 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./mlx/mlx.h"
# include "./get_next_line/get_next_line.h"
# include "./ft_printf/ft_printf.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct s_vars {
	void			*mlx;
	void			*img;
	void			*win;
	int				win_w;
	int				win_h;
	int				x_p;
	int				y_p;
	int				movement;
	char			**map;
	int				collect;
}	t_vars;

typedef struct s_vars_map {
	int	c;
	int	p;
	int	e;
	int	x;
	int	y;
}	t_map_vars;

char	**get_map(char *fmap);
int		key_hook(int keycode, t_vars *vars);
void	to_left(t_vars **v);
void	to_right(t_vars **v);
void	to_up(t_vars **v);
void	to_down(t_vars **v);
char	**ft_split(char *s, char c);
void	put_image(t_vars ***v, int x, int y, char *img);
void	sprites_setting(char p, int x1, int y1, t_vars **v);
void	put_sprites_to_img(t_vars *vars);
char	*ft_itoa(int n);
void	put_text(t_vars ***v);
void	put_image_to_map(char p, int x1, int y1, t_vars **v);
int		get_height(char **map);
void	check_map_valid(t_vars *vars);
void	check_file_is_valid(char *file_line);
void	check_elements(t_vars **vars);
void	ft_error(t_vars ***v, char *err);
void	ft_exit_door(t_vars ***v);
int		ft_exit_mouse(t_vars *v);

#endif

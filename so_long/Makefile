# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 16:47:01 by santonie          #+#    #+#              #
#    Updated: 2022/04/08 10:51:12 by santonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= so_long

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror 

SRCS 	=	./utils/ft_key_hook.c					\
			./utils/ft_itoa.c						\
			./utils/ft_get_map.c					\
			./utils/ft_movement.c 					\
			./utils/ft_split.c						\
			./utils/ft_put_image.c					\
			./utils/ft_put_text.c					\
			./utils/ft_file_checker.c				\
			./utils/ft_map_checker_utils.c			\
			./utils/ft_map_checker.c				\
			./utils/ft_exits.c						\
			./get_next_line/get_next_line_utils.c	\
			./get_next_line/get_next_line.c			\
			./ft_printf/ft_conv_c_pc.c				\
			./ft_printf/ft_conv_d_i.c				\
			./ft_printf/ft_conv_p_s.c				\
			./ft_printf/ft_conv_pxX.c				\
			./ft_printf/ft_conv_u.c					\
			./ft_printf/ft_printf.c					\
			so_long.c

all: $(NAME)

OBJS	= $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	make -C mlx	
	$(CC) ./mlx/libmlx.a -framework OpenGL -framework AppKit  $^ -o $@

%.o:%.c
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	make clean -C mlx	
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re

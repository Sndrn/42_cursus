# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 16:54:46 by santonie          #+#    #+#              #
#    Updated: 2022/03/31 17:07:18 by santonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = pipex

CFLAGS = -Wall -Wextra -Werror

SRC =	pipex.c\
	   	utils_one.c\
		processes.c\
		errors.c\
		utils_two.c\
		./ft_printf/ft_conv_c_pc.c\
		./ft_printf/ft_conv_d_i.c\
		./ft_printf/ft_conv_p_s.c\
		./ft_printf/ft_conv_pxX.c\
		./ft_printf/ft_conv_u.c\
		./ft_printf/ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


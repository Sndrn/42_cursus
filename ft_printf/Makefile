# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 16:13:26 by santonie          #+#    #+#              #
#    Updated: 2021/11/29 15:36:20 by santonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC	=	ft_printf.c\
		ft_conv_c_pc.c\
		ft_conv_d_i.c\
		ft_conv_p_s.c\
		ft_conv_u.c\
		ft_conv_pxX.c\

OBJ = $(SRC:.c=.o)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar src $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: santonie <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 16:49:09 by santonie          #+#    #+#              #
#    Updated: 2021/10/28 18:24:36 by santonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc

FLAGS		= -Wall -Wextra -Werror

INCLUDES 	= ./libft.h

SRC			= ft_isalpha.c\
			  ft_isdigit.c\
			  ft_isalnum.c\
			  ft_isascii.c\
			  ft_isprint.c\
			  ft_strlen.c\
			  ft_memset.c\
			  ft_bzero.c\
			  ft_memcpy.c\
			  ft_memmove.c\
			  ft_strlcpy.c\
			  ft_strlcat.c\
			  ft_toupper.c\
			  ft_tolower.c\
			  ft_strchr.c\
			  ft_strrchr.c\
			  ft_strncmp.c\
			  ft_memchr.c\
			  ft_memcmp.c\
			  ft_strnstr.c\
			  ft_atoi.c\
			  ft_calloc.c\
			  ft_strdup.c\
			  ft_substr.c\
			  ft_strmapi.c\
			  ft_striteri.c\
			  ft_putchar_fd.c\
			  ft_putstr_fd.c\
			  ft_putendl_fd.c\
			  ft_putnbr_fd.c\
			  ft_strjoin.c\
			  ft_strtrim.c\
			  ft_itoa.c\
			  ft_split.c\


OBJ			= $(SRC:.c=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	ar src $(NAME) $(OBJ)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

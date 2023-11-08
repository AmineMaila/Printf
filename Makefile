# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 20:01:04 by mmaila            #+#    #+#              #
#    Updated: 2023/11/07 21:24:42 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Werror -Wextra

OBJ = ft_putchar.o ft_putstr.o ft_prints.o ft_putnbr.o \
	  ft_putnbr_base.o ft_printf.o ft_strlen.o ft_putnbr_u.o

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

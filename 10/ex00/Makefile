# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsansa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 14:28:52 by gsansa            #+#    #+#              #
#    Updated: 2020/03/09 14:30:59 by gsansa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = 	./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
POPO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEAD = includes/
NAME = libft.a

all:
	gcc -c -Wall -Wextra -Werror $(FILE) -I $(HEAD)
	ar rc $(NAME) $(POPO)

clean:
	/bin/rm -f $(POPO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all




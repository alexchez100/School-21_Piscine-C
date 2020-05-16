# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsansa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 23:18:59 by gsansa            #+#    #+#              #
#    Updated: 2020/03/09 23:27:49 by gsansa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMAND = -Wall -Wextra -Werror -o
FILE = main.c ft_atoi.c ft_putchar.c ft_putnbr.c ft_strlen.c znak.c

all:
	gcc $(COMAND) do-op $(FILE)

clean: do-op
	rm -f do-op
fclean: clean
	gcc $(COMAND) do-op $(FILE)
	rm -f do-op
re: fclean all 
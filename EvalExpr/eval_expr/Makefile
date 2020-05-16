# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsansa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/15 07:19:16 by gsansa            #+#    #+#              #
#    Updated: 2020/03/15 16:10:33 by gsansa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = ft_len_chisla.c ft_itoa.c ft_new_str.c ft_strlen.c ft_new_scob.c ft_atoi.c ft_buf.c ft_znak.c ft_nk_scob.c ft_putnbr.c ft_putchar.c eval_expr.c main.c
POPO = ft_len_chisla.o ft_itoa.o ft_new_str.o ft_strlen.o ft_new_scob.o ft_atoi.o ft_buf.o ft_znak.o ft_nk_scob.o ft_putnbr.o ft_putchar.o eval_expr.o main.o
RORO = eval_expr

all:
	gcc -c -Wall -Wextra -Werror $(FILE)
	gcc -o $(RORO) -Wall -Wextra -Werror $(POPO)

clean:
	/bin/rm -f $(POPO)

fclean: clean
	/bin/rm -f $(RORO)

re: fclean all

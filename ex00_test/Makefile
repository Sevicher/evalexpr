# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etristan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 13:21:58 by etristan          #+#    #+#              #
#    Updated: 2019/07/20 19:41:24 by etristan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -o

NAME = eval_expr

CFILES = ft_putchar.c ft_putnbr.c ft_putstr.c eval_exp.c main.c

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(NAME) $(CFILES)

clean:
	@echo $(NAME)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

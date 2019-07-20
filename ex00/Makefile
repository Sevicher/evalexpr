# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oleland <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 20:17:42 by oleland           #+#    #+#              #
#    Updated: 2019/07/20 21:03:47 by oleland          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -o

NAME = display_file

CFILES = *.c

HFILES =

OFILES =

all: $(NAME)
$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(HFILES) $(CFILES)

clean:
	/bin/rm -rf $(NAME)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aisner <aisner@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 16:10:08 by aisner            #+#    #+#              #
#    Updated: 2022/03/12 16:10:11 by aisner           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

CFILE = ft_atoi.c ft_error.c ft_intcpy.c \
		ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_strchr.c ft_strcmp.c ft_strdel.c \
		ft_strdup.c ft_strjoin.c ft_strlen.c \
		ft_strsplit.c ft_strsub.c get_next_line.c \
		ft_bzero.c ft_strnew.c ft_memmove.c \
		ft_strcpy.c ft_strrchr.c


OFILE = $(CFILE:.c=.o)

all: $(NAME)

$(NAME): $(OFILE) libft.h
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

clean:
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

re: fclean all
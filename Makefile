#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cheron <cheron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 17:06:50 by cheron            #+#    #+#              #
#    Updated: 2013/12/18 16:18:26 by cheron           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
NAME = libftprintf.a
INCLUDES_DIR = .

SRC =   ft_printf.c \
		ft_putchar_printf.c \
		ft_putnbr_printf.c \
		ft_putunbr_printf.c \
		ft_putonbr_printf.c \
		ft_putxnbr_printf.c \
		ft_putstr_printf.c \
		ft_putpaddress_printf.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
OFLAGS = -O3

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar -q $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) $(OFLAGS) -c $< -o $@ -I$(INCLUDES_DIR)

.PHONY: all clean re fclean

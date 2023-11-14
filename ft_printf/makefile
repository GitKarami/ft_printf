# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kchahmi <kchahmi@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/14 16:22:14 by kchahmi       #+#    #+#                  #
#    Updated: 2023/11/14 17:04:51 by kchahmi       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
SOURCES = \
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_puthex.c \
	ft_putstr.c \
	ft_putptr.c \
	ft_putuint.c \
	

OBJECTS = $(SOURCES:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(AR) -r $@ $?


%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
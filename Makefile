# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 19:11:27 by mruiz-sa          #+#    #+#              #
#    Updated: 2022/05/09 12:43:57 by mruiz-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FUNCTIONS = ft_print_c.c ft_print_d_i.c ft_print_s.c ft_print_u.c \
			ft_print_x_p.c ft_printf.c


OBJECTS = $(FUNCTIONS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

$(OBJECTS): $(FUNCTIONS)
		gcc $(CFLAGS) -c $(FUNCTIONS)

clean:
		@rm -f $(OBJECTS)

fclean: clean
		@rm -f $(OBJECTS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
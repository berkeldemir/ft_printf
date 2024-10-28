# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 06:48:05 by beldemir          #+#    #+#              #
#    Updated: 2024/10/28 06:48:34 by beldemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_print_c.c ft_print_i_d.c ft_print_s.c ft_print_p.c ft_base.c \
		ft_print_u.c ft_print_x.c ft_printf.c ft_check_parameter.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc ${NAME} ${OBJS}

bonus: all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
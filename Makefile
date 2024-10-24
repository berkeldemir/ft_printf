NAME = ft_printf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c
#SRCS_BONUS = ft_.......
OBJS = $(SRCS:.c:.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $< $^

#bonus: $(OBJS_BONUS)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
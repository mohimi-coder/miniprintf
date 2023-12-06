CC = CC

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c ft_putnbr.c ft_putchar.c ft_print_udecimal.c ft_print_hexa.c ft_print_format.c ft_putstr.c ft_print_pointr.c

OBJS = $(SRCS:.c=.o)

GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) created$(RESET)"

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "$(GREEN)$(NAME) cleaned$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(GREEN)$(NAME) fcleaned$(RESET)"

re: fclean all

.PHONY: all clean fclean re
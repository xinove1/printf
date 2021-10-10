NAME=libftprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC=ft_itoa.c ft_itoa_hex.c ft_printf.c ft_strlen.c print_c.c print_numbers.c

OBJ=$(SRC:.c=.o)

$(NAME): $(SRC) ft_printf.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean

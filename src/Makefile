NAME=libftlprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC= ft_printf.c print_c.c print_hexa.c

BONUS =

OBJ=$(SRC:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

libft:

all: $(NAME) libft

clean:
	$(M)
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME) $(BONUS_OBJ)

re: fclean all

.PHONY: clean fclean

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

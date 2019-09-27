NAME = printf.a

CC = @gcc
CFLAGS = -Wall -Wextra -Werror -gcc

SRC = print.c \



OBJ = $(SRC:.c=.o)

all: $(NAME)

NAME: lib print out

lib:
	@make -c libft
	@cp libft/libft.a
	@echo "Libft Done"

print: $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "print.a complete"

out:
	@$(CC) $(CFLAGS) $(SRC) libft.a printf.a -o printf_test

clean:
	@rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.a
	@make -C libft/ fclean

re: fclean all

.PHONY lib out print clean all fclean re printf_test
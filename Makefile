SRC	=	program.c \

CC	=	gcc -Wextra -Wall -W $(SRC)

NAME	=	program

all:
	$(CC) -o $(NAME) -g3

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

tests_run: re
	./$(NAME) "Salut" "Salut"
	./$(NAME) "Bonjour" "Salut"
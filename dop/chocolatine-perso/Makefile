##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

SRC	=	fazz.c		\

BIN	=	fazzbizz

FLAGS	=	-Wall -Wextra

all:    $(BIN)
$(BIN):
	gcc -o $(BIN) $(SRC) $(FLAGS)

tests_run:
	gcc -o unit_tests $(SRC) test.c -lcriterion --coverage
	./unit_tests

clean:

fclean: clean
	rm -f ./$(BIN)
re: fclean all

##
## EPITECH PROJECT, 2023
## Delivery_Proj_Sem_2
## File description:
## Makefile
##

MAIN	=	need4steak.c

BIN_NAME	=	ai

LIBMY_NAME	=	libmy.a

CC	=	gcc

FLAG	=	-Wextra -Wall

LIB_PATH	=	-L.

LIBMY_A	=	-lmy

MY_H	=	-I./include

all:
	cd ./lib/my && make
	make compile

compile:	$(MAIN)
	$(CC) $(FLAG) -o $(BIN_NAME) $(MAIN) $(LIB_PATH) $(LIBMY_A) $(MY_H) -g
	chmod 777 $(BIN_NAME)

lib:
	cd ./lib/my && make

libre:
	cd ./lib/my && make re

libfclean:
	cd ./lib/my && make fclean

fclean:	libfclean
	rm -f $(BIN_NAME)
	rm -f *.c~

clean:	libfclean
	rm -f *.c~

re:	fclean all

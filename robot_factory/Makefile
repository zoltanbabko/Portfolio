##
## EPITECH PROJECT, 2023
## Delivery_Proj_Sem_1
## File description:
## Makefile
##

MAIN	=	asm.c

BIN_NAME	=	asm

LIBMY_NAME	=	libmy.a

CC	=	gcc

FLAG	=	-Wextra

LIB_PATH	=	-L.

LIBMY_A	=	-lmy

MY_H	=	-I./include

all:
	cd ./lib/my && make
	make compile

compile:	$(MAIN)
	$(CC) $(FLAG) -o $(BIN_NAME) $(MAIN) $(LIB_PATH) $(LIBMY_A) $(MY_H) -g

lib:
	cd ./lib/my && make

libre:
	cd ./lib/my && make re

libfclean:
	cd ./lib/my && make fclean

fclean:	libfclean
	rm -f $(BIN_NAME)
	rm -f *.c~

re:	fclean all

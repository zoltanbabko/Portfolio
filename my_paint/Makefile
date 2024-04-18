##
## EPITECH PROJECT, 2023
## Delivery_Proj_Sem_1
## File description:
## Makefile
##

MAIN	=	my_paint.c

BIN_NAME	=	my_paint

LIBMY_NAME	=	libmy.a

CC	=	gcc

CSFML_FLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

LIB_PATH	=	-L.

LIBMY_A	=	-lmy

MY_H	=	-I./include -Wall -Wextra

all:
	cd ./lib/my && make
	make compile

compile:	$(MAIN)
	$(CC) -o $(BIN_NAME) $(MAIN) $(LIB_PATH) $(LIBMY_A) $(MY_H) $(CSFML_FLAGS)

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

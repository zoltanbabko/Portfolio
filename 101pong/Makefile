##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	velocity.c	\
		time.c	\
		angle.c	\
		condition.c	\
		rules.c

SRC2	=	pong.c

OBJ     =       $(SRC:.c=.o)
MY_LIB  =       libmy.a
MY_H    =       my.h
101_PONG	=	101pong

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	ar rc $(MY_LIB) $(OBJ)

all:	$(101_PONG)
$(101_PONG):
	gcc -o $(101_PONG) $(SRC2) -lm -L./ -lmy -I./

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(MY_LIB)
	rm -f ./$(101_PONG)

re: fclean all

##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC	=	flag_t.c	\
		flag_z.c	\
		flag_r.c	\
		flag_s.c	\
		calcul_matric.c	\
		isfloat.c

SRC2	=	architect.c

OBJ     =       $(SRC:.c=.o)
MY_LIB  =       libmy.a
MY_H    =       my.h
102_ARC	=	102architect

all:	$(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	ar rc $(MY_LIB) $(OBJ)

all:	$(102_ARC)
$(102_ARC):
	gcc -o $(102_ARC) $(SRC2) -lm -L./ -lmy -I./

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(MY_LIB)
	rm -f ./$(102_ARC)

re: fclean all

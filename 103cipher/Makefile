##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	lib/my/my_putstr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_strlen.c	\
		lib/my/my_getnbr.c	\
		lib/my/encypted.c	\
		lib/my/decrypted.c	\
		lib/my/key_matrix.c	\
		lib/my/flag_help.c	\
		lib/my/calcul_of_matrix.c

SRC2	=	cipher.c

OBJ     =       $(SRC:.c=.o)
MY_LIB  =       libmy.a
MY_H    =       my.h
103	=	103cipher
FLAGS	=	-Llib/my/. -lmy -Iinclude/.

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:	$(103)
$(103):
	gcc -o $(103) $(SRC2) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(103)

re: fclean all

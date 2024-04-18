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
		lib/my/calcul_sd.c	\
		lib/my/calcul_a.c	\
		lib/my/calcul_rms.c	\
		lib/my/calcul_h.c	\
		lib/my/flag_help.c	\

SRC2	=	demography.c

OBJ     =       $(SRC:.c=.o)
MY_LIB  =       libmy.a
MY_H    =       my.h
105	=	105demography
FLAGS	=	-Llib/my/. -lmy -Iinclude/. -lm
EFLAGS	=	-Wall -Wextra

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:	$(105)
$(105):
	gcc -o $(105) $(SRC2) $(EFLAGS) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(105)

re: fclean all

##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##


SRC	=	lib/my/my_printf.c	\
		lib/my/cas_1_2_3_4_5.c	\
		lib/my/test_number.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_isneg.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strdup.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_swap.c	\
		lib/my/my_put_unsigned_int.c	\
		lib/my/my_putoctal.c	\
		lib/my/my_puthexa_min.c	\
		lib/my/my_puthexa_maj.c	\
		lib/my/my_put_longhexa.c	\
		lib/my/my_putadresse.c	\
		lib/my/my_put_float.c	\
		lib/my/my_put_sc_nbr_min.c	\
		lib/my/my_put_sc_nbr_maj.c	\
		lib/my/my_str_to_array.c

OBJ     =       $(SRC:.c=.o)

MY_LIB  =       libmy.a

MY_H    =       my.h

SRC2	=	organized.c	\
			fct_add.c	\
			fct_disp.c	\
			fct_del.c	\
			fct_sort.c

ORGA	=	organized

FLAGS   =       -Wall -Wextra

LIBSHELL	=	-L./shell/. -lshell -I./shell/.

LIBH	=	-L./lib/my/. -lmy -I./lib/my/.

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:	$(ORGA)
$(ORGA):
	gcc -o $(ORGA) $(SRC2) $(FLAGS) $(LIBH) $(LIBSHELL)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(ORGA)

re: fclean all

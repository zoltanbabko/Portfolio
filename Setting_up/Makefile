##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC	=	lib/my/my_printf.c	\
		lib/my/cas_1_2_3_4_5.c	\
		lib/my/my_compute_power_rec.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_is_prime.c	\
		lib/my/my_isneg.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strlen.c	\
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
		lib/my/my_str_to_array.c	\
		lib/my/my_generation.c	\
		lib/my/my_generation_2.c	\
		lib/my/my_basic_find.c	\
		lib/my/malloc_fct.c	\
		lib/my/replace_map_by_nbr.c	\
		lib/my/algo.c	\
		lib/my/algo2.c	\
		lib/my/algo3.c	\
		lib/my/cols_rows.c	\
		lib/my/print_map.c

SRC2	=	setting_up.c

OBJ	=	$(SRC:.c=.o)

MY_LIB	=	libmy.a

MY_H	=	my.h

SETTING_UP	=	setting_up

FLAGS	=	-Wall -Wextra


all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:    $(SETTING_UP)
$(SETTING_UP):
	gcc -o $(SETTING_UP) $(SRC2) -Llib/my/. -lmy -Iinclude/. $(FLAGS)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(SETTING_UP)
re: fclean all

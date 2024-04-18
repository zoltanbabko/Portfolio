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
		lib/my/my_isneg.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putarray.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_revstr.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_arraycpy.c	\
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
		lib/my/my_int_to_str.c	\
		lib/my/flag_help.c	\
		lib/my/replace_map.c	\
		lib/my/setmap.c	\
		lib/my/connect_player.c	\
		lib/my/set_print.c	\
		lib/my/play_game.c	\
		lib/my/creat_file.c

SRC2	=	navy.c

OBJ	=	$(SRC:.c=.o)

MY_LIB	=	libmy.a

MY_H	=	my.h

NAVY	=	my_navy

FLAGS_LIB	=	-Llib/my/. -lmy -Iinclude/.

FLAGS	=	-Wall -Wextra

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:    $(NAVY)
$(NAVY):
	gcc -o $(NAVY) $(SRC2) $(FLAGS_LIB) $(FLAGS)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(NAVY)
re: fclean all

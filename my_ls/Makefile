##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	lib/my/my_printf.c	\
		lib/my/cas_1_2_3_4_5.c	\
		lib/my/my_compute_power_rec.c	\
		lib/my/my_compute_square_root.c	\
		lib/my/my_find_prime_sup.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_is_prime.c	\
		lib/my/my_isneg.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_revstr.c	\
		lib/my/my_showmem.c	\
		lib/my/my_showstr.c	\
		lib/my/my_sort_int_array.c	\
		lib/my/my_str_isalpha.c	\
		lib/my/my_str_islower.c	\
		lib/my/my_str_isnum.c		\
		lib/my/my_str_isprintable.c	\
		lib/my/my_str_isupper.c	\
		lib/my/my_strcapitalize.c	\
		lib/my/my_strcat.c	\
		lib/my/my_strcmp.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strlowcase.c	\
		lib/my/my_strncat.c	\
		lib/my/my_strncmp.c	\
		lib/my/my_strncpy.c	\
		lib/my/my_strstr.c	\
		lib/my/my_strupcase.c	\
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
		lib/my/flag_ls_a.c	\
		lib/my/flag_ls_l.c	\
		lib/my/flag_ls_r.c	\
		lib/my/flag_ls_t.c	\
		lib/my/option.c	\
		lib/my/basic_ls.c

SRC2	=	my_ls.c

OBJ	=	$(SRC:.c=.o)

MY_LIB	=	libmy.a

MY_H	=	my.h

MY_LS	=	my_ls

all:	$(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:	$(MY_LS)
$(MY_LS):
	gcc -o $(MY_LS) $(SRC2) -Llib/my/. -lmy -Iinclude/. -Wall -Wextra

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(MY_LS)
re: fclean all

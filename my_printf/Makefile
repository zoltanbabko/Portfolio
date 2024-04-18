##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	my_printf.c	\
		cas_1_2_3_4_5.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_is_prime.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c		\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_put_unsigned_int.c	\
		my_putoctal.c	\
		my_puthexa_min.c	\
		my_puthexa_maj.c	\
		my_put_longhexa.c	\
		my_putadresse.c	\
		my_put_float.c	\
		my_put_sc_nbr_min.c	\
		my_put_sc_nbr_maj.c

OBJ 	=	$(SRC:.c=.o)
MY_LIB	=	libmy.a
MY_H	=	my.h

all:	$(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	ar rc $(MY_LIB) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f ./$(MY_LIB)
re: fclean all

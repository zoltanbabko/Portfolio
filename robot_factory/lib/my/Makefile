##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC     =		./absolute_value.c			\
				./alphalower.c				\
				./flag_g_n_p_f.c			\
				./flag_n.c					\
				./flag_null_s_c_d_i.c		\
				./flag_u_o_x_e.c			\
				./flag_help.c				\
				./my_double_to_str.c		\
				./my_int_to_hex.c			\
				./my_int_to_oct.c			\
				./my_int_to_str.c			\
				./my_nbrlen.c				\
				./my_put_nbr.c				\
				./my_putchar.c				\
				./my_putstr.c				\
				./my_revstr.c				\
				./my_strlen.c				\
				./myprintf.c				\
				./my_strcpy.c				\
				./my_strcat.c 				\
				./my_strcmp.c				\
				./my_strncmp.c				\
				./my_getnbr.c				\
				./my_str_to_word_array.c	\
				./op.c						\
				./translator.c				\
				./array_to_file.c			\
				./array_checker.c			\
				./my_strdup.c				\
				./formating.c				\
				./my_str_to_array.c			\
				./my_strcpy_robot.c			\
				./reverse_int.c				\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

COPY_MY_H	=	cp ./my.h ../../include

COPY_OP_H	=	cp ./op.h ../../include

COPY_LIBMY_A	=	cp ./libmy.a ../../.

LIBMY_A	=	./libmy.a

MY_H	=	./../../include/my.h

OP_H	=	./../../include/op.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	$(COPY_MY_H)
	$(COPY_OP_H)
	$(COPY_LIBMY_A)

clean:
	rm -f $(OBJ)
	rm -f $(LIBMY_A)
	rm -f $(MY_H)
	rm -f $(OP_H)

fclean: clean
	rm -f $(NAME)
	rm -f ../../libmy.a

re:	fclean	all

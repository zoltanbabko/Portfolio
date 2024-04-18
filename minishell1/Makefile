##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC     =       lib/my/cas_1_2_3_4_5.c  	\
                lib/my/my_printf.c      	\
                lib/my/my_getnbr.c      	\
                lib/my/my_put_nbr.c     	\
                lib/my/my_putchar.c     	\
                lib/my/my_putstr.c      	\
                lib/my/my_strcpy.c      	\
				lib/my/my_strcmp.c			\
                lib/my/my_strlen.c      	\
				lib/my/my_strncmp.c			\
                lib/my/my_swap.c        	\
				lib/my/my_add_str_to_str.c	\
				lib/my/my_str_to_array.c	\
				lib/my/exec_fonction.c		\
				lib/my/other_fonction.c		\
				lib/my/my_env.c				\
				lib/my/my_strdup.c			\
				lib/my/formating.c			\
				lib/my/help.c

SRC2	=	minishell1.c

OBJ	=	$(SRC:.c=.o)

MY_LIB	=	libmy.a

MY_H	=	my.h

MYSH	=	mysh

FLAGS	=	-Llib/my/. -lmy -Iinclude/.

FLAGS_ERROR	=	-Wall -Wextra

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:    $(MYSH)
$(MYSH):
	gcc -o $(MYSH) $(SRC2) $(FLAGS) $(FLAGS_ERROR)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(MYSH)
re: fclean all

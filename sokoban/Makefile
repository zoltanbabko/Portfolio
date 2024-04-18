##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC     =       lib/my/cas_1_2_3_4_5.c  \
                lib/my/my_printf.c      \
                lib/my/my_getnbr.c      \
                lib/my/my_put_nbr.c     \
                lib/my/my_putchar.c     \
                lib/my/my_putstr.c      \
                lib/my/my_strcpy.c      \
                lib/my/my_strlen.c      \
                lib/my/my_swap.c        \
				lib/my/my_str_to_array.c	\
				lib/my/help.c	\
				lib/my/deplacement_player.c	\
				lib/my/game.c	\
				lib/my/game2.c	\
				lib/my/map_tools.c

SRC2	=	sokoban.c

OBJ	=	$(SRC:.c=.o)

MY_LIB	=	libmy.a

MY_H	=	my.h

MY_SOKO	=	my_sokoban

FLAGS	=	-Llib/my/. -lmy -Iinclude/.

FLAGS_ERROR	=	-Wall -Wextra -lncurses

all:    $(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC)
	mv *.o lib/my/.
	ar rc lib/my/$(MY_LIB) $(OBJ)
	cp lib/my/$(MY_LIB) lib/.
	cp lib/my/$(MY_H) include/.

all:    $(MY_SOKO)
$(MY_SOKO):
	gcc -o $(MY_SOKO) $(SRC2) $(FLAGS) $(FLAGS_ERROR)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f lib/my/$(MY_LIB)
	rm -f lib/$(MY_LIB)
	rm -f include/$(MY_H)
	rm -f ./$(MY_SOKO)
re: fclean all

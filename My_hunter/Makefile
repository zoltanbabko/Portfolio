##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	my_hunter.c

SRC2	=	other_fonc.c	\
		other_fonc2.c

OBJ	=	$(SRC2:.c=.o)

MY_LIB	=	libmy.a

GRAPHICS	=	-lcsfml-graphics
WINDOW	=	-lcsfml-window
AUDIO	=	-lcsfml-audio
SYSTEM	=	-lcsfml-system
NAME	=	my_hunter
LIB	=	-L./ -lmy -I./

all:	$(MY_LIB)
$(MY_LIB):
	gcc -c $(SRC2)
	ar rc $(MY_LIB) $(OBJ)

all:	$(NAME)
$(NAME):
	gcc -o $(NAME) $(SRC) $(LIB) $(GRAPHICS) $(WINDOW) $(AUDIO) $(SYSTEM)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ./$(MY_LIB)
	rm -f ./$(NAME)
re: fclean all

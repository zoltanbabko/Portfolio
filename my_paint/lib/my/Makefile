##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC     =		./file_to_buffer.c		\
				./gui.c					\
				./pinceau.c				\
				./colors.c				\
				./set_paint.c			\
				./forme.c				\
				./destroy_fct.c			\
				./gui_menu.c			\
				./menu.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS += -Wall -Wextra

NAME	=	libmy.a

COPY_MY_H	=	cp ./my.h ../../include

COPY_PAINT_H	=	cp ./paint.h ../../include

COPY_LIBMY_A	=	cp ./libmy.a ../../.

LIBMY_A	=	./libmy.a

MY_H	=	./../../include/my.h

PAINT_H	=	./../../include/paint.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	$(COPY_MY_H)
	$(COPY_PAINT_H)
	$(COPY_LIBMY_A)

clean:
	rm -f $(OBJ)
	rm -f $(LIBMY_A)
	rm -f $(MY_H)
	rm -f $(PAINT_H)

fclean: clean
	rm -f $(NAME)
	rm -f ../../libmy.a

re:	fclean	all

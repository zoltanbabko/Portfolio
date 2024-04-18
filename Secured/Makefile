##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC	=	hash_fct_1.c	\
		hash_fct_2.c

OBJ	=	$(SRC:.c=.o)
HASHT_A	=	libhashtable.a

all:    $(HASHT_A)
$(HASHT_A):
	gcc -c $(SRC)
	ar rc $(HASHT_A) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(HASHT_A)
re: fclean all

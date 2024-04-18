/*
** EPITECH PROJECT, 2023
** my_int_to_hex.c
** File description:
** convert int to hexadecimal
*/
#include <stdlib.h>
#include "my.h"
#include <stdio.h>

char *my_int_to_oct(int nbr)
{
    int temp = 0;
    char *oct = malloc(sizeof(char) *my_nbrlen(nbr));
    int i = 0;

    while (nbr > 0) {
        temp = nbr % 8;
        oct[i] = temp + '0';
        nbr /= 8;
        i++;
    }
    oct[i] = '\0';
    return (my_revstr(oct));
}

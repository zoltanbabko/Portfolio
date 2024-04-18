/*
** EPITECH PROJECT, 2023
** my_int_to_hex.c
** File description:
** convert int to hexadecimal
*/
#include <stdlib.h>
#include "my.h"

char *my_int_to_hex(int nbr)
{
    int temp = 0;
    char *hex = malloc(sizeof(char) *my_nbrlen(nbr));
    int i = 0;

    while (nbr > 0) {
        temp = nbr % 16;
        if (temp < 10) {
            temp = temp + '0';
        } else
            temp = (temp - 10) + 'A';
        hex[i] = temp;
        nbr /= 16;
        i++;
    }
    hex[i] = '\0';
    return (my_revstr(hex));
}

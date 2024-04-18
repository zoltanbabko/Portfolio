/*
** EPITECH PROJECT, 2023
** my_intlen.c
** File description:
** return length of an integrer
*/

#include "my.h"

int my_nbrlen(int nbr)
{
    int l = 1;

    while (nbr > 10) {
        nbr /= 10;
        l++;
    }
    return (l);
}

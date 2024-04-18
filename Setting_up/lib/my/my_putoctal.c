/*
** EPITECH PROJECT, 2023
** putoctal
** File description:
** octalputmy
*/

#include <stdlib.h>
#include "my.h"

void my_putoctal(int nb)
{
    int octal[100];
    int i = 0;

    if (nb < 0)
        nb *= -1;
    while (nb != 0) {
        octal[i] = nb % 8;
        nb = nb / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        my_put_nbr(octal[j]);
}

/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int modu = 0;

    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (- 1);
    }
    if (nb > 9) {
        modu = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(modu + '0');
    }
    return 0;
}

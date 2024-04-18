/*
** EPITECH PROJECT, 2023
** put float
** File description:
** put float
*/
#include "my.h"
#include <stdio.h>

int my_put_float(double nb)
{
    int i = nb;

    my_put_nbr(i);
    nb -= i;
    my_putchar('.');
    if (nb == 0) {
        my_putstr("000000");
        return 0;
    } else {
        condition(nb);
    }
    return 0;
}

int condition(double nb)
{
    double j = nb;
    int count = 0;

    nb *= 10;
    while (nb < 1) {
        my_put_nbr(nb);
        nb *= 10;
        count++;
    }
    j *= 1000000;
    my_put_nbr(j);
    return 0;
}

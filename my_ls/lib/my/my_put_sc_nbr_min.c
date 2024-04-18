/*
** EPITECH PROJECT, 2023
** put_sc_nbr
** File description:
** put_sc_nbr
*/
#include "my.h"
#include <stdio.h>

void nbr_count_min(int count)
{
    my_putchar('e');
    if (count < 0) {
        my_put_nbr(count);
    } else {
        my_putchar('+');
        my_put_nbr(0);
        my_put_nbr(count);
    }
}

int my_put_sc_nbr_min(double nb)
{
    int count = 0;

    if (nb > 9 && nb >= 1) {
        while (nb > 9 && nb >= 1) {
            nb /= 10;
            count++;
        }
    }
    if (nb < 1) {
        while (nb < 1) {
            nb *= 10;
            count--;
        }
    }
    my_put_float(nb);
    nbr_count_min(count);
    return 0;
}

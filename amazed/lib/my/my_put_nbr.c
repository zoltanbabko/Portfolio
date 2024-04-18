/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** Function for libmy
*/
#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb < -2147483647 || nb > 2147483647)
        return (84);
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    if (nb > 9) {
        my_put_nbr(nb / 10);
        nb %= 10;
        my_putchar(nb + '0');
    }
}

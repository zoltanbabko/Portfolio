/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** my isneg
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
}

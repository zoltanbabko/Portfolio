/*
** EPITECH PROJECT, 2023
** putlonghexa
** File description:
** putlonghexa
*/

#include <stdlib.h>
#include "my.h"

void my_put_longhexa(long int nb)
{
    long int hexa;

    if (nb >= 16) {
        hexa = nb % 16;
        nb = nb / 16;
        my_put_longhexa(nb);
    } else if (nb > 0) {
        hexa = nb % 16;
        nb = nb / 16;
    }
    if (hexa > 9) {
        my_putchar(hexa + 87);
    } else
        my_putchar(hexa + 48);
}

/*
** EPITECH PROJECT, 2023
** puthexaMAJ
** File description:
** puthexaMAJ
*/

#include <stdlib.h>
#include "my.h"

void my_puthexa_min(int nb)
{
    int hexa;

    if (nb >= 16) {
        hexa = nb % 16;
        nb = nb / 16;
        my_puthexa_min(nb);
    } else if (nb > 0) {
        hexa = nb % 16;
        nb = nb / 16;
    }
    if (hexa > 9) {
        my_putchar(hexa + 87);
    } else
        my_putchar(hexa + 48);
}

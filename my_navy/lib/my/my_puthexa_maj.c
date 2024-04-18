/*
** EPITECH PROJECT, 2023
** puthexaMAJ
** File description:
** puthexaMAJ
*/

#include <stdlib.h>
#include "my.h"

void my_puthexa_maj(int nb)
{
    int hexa;

    if (nb >= 16) {
        hexa = nb % 16;
        nb = nb / 16;
        my_puthexa_maj(nb);
    } else if (nb > 0) {
        hexa = nb % 16;
        nb = nb / 16;
    }
    if (hexa > 9) {
        my_putchar(hexa + 55);
    } else
        my_putchar(hexa + 48);
}

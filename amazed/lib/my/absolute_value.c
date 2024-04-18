/*
** EPITECH PROJECT, 2023
** Valeur Absolue
** File description:
** Valeur Absolue
*/

#include <stdio.h>
#include "my.h"

int absolute_value(int nb)
{
    if (nb < -2147483647 && nb > 2147483647)
        return 0;
    if (nb >= 0) {
        return nb;
    } else {
        nb = nb * (-1);
        return nb;
    }
}

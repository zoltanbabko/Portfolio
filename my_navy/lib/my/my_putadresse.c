/*
** EPITECH PROJECT, 2023
** my_putadresse.c
** File description:
** my_putadresse.c
*/

#include <stdlib.h>
#include "my.h"
#include <stdio.h>

void my_putadresse(long int nb)
{
    my_putstr("0x");
    my_put_longhexa(nb);
}

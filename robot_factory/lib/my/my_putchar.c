/*
** EPITECH PROJECT, 2023
** my_putchar.c
** File description:
** Write function for libmy
*/

#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

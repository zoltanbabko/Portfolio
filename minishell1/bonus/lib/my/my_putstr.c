/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** my put string
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return len;
}

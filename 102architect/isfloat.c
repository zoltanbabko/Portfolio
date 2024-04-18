/*
** EPITECH PROJECT, 2023
** is float
** File description:
** is float
*/

#include "my.h"

int isFloat(char *str)
{
    char *endptr;
    strtof(str, &endptr);

    return (*endptr == '\0' && *str != '\0');
}

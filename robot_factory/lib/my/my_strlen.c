/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** Function for libmy
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

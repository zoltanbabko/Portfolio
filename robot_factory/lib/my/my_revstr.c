/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** C-POOL Day06 Task03
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int y = 0;
    char temp;

    for (; y < my_strlen(str) / 2; y++) {
        temp = str[y];
        str[y] = str[i];
        str[i] = temp;
        i--;
        }
    return (str);
}

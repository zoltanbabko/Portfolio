/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** my revstr
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char c = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    while (j < i) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        j++;
        i--;
    }
    return str;
}

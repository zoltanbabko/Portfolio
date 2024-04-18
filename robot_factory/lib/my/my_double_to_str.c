/*
** EPITECH PROJECT, 2023
** my_double_to_str.c
** File description:
** return double value in a str
*/
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

char *get_int(long long int f)
{
    int temp = 0;
    char *str = malloc(sizeof(char) *my_nbrlen(f));
    int i = 0;

    while (f > 0) {
        temp = f % 10;
        str[i] = temp + '0';
        f /= 10;
        i++;
    }
    return (my_revstr(str));
}

char *get_dec(long long int f)
{
    int temp = 0;
    char *str = malloc(sizeof(char) *6);
    int i = 0;

    while (f > 0) {
        temp = f % 10;
        str[i] = temp + '0';
        f /= 10;
        i++;
    }
    my_revstr(str);
    while (my_strlen(str) < 6) {
        str[i] = '0';
        i++;
    }
    return (str);
}

char *my_double_to_str(double f)
{
    long long int f_int = f;
    char *str = malloc(sizeof(char) *(my_nbrlen(f_int)) + 8);

    f -= f_int;
    my_strcpy(str, get_int(f_int));
    for (int y = 0; f - (long long int)f > 0 && y < 6; y++) {
        f *= 10;
    }
    if (f - (long long int)f > 0.4 && f - (long long int)f != 0)
        f += 1;
    my_strcat(str, ".");
    my_strcat(str, get_dec((long long int)f));
    return (str);
}

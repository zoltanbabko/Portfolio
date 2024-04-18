/*
** EPITECH PROJECT, 2023
** my_getnbr.c
** File description:
** find the number in a string
*/
#include <stdio.h>

int put_nbr(char const *str, int i)
{
    int nbr = 0;

    nbr = str[i] - '0';
    i++;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr *= 10;
            nbr += str[i] - '0';
        } else {
            return (nbr);
        }
    }
    return (nbr);
}

int my_getnbr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= '0' && str[i] <= '9')
            return (put_nbr(str, i));
}

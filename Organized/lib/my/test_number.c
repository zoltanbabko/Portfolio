/*
** EPITECH PROJECT, 2024
** test nbr
** File description:
** test nbr
*/

#include "my.h"

int test_number(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return 84;
        i++;
    }
    return 0;
}

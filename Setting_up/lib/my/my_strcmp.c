/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    if (my_strlen(s1) != my_strlen(s2))
        return 84;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i])
            return 84;
        i++;
    }
    return 0;
}

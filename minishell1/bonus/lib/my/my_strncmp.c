/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i != n; i++) {
        if (s1[i] != s2[i]){
            return 84;
        }
    }
    return 0;
}

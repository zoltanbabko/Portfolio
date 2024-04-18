/*
** EPITECH PROJECT, 2023
** my_strcpy.c
** File description:
** C-POOL Day06 Task01
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    dest = (char *)malloc(sizeof(char) * my_strlen(src) + 1);
    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

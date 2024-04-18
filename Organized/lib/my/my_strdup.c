/*
** EPITECH PROJECT, 2024
** strdup
** File description:
** strdup
*/

#include "my.h"

char *my_strdup(char *src)
{
    int length = my_strlen(src);
    char *dest = malloc(length + 1);
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

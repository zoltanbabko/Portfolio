/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** emacs
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len_s = my_strlen(src);
    int len_a = my_strlen(dest);
    char *new_str = (char *)malloc(sizeof(char) * (len_a + len_s) + 1);
    int i = 0;

    if (dest[0] == '/')
        return dest;
    for (i = 0; src[i] != '\0'; i++) {
        new_str[i] = src[i];
    }
    for (int j = 0; dest[j] != '\0'; j++) {
        new_str[i] = dest[j];
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}

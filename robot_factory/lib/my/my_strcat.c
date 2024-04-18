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
    int s = 0;
    int d = 0;
    int i = 0;
    char *newstr;

    newstr = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)));
    while (dest[d] != '\0') {
        newstr[i] = dest[d];
        i++;
        d++;
    }
    while (src[s] != '\0') {
        newstr[i] = src[s];
        i++;
        s++;
    }
    return newstr;
}

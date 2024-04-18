/*
** EPITECH PROJECT, 2024
** my array cpy
** File description:
** array cpy
*/

#include "my.h"
#include <stdlib.h>

char **my_array_cpy(char **dest, char **src)
{
    int i = 0;

    while (src[i] != NULL){
        dest[i] = my_strcpy(dest[i], src[i]);
        i++;
    }
    return dest;
}

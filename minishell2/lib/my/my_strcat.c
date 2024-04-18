/*
** EPITECH PROJECT, 2024
** my_str_cat
** File description:
** my str cat
*/

#include "my.h"

char *my_strcat(char *src, char *add)
{
    int len_s = my_strlen(src);
    int len_a = my_strlen(add);
    char *new_str = (char *)malloc(sizeof(char) * (len_a + len_s) + 1);
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        new_str[i] = src[i];
    }
    for (int j = 0; add[j] != '\0'; j++) {
        new_str[i] = add[j];
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}

/*
** EPITECH PROJECT, 2023
** LIB
** File description:
** my_str_to_line_array.c
*/

#include "my.h"
#include <stdlib.h>

int count_charstr(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != '\0' && i != 0)
            j++;
        i++;
    }
    return (j + 1);
}

char **malloc_arr(char *str)
{
    char **tab;
    int h = 0;
    int k = 0;

    tab = malloc((sizeof(char *) * count_charstr(str)) + sizeof(char *));
    for (int l = 0; h < count_charstr(str);) {
        l = 0;
        tab[h] = malloc(sizeof(char) * my_strlen(str));
        while (str[k] != ' ' && str[k] != '\0') {
            tab[h][l] = str[k];
            k++;
            l++;
            tab[h][l] = '\0';
        }
        k++;
        h++;
    }
    tab[h] = malloc(sizeof(char *));
    tab[h] = NULL;
    return tab;
}

char **my_str_to_word_array(char *str)
{
    return malloc_arr(str);
}

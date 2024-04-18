/*
** EPITECH PROJECT, 2023
** my_str_to_word_array for setting up
** File description:
** my_str_to_word_array for setting up
*/

#include <stdlib.h>
#include "my.h"

char **my_str_to_array(char const *str, int line, int i, int j)
{
    int k = 0;
    char **array = malloc(sizeof(char *) * (line + 1));

    for (line; line != 0; line--) {
        array[j] = malloc(sizeof(char) * my_strlen(str));
        j++;
    }
    j = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n') {
            array[j][k] = str[i];
            k++;
        } else {
            array[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    return array;
}

/*
** EPITECH PROJECT, 2023
** my_str_to_array
** File description:
** my_str_to_array
*/

#include <stdlib.h>
#include "my.h"

int count(char const *buffer)
{
    int line = 1;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            line++;
        i++;
    }
    return line;
}

char **str_to_array(char const *str, int line, int i, int j)
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

char **my_str_to_array(char const *str)
{
    int line = count(str);

    return str_to_array(str, line, 0, 0);
}

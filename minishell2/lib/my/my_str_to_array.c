/*
** EPITECH PROJECT, 2023
** my_str_to_array
** File description:
** my_str_to_array
*/

#include <stdlib.h>
#include "my.h"

int count(char const *buffer, char delimiter)
{
    int line = 1;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == delimiter)
            line++;
        i++;
    }
    return line;
}

char **my_str_to_array_2(char const *str, int line, char delimiter, int j)
{
    int k = 0;
    char **array = malloc(sizeof(char *) * (line + 1));

    for (line; line != 0; line--) {
        array[j] = malloc(sizeof(char) * my_strlen(str));
        j++;
    }
    j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != delimiter) {
            array[j][k] = str[i];
            k++;
        } else {
            array[j][k] = '\0';
            j++;
            k = 0;
        }
    }
    return array;
}

char **my_str_to_array(char const *str, char delimiter)
{
    int line = count(str, delimiter);

    my_str_to_array_2(str, line, delimiter, 0);
}

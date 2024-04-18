/*
** EPITECH PROJECT, 2023
** generation of map
** File description:
** generation of map
*/

#include "my.h"
#include <stdlib.h>

int count(char *buffer)
{
    int line = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            line++;
        i++;
    }
    return line;
}

void print_map(char **buffer)
{
    int i = 0;

    while (buffer[i] != NULL) {
        my_putstr(buffer[i]);
        my_putchar('\n');
        i++;
    }
    free(buffer);
}

char *creat_generation(int size, char *paterne)
{
    char *str = malloc(sizeof(char) * ((size * size) + size));
    int i = 0;
    int j = 0;
    int count = 0;

    while (i != ((size * size) + size)) {
        str[i] = paterne[j];
        count++;
        i++;
        j++;
        if (paterne[j] == '\0') {
            j = 0;
        }
        if (count == size) {
            str[i] = '\n';
            count = 0;
            i++;
        }
    }
    return str;
}

int erreur_generation(char **argv)
{
    int i = 0;

    while (argv[1][i] != '\0') {
        if (argv[1][i] < '0' || argv[1][i] > '9')
            return 84;
        i++;
    }
    i = 0;
    while (argv[2][i] != '\0') {
        if (argv[2][i] != '.' && argv[2][i] != 'o')
            return 84;
        i++;
    }
    return 0;
}

int generation(char **argv, char *paterne, int size)
{
    char *buffer;
    char **buffer_arr;
    int **arr;
    char **tab;
    int rows = 0;
    int cols = 0;

    buffer = creat_generation(size, paterne);
    buffer_arr = my_str_to_array(buffer, count(buffer), 0, 0);
    rows = my_getnbr(argv[1]);
    cols = my_getnbr(argv[1]);
    arr = malloc_array(arr, rows, cols);
    replace_map_by_nbr_gn(arr, buffer_arr);
    complet_by_nbr_gn(buffer_arr, rows);
    algo_1(arr, rows, cols);
    algo_2(buffer_arr, arr, rows, cols);
    print_find_char_gn(buffer_arr);
    return 0;
}

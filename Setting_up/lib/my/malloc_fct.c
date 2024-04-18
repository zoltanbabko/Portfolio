/*
** EPITECH PROJECT, 2024
** malloc
** File description:
** malloc
*/

#include "my.h"

int **malloc_fct(char const *buffer)
{
    int **arr;
    int rows = my_getnbr(nb_rows(buffer));
    int cols = nb_cols(buffer);
    int i = 0;

    arr = malloc(sizeof(int *) * rows);
    for (i = 0; i != rows; i++)
        arr[i] = malloc(sizeof(int) * cols);
    arr[i] = NULL;
    return (arr);
}

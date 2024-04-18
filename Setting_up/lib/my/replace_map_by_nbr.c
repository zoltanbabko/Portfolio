/*
** EPITECH PROJECT, 2024
** fill tab
** File description:
** fill tab
*/

#include "my.h"


int test_value(char *buffer, int index)
{
    int value;

    if (buffer[index] == '.')
        value = 1;
    if (buffer[index] != '.')
        value = 0;
    return value;
}

int **replace_map_by_nbr(int **arr, char *buffer)
{
    int index = my_strlen(nb_rows(buffer)) + 1;
    int rows = my_getnbr(nb_rows(buffer));
    int cols = nb_cols(buffer);
    int value;

    for (int i = 0; i != rows; i++) {
        for (int j = 0; j != cols; j++) {
            value = test_value(buffer, index);
            arr[i][j] = value;
            index++;
        }
        index++;
    }
    return (arr);
}

int **test_2(int **arr, char **buffer_arr, int i, int j)
{
    if (buffer_arr[i][j] == '.')
        arr[i][j] = 1;
    if (buffer_arr[i][j] == 'o')
        arr[i][j] = 0;
    return arr;
}

int **replace_map_by_nbr_gn(int **arr, char **buffer_arr)
{
    int i = 0;
    int j = 0;
    int value;

    while (buffer_arr[i] != NULL) {
        while (buffer_arr[i][j] != '\0') {
            arr = test_2(arr, buffer_arr, i, j);
            j++;
        }
        j = 0;
        i++;
    }
    return (arr);
}

/*
** EPITECH PROJECT, 2024
** my generation 2
** File description:
** my generation 2
*/

#include "my.h"

char **confirme_gn(char **map, int i, int j)
{
    if (map[i][j] == '.')
        map[i][j] = '1';
    else
        map[i][j] = '0';
    return map;
}

char **complet_by_nbr_gn(char **map, int rows)
{
    int i = 0;
    int j = 0;

    while (i < rows) {
        while (map[i][j] != '\0') {
            map = confirme_gn(map, i, j);
            j++;
        }
        j = 0;
        i++;
    }
    return map;
}

int **malloc_array(int **arr, int rows, int cols)
{
    arr = (int **)malloc(sizeof(int *) * rows + 1);
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(sizeof(int) * cols + 1);
    }
    return arr;
}

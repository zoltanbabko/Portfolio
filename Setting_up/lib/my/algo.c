/*
** EPITECH PROJECT, 2024
** algo
** File description:
** algo
*/

#include "my.h"

int petit_number(int **arr, int i, int j)
{
    int x = arr[i][j - 1];
    int y = arr[i - 1][j - 1];
    int z = arr[i - 1][j];

    if (x == y && x == z && y == z)
        return (x + 1);
    if (x <= y && x <= z)
        return (x + 1);
    if (y <= x && y <= z)
        return (y + 1);
    if (z <= x && z <= y)
        return (z + 1);
    return (0);
}

int **algo_1_bis(int cols, int **arr, int i)
{
    for (int j = 1; j != cols; j++) {
        if (arr[i][j] != 0) {
            arr[i][j] = petit_number(arr, i, j);
        }
    }
    return arr;
}

int **algo_1(int **arr, int rows, int cols)
{
    for (int i = 1; i != rows; i++) {
        arr = algo_1_bis(cols, arr, i);
    }
    return (arr);
}

/*
** EPITECH PROJECT, 2024
** algo 3
** File description:
** algo 3
*/

#include "my.h"

int biggest_number_bis(int cols, int **arr, int bigger_nb, int i)
{
    for (int j = 0; j != cols; j++) {
        if (arr[i][j] > bigger_nb)
            bigger_nb = arr[i][j];
    }
    return bigger_nb;
}

int get_i_2(int **arr, int cols, int nb, int i)
{
    for (int j = 0; j != cols; j++) {
        if (arr[i][j] == nb)
            return (i);
    }
    return 0;
}

int get_j_2(int **arr, int cols, int nb, int i)
{
    for (int j = 0; j != cols; j++) {
        if (arr[i][j] == nb)
            return (j);
    }
    return 0;
}

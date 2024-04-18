/*
** EPITECH PROJECT, 2024
** algo2
** File description:
** algo2
*/

#include "my.h"

int biggest_number(int **arr, int rows, int cols)
{
    int bigger_nb = 0;

    for (int i = 0; i != rows; i++) {
        bigger_nb = biggest_number_bis(cols, arr, bigger_nb, i);
    }
    return (bigger_nb);
}

int get_i(int **arr, int rows, int cols, int nb)
{
    int value;

    for (int i = 0; i != rows; i++) {
        value = get_i_2(arr, cols, nb, i);
        if (value != 0)
            return value;
    }
    return (0);
}

int get_j(int **arr, int rows, int cols, int nb)
{
    int value;

    for (int i = 0; i != rows; i++) {
        value = get_j_2(arr, cols, nb, i);
        if (value != 0)
            return value;
    }
    return (0);
}

char **algo_2(char **tab, int **arr, int rows, int cols)
{
    int nb = biggest_number(arr, rows, cols);
    int i = get_i(arr, rows, cols, nb);
    int j = get_j(arr, rows, cols, nb);

    for (int a = i - (nb - 1); a <= i; a++) {
        for (int b = j - (nb - 1); b <= j; b++)
            tab[a][b] = 'x';
    }
    return (tab);
}

/*
** EPITECH PROJECT, 2023
** encrypted
** File description:
** encrypted
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void matrix_message_encrypted(int **str, int len, int **a, int n, char **argv)
{
    int k = 0;
    int **b = (int **)malloc(n * sizeof(int *));
    int x = 2;

    while ((x * x) < my_strlen(argv[2])) {
        x++;
    }
    for (int i = 0; i < n; i++) {
        b[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
            if (k < len) {
                b[i][j] = str[k++][0];
            } else {
                b[i][j] = 0;
            }
        }
    }
    display_produit(multiplication_matrix(a, b, argv), len, argv);
}

void information(char **argv, int **str, int **a)
{
    int len = my_strlen(argv[1]);
    int n = 1;
    int x = 2;

    while ((x * x) < my_strlen(argv[2])) {
        x++;
    }
    while ((n * x) < len) {
        n++;
    }
    matrix_message_encrypted(str, len, a, n, argv);
}

int encrypted(char **argv, int **a)
{
    int len = strlen(argv[1]);
    int **str = (int **)malloc(len * sizeof(int *));

    for (int i = 0; i < len; i++) {
        str[i] = (int *)malloc(sizeof(int));
        str[i][0] = (int)argv[1][i];
    }
    information(argv, str, a);
    for (int i = 0; i < len; i++) {
        free(str[i]);
    }
    free(str);
    return 0;
}

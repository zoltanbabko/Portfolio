/*
** EPITECH PROJECT, 2023
** flag_t
** File description:
** flag_t
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int flag_t_arc(char **argv, int n, int x, int y)
{
    int i = atoi(argv[n + 1]);
    int j = atoi(argv[n + 2]);
    int a[3][3] = { {1, 0, i}, {0, 1, j}, {0 , 0, 1} };
    int **result;

    if (!isFloat(argv[n + 1])) {
        return 84;
    }
    if (!isFloat(argv[n + 2])) {
        return 84;
    }
    printf("Translation along vector (%d, %d)\n", i, j);
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++) {
            printf("%.2f\t", (float)a[i][j]);
        }
        printf("\n");
    }
    result = calcul_matric(a, x, y);
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", (float)x, (float)y, (float)result[0][0], (float)result[1][0]);        

    for (int i = 0; i < 3; i++) {
        free(result[i]);
    }
    free(result);
    return 0;
}

/*
** EPITECH PROJECT, 2023
** calcul
** File description:
** calcul
*/

#include <stddef.h>
#include <stdio.h>
#include "my.h"

int **calcul_matric(int a[3][3], int x, int y)
{
    int **result = (int**)malloc(3 * sizeof(int*));
    int vector[3][1] = {x, y, 1};

    for (int i = 0; i < 3; i++) {
        result[i] = (int*)malloc(sizeof(int));
        result[i][0] = 0;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][0] += a[i][j] * vector[j][0];
        }
    }
    return result;
}

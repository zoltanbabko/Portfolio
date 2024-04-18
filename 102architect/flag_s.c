/*
** EPITECH PROJECT, 2023
** flag_s
** File description:
** flag_s
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "my.h"

int flag_s(char **argv, int n ,int x, int y)
{
    int angle = atoi(argv[n + 1]);
    float radiant = angle * (M_PI / 180);
    float cosinus = cos(2 * radiant);
    float sinus = sin(2 * radiant);
    int a[3][3] = { {cosinus, sinus, 0}, {sinus, -cosinus, 0}, {0 , 0, 1} };
    int **result;

    if (!isFloat(argv[n + 1])) {
        return 84;
    }
    printf("Reflection over an axis with an inclination angle of %d degrees\n", angle);
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
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

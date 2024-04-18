/*
** EPITECH PROJECT, 2023
** calcul matrix
** File description:
** calcul matrix
*/

#include "my.h"

void display_produit(int **result, int len, char **argv)
{
    int i = 0;
    int j = 0;
    int x = 1;
    int n = 2;

    while ((x * 3) < len) {
        x++;
    }
    while ((n * n) < my_strlen(argv[2])) {
        n++;
    }
    printf("Encrypted message:\n");
    for (i = 0; i < x; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d", result[i][j]);
            if (result[i][j + 1] != '\0' || result[i + 1] != NULL) {
                printf(" ");
            }
            
        }
    }
    printf("\n");
}

int **multiplication_matrix(int **a, int **b, char **argv)
{
    int len = my_strlen(argv[1]);
    int n = 2;
    int x = 1;
    int i = 0;
    int j = 0;
    int k = 0;
    int **result;

    while ((n * n) < my_strlen(argv[2])) {
        n++;
    }
    while ((x * 3) < len) {
        x++;
    }
    result = (int **)malloc(x * sizeof(int *) + n);
    for (i = 0; i < x; ++i) {
        result[i] = (int *)malloc(n * sizeof(int) + x);
    }
    i = 0;
    while (i < n) {
        while (j < x) {
            while (k < n) {
                result[j][i] += (a[k][i] * b[j][k]);
                k++;
            }
            j++;
            k = 0;
        }
        i++;
        j = 0;
    }
    return result;
}

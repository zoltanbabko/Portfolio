/*
** EPITECH PROJECT, 2023
** decrypted
** File description:
** decrypted
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void matrix_message_decrypted(int **str, int len, int **a, int n)
{
    int k = 0;
    int **b = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        b[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (k < len) {
                b[i][j] = str[k++][0];
            } else {
                b[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void information_d(char **argv, int **str, int **a)
{
    int len = my_strlen(argv[1]);
    int n = 1;

    while ((n * 3) < len) {
        n++;
    }
    matrix_message_decrypted(str, len, a, n);
}

int decrypted(char **argv, int **a)
{
    int len = strlen(argv[1]);
    char **str = (char **)malloc(len * sizeof(char *));

    for (int i = 0; i < len; i++) {
        str[i] = (char *)malloc(sizeof(char));
        str[i][0] = (char)argv[1][i];
    }
    for (int i = 0; i < len; i++) {
        printf("%c", str[i][0]);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        free(str[i]);
    }
    free(str);
    return 0;
}

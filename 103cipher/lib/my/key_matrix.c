/*
** EPITECH PROJECT, 2023
** key matrix
** File description:
** key matrix
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int test_message(char **argv, int n, int **a)
{
    if (argv[3][0] == '0')
        return encrypted(argv, a);
    else
        return decrypted(argv, a);
    return 84;
}

int key_matrix(char *str, int len, char **argv, int n)
{
    int k = 0;
    int **a = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k < len) {
                a[i][j] = (int)str[k++];
            } else {
                a[i][j] = 0;
            }
        }
    }
    printf("Key matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i", a[i][j]);
            if (j != n - 1)
                printf("\t");
            
        }
        printf("\n");
    }
    my_putchar('\n');
    return test_message(argv, n, a);
}

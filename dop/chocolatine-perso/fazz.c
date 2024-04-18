/*
** EPITECH PROJECT, 2024
** fazzbizz
** File description:
** fazzbizz
*/


#include <stdio.h>
#include <stdlib.h>

int start(char **argv)
{
    int nb1 = atoi(argv[1]);
    int nb2 = atoi(argv[2]);         

    while (nb1 <= nb2) {
        if (nb1 % 10 == 0 && nb1 % 9 == 0)
            printf("FazzBizz\n");
        if (nb1 % 10 == 0 && nb1 % 9 != 0)
            printf("Fazz\n");
        if (nb1 % 9 == 0 && nb1 % 10 != 0)
            printf("Bizz\n");
        if (nb1 % 9 != 0 && nb1 % 10 != 0)
            printf("%d\n", nb1);
        nb1++;
    }
    return 0;
}

int test_error(char **argv)
{
    int nb1 = 0;
    int nb2 = 0;

    for (int i = 0; argv[1][i] != '\0'; i++) {
        if ((argv[1][i] < '0' || argv[1][i] > '9') && argv[1][i] != '-')
            return 84;
    }
    for (int i = 0; argv[2][i] != '\0'; i++) {
        if ((argv[2][i] < '0' || argv[2][i] > '9') && argv[2][i] != '-')
            return 84;
    }
    nb1 = atoi(argv[1]);
    nb2 = atoi(argv[2]);
    if (nb1 > nb2) {
        printf("Error: the second parameter must be greater than the");
        printf("first one.\n");
        return 84;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return 84;
    if (argc == 3) {
        if (test_error(argv) != 0)
            return 84;
        return start(argv);
    }
}

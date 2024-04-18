/*
** EPITECH PROJECT, 2023
** cipher
** File description:
** cipher
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int execution(char **argv)
{
    int len = my_strlen(argv[2]);

    int n = 2;

    while ((n * n) < len) {
        n++;
    }
    return key_matrix(argv[2], len, argv, n);
}

int condition(int argc, char **argv)
{
    if (argc > 4)
        return 84;
    if (argc < 4)
        return 84;
    if (argc == 4) {
        if ((argv[3][0] == '0' || argv[3][0] == '1') && argv[3][1] == '\0') {
            execution(argv);
            return 0;
        } else
            return 84;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-')
            return flag_help(argv);
    } else {
        return condition(argc, argv);
    }
}

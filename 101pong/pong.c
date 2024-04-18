/*
** EPITECH PROJECT, 2023
** pong
** File description:
** pong
*/

#include "my.h"

int main(int argc, char **argv)
{
    int n = 0;
    int i = 1;

    while (argv[i] != NULL) {
        if (!isFloat(argv[i])) {
            return 84;
        }
        i++;
    }
    if (argc != 8) {
        return 84;
    }
    n = atof(argv[7]);
    if (n < 0) {
        return 84;
    }
    return rules(argc, argv);
}

int isFloat(char *str)
{
    char *endptr;
    strtof(str, &endptr);

    return (*endptr == '\0' && *str != '\0');
}

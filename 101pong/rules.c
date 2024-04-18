/*
** EPITECH PROJECT, 2023
** rules
** File description:
** rules
*/

#include "my.h"

int rules(int argc, char **argv)
{
    float n = atof(argv[7]);
    int i = 0;

    i = n;
    n -= i;
    if (n != 0) {
        return 84;
    }
    if (argc == 8 && n == 0) {
        velocity(argc, argv);
        time(argc, argv);
        condition(argc, argv);
        return 0;
    }
    if (argc == 8) {
        velocity(argc, argv);
        time(argc, argv);
        condition(argc, argv);
        return 0;
    }
}

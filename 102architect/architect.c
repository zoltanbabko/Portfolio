/*
** EPITECH PROJECT, 2023
** architech
** File description:
** architect
*/

#include <stddef.h>
#include "my.h"

int choix(char **argv, int i, int x, int y)
{
    switch (argv[i][1]) {
    case 't':
        return flag_t_arc(argv, i, x, y);
        break;
    case 'z':
        return flag_z(argv, i, x, y);
        break;
    case 'r':
        return flag_r(argv, i, x, y);
        break;
    case 's':
        return flag_s(argv, i, x, y);
        break;
    }
    return 84;   
}

int main(int argc, char **argv)
{
    int i = 0;
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int value;

    if (!isFloat(argv[1])) {
        return 84;
    }
    if (!isFloat(argv[2])) {
            return 84;
    }
    if (argc <= 3 || argc <= 4)
        return 84;
    while (argv[i] != NULL) {
        if (argv[i][0] == '-' && (argv[i][1] < '0' || argv[i][1] > '9')) {
            value = choix(argv, i, x, y);
        }
        i++;
    }
    return value;
}

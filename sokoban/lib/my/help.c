/*
** EPITECH PROJECT, 2024
** help
** File description:
** help
*/

#include "my.h"

int help(char **argv)
{
    switch (argv[1][1]) {
    case 'h':
        my_putstr("USAGE\n    ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n    map file representing the warehouse map,");
        my_putstr(" containing '#' for walls,\n        'P' for player, 'X'");
        my_putstr(" for boxes and 'O' for storage locations.\n");
        return 0;
        break;
    }
    return 84;
}

/*
** EPITECH PROJECT, 2023
** flag_help
** File description:
** flag_help
*/

#include "my.h"

int flag_help(char **argv)
{
    switch (argv[1][1]) {
    case 'h':
        my_putstr("USAGE\n    ./105demography [code]+\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    code    contry code\n");
        return 0;
        break;
    }
    return 84;
}

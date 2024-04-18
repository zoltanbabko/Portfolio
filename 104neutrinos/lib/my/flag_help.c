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
        my_putstr("USAGE\n    ./104neutrinos n a h sd\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    n       number of values\n");
        my_putstr("    a       arithmetic mean\n");
        my_putstr("    h       harmonic mean\n");
        my_putstr("    sd      standard deviation\n");
        return 0;
        break;
    }
    return 84;
}

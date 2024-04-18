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
        my_putstr("USAGE\n\t./mysh [option]\n");
        my_putstr("DESCRIPTION\n\tUNIX command interpreter.\n");
        my_putstr("OPTION\n\tInsert option\n");
        return 0;
        break;
    }
    return 84;
}

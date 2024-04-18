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
        my_putstr("USAGE\n    ./103cipher message key flag\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    message    a message, made of ASCII characters\n");
        my_putstr("    key        the encryption key, made of ASCII characters\n");
        my_putstr("    flag       0 for the message to be encrypted, 1 to be decrypted\n");
        return 0;
        break;
    }
    return 84;
}

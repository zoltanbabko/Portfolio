/*
** EPITECH PROJECT, 2024
** demographic
** File description:
** demographic
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-')
            return flag_help(argv);
    }
    return 84;
}

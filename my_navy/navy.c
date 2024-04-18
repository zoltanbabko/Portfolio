/*
** EPITECH PROJECT, 2024
** navy
** File description:
** navy
*/

#include "my.h"
#include <signal.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    int fd;

    if (argc < 2)
        return 84;
    if (argc == 2) {
        if (argv[1][0] == '-') {
            return flag_help(argv);
        }
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
            return 84;
        return player_1_connexion(argv);
    }
    if (argc == 3)
        return test_arg_player_2(argv);
    if (argc > 3)
        return 84;
}

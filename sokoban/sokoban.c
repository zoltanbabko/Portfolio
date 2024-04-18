/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "lib/my/my.h"

int main(int argc, char **argv)
{
    struct stat sb;

    if (argc < 2 || argv[1] == NULL || argc > 2) {
        return 84;
    }
    if (argv[1][0] == '-') {
        return help(argv);
    }
    if (lstat(argv[1], &sb) == -1) {
        perror("lstat");
        exit(EXIT_FAILURE);
    }
    switch (sb.st_mode & __S_IFMT) {
    case __S_IFREG:
        return start_game(argv);
    }
    return 84;
}

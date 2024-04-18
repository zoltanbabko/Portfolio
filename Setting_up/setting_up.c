/*
** EPITECH PROJECT, 2023
** setting up
** File description:
** setting up
*/

#include "my.h"

int choix(int argc, char **argv)
{
    int size;
    char *paterne;
    int fd;

    if (argc == 2) {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
            return 84;
        else
            return basic_find(argv);
    }
    if (argc == 3) {
        if (erreur_generation(argv) != 0)
            return 84;
        size = my_getnbr(argv[1]);
        paterne = argv[2];
        return generation(argv, paterne, size);
    }
    return 84;
}

int main(int ac, char **av)
{
    return choix(ac, av);
}

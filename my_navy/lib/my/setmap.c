/*
** EPITECH PROJECT, 2024
** set maps
** File description:
** set maps
*/

#include "my.h"
#include <stdlib.h>

int verification_coordonnees1(char *file, char **map, char **argv)
{
    int fd;
    char *buffer = malloc(sizeof(char) * 31 + 1);
    char **coordonnees;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return 84;
    read(fd, buffer, 31);
    coordonnees = my_str_to_array(buffer, 4, 0, 0);
    if (coordonnees[0][0] != '2')
        return 84;
    if (coordonnees[1][0] != '3')
        return 84;
    if (coordonnees[2][0] != '4')
        return 84;
    if (coordonnees[3][0] != '5')
        return 84;
    return true_coordonnees1(coordonnees, map, argv);
}

int verification_coordonnees2(char *file, char **map, char **argv)
{
    int fd;
    char *buffer = malloc(sizeof(char) * 31 + 1);
    char **coordonnees;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return 84;
    read(fd, buffer, 31);
    coordonnees = my_str_to_array(buffer, 4, 0, 0);
    if (coordonnees[0][0] != '2')
        return 84;
    if (coordonnees[1][0] != '3')
        return 84;
    if (coordonnees[2][0] != '4')
        return 84;
    if (coordonnees[3][0] != '5')
        return 84;
    return true_coordonnees2(coordonnees, map, argv);
}

int setmap_p1(char **argv)
{
    int fd;
    char *buffer = malloc(sizeof(char) * 179 + 1);
    char **map;

    fd = open("./map", O_RDONLY);
    read(fd, buffer, 179);
    map = my_str_to_array(buffer, 10, 0, 0);
    return verification_coordonnees1(argv[1], map, argv);
}

int setmap_p2(char **argv)
{
    int fd;
    char *buffer = malloc(sizeof(char) * 179 + 1);
    char **map;

    fd = open("./map", O_RDONLY);
    read(fd, buffer, 179);
    map = my_str_to_array(buffer, 10, 0, 0);
    return verification_coordonnees2(argv[2], map, argv);
}

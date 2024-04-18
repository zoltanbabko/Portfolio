/*
** EPITECH PROJECT, 2024
** deplacement_player.c
** File description:
** deplacement du joueur
*/

#include "my.h"

int gauche(char **map)
{
    int i = position_i(map);
    int j = position_j(map);

    if ((map[i][j - 1] == '#') || (map[i][j - 2] == '#'
        && map[i][j - 1] == 'X')) {
        return (0);
    }
    if (map[i][j - 1] == 'X') {
        if (map[i][j - 2] == 'X')
            return (0);
        map[i][j - 2] = 'X';
    }
    map[i][j] = ' ';
    map[i][j - 1] = 'P';
    return 0;
}

int droite(char **map)
{
    int i = position_i(map);
    int j = position_j(map);

    if (map[i][j + 1] == 'X') {
        if (map[i][j + 2] == 'X')
            return (0);
        map[i][j + 2] = 'X';
    }
    if ((map[i][j + 1] == '#') || (map[i][j + 2] == '#'
        && map[i][j + 1] == 'X')) {
        return (0);
    }
    map[i][j] = ' ';
    map[i][j + 1] = 'P';
}

int haut(char **map)
{
    int i = position_i(map);
    int j = position_j(map);

    if (map[i - 1][j] == 'X') {
        if (map[i - 2][j] == 'X')
            return (0);
        map[i - 2][j] = 'X';
    }
    if ((map[i - 1][j] == '#') || (map[i - 2][j] == '#'
        && map[i - 1][j] == 'X')) {
        return (0);
    }
    map[i][j] = ' ';
    map[i - 1][j] = 'P';
}

int bas(char **map)
{
    int i = position_i(map);
    int j = position_j(map);

    if (map[i + 1][j] == 'X') {
        if (map[i + 2][j] == 'X')
            return (0);
        map[i + 2][j] = 'X';
    }
    if ((map[i + 1][j] == '#') || (map[i + 2][j] == '#'
        && map[i + 1][j] == 'X')) {
        return (0);
    }
    map[i][j] = ' ';
    map[i + 1][j] = 'P';
}

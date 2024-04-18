/*
** EPITECH PROJECT, 2024
** replace_map
** File description:
** replace_map
*/

#include "my.h"

int replace_alpha(char alpha)
{
    int integer;

    if ((int)alpha >= 65 && (int)alpha <= 72)
        integer = (int)alpha - 65;
    if ((int)alpha >= 49 && (int)alpha <= 57)
        integer = (int)alpha - 49;
    return integer;
}

int meme_lettre(char **coo, int i, char **map_player)
{
    int nb = replace_alpha(coo[i][3]);
    int col = replace_alpha(coo[i][2]);

    while (nb <= replace_alpha(coo[i][6])) {
        map_player[nb + 2][2 + col * 2] = coo[i][0];
        nb++;
    }
    return 0;
}

int meme_chiffre(char **coo, int i, char **map_player)
{
    int nb = replace_alpha(coo[i][2]);
    int ligne = replace_alpha(coo[i][3]);

    while (nb <= replace_alpha(coo[i][5])) {
        map_player[ligne + 2][2 + nb * 2] = coo[i][0];
        nb++;
    }
    return 0;
}

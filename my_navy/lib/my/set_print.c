/*
** EPITECH PROJECT, 2024
** play game
** File description:
** play game
*/

#include "my.h"

int print_maps(char **map_player, char **map_enemy)
{
    my_putstr("\nmy_navy:\n");
    my_putarray(map_player);
    my_putchar('\n');
    my_putstr("enemy navy:\n");
    my_putarray(map_enemy);
    my_putchar('\n');
}

int set_file_to_map1(char **coo, char **map, char **argv)
{
    char **map_player = map;
    int fd;
    char *buffer = malloc(sizeof(char) * 179 + 1);
    char **map_enemy;
    int i = 0;

    while (coo[i] != NULL) {
        if (coo[i][2] == coo[i][5])
            meme_lettre(coo, i, map_player);
        if (coo[i][3] == coo[i][6])
            meme_chiffre(coo, i, map_player);
        i++;
    }
    fd = open("./map", O_RDONLY);
    read(fd, buffer, 179);
    map_enemy = my_str_to_array(buffer, 10, 0, 0);
    print_maps(map_player, map_enemy);
    cree_map_p_1(map_player);
    return play_p1(argv, map_player, map_enemy);
}

int set_file_to_map2(char **coo, char **map, char **argv)
{
    char **map_player = map;
    int fd;
    char *buffer = malloc(sizeof(char) * 179 + 1);
    char **map_enemy;
    int i = 0;

    while (coo[i] != NULL) {
        if (coo[i][2] == coo[i][5])
            meme_lettre(coo, i, map_player);
        if (coo[i][3] == coo[i][6])
            meme_chiffre(coo, i, map_player);
        i++;
    }
    fd = open("./map", O_RDONLY);
    read(fd, buffer, 179);
    map_enemy = my_str_to_array(buffer, 10, 0, 0);
    print_maps(map_player, map_enemy);
    cree_map_p_2(map_player);
    cree_pid_p2(getpid());
    return play_p2(argv, map_player, map_enemy);
}

int true_coordonnees1(char **cdn, char **map, char **argv)
{
    int i = 0;
    int count = 0;

    while (cdn[i] != NULL) {
        if (cdn[i][2] == cdn[i][5])
            count += 2;
        if (cdn[i][3] == cdn[i][5])
            count += 2;
        if (cdn[i][2] == cdn[i][6])
            count += 2;
        if (cdn[i][3] == cdn[i][6])
            count += 2;
        if (count != 2)
            return 84;
        count = 0;
        i++;
    }
    return set_file_to_map1(cdn, map, argv);
}

int true_coordonnees2(char **cdn, char **map, char **argv)
{
    int i = 0;
    int count = 0;

    while (cdn[i] != NULL) {
        if (cdn[i][2] == cdn[i][5])
            count += 2;
        if (cdn[i][3] == cdn[i][5])
            count += 2;
        if (cdn[i][2] == cdn[i][6])
            count += 2;
        if (cdn[i][3] == cdn[i][6])
            count += 2;
        if (count != 2)
            return 84;
        count = 0;
        i++;
    }
    return set_file_to_map2(cdn, map, argv);
}

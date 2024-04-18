/*
** EPITECH PROJECT, 2024
** play game
** File description:
** play game
*/

#include "my.h"

int deplacement(char **map, int touche)
{
    switch (touche) {
    case KEY_LEFT:
        gauche(map);
        break;
    case KEY_RIGHT:
        droite(map);
        break;
    case KEY_UP:
        haut(map);
        break;
    case KEY_DOWN:
        bas(map);
        break;
    return 0;
    }
}

void initial(void)
{
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
}

void reload(void)
{
    clear();
    refresh();
}

int play_game(char **map)
{
    int len = count_line(map) / 2;
    int fin = 1;
    int touche = 0;

    initial();
    while (fin != 0) {
        if (test_victoire(map) == 0) {
            fin = 0;
            return fin;
        }
        for (int i = 0; map[i] != NULL; i++)
            mvprintw((LINES / 2 + i) - len, COLS / 2 - len, "%s", map[i]);
        if (fin == 1) {
            touche = getch();
            deplacement(map, touche);
        }
        reload();
    }
    endwin();
    return fin;
}

int start_game(char **argv)
{
    char *buff = open_file(argv[1]);
    char **buffer = my_str_to_array(buff, count(buff), 0, 0);

    play_game(buffer);
    return 0;
}

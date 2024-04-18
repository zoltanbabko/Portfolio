/*
** EPITECH PROJECT, 2024
** put tab
** File description:
** put tab
*/

#include "my.h"

char **change_int(char **tab, int i, int j)
{
    if (tab[i][j] == '1')
        tab[i][j] = '.';
    if (tab[i][j] == '0')
        tab[i][j] = 'o';
    return tab;
}

void print_find_char(char **tab)
{
    int i = 1;
    int j = 0;

    while (tab[i] != NULL) {
        while (tab[i][j] != '\0') {
            tab = change_int(tab, i, j);
            j++;
        }
        j = 0;
        i++;
    }
    i = 1;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}

void print_find_char_gn(char **tab)
{
    int i = 0;
    int j = 0;

    while (tab[i] != NULL) {
        while (tab[i][j] != '\0') {
            tab = change_int(tab, i, j);
            j++;
        }
        j = 0;
        i++;
    }
    i = 0;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}

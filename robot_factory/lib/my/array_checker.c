/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-robotfactory-robin.wipff
** File description:
** array_checker.c
*/

#include "my.h"

int check_body(char **tab)
{
    return 0;
}

int check_header(char **tab)
{
    char *true_name = ".name ";
    char *true_comment = ".comment ";
    int nbrquotes_n = 0;
    int nbrquotes_c = 0;

    for (int i = 0; tab[0][i] != '\0'; i++) {
        if (tab[0][i] == '"')
            nbrquotes_n++;
    }
    for (int i = 0; tab[1][i] != '\0'; i++) {
        if (tab[1][i] == '"')
            nbrquotes_c++;
    }
    if (my_strncmp(tab[0], true_name, 5) != 0 || nbrquotes_n != 2 ||
    my_strncmp(tab[1], true_comment, 8) != 0 || nbrquotes_c != 2) {
        return 84;
    } else {
        return 0;
    }
}

int array_checker(char **tab)
{
    if (check_header(tab) == 84)
        return 84;
    if (check_body(tab) == 84)
        return 84;
    return 0;
}

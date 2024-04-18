/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-anew->mazed-arthur.fagueret
** File description:
** error.c
*/

#include "my.h"

// Les deux fonctions en dessous retirent les commentaires qui sont sur une
// ligne avec d'autre données et sans autre données.
// Exemple : "1 5 6 #bathroom"./ "#Hello World".

char **comment_supressor(int i, int j, char **array)
{
    if (array[i][j] == '#' && j != 0 && j != 1) {
        j--;
        while (array[i][j] == ' ') {
            array[i][j] = '\0';
            j--;
        }
    }
    return array;
}

char **convert_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        for (int j = 0; array[i][j] != '\0'; j++) {
            array = comment_supressor(i, j, array);
        }
    }
    return array;
}

int error_start_end(char **array)
{
    int start_counter = 0;
    int end_counter = 0;

    for (int i = 0; array[i] != NULL; i++) {
        if (my_strncmp(array[i], "##start\0", 8) == 0) {
            start_counter += 1;
        }
        if (my_strncmp(array[i], "##end\0", 6) == 0) {
            end_counter += 1;
        }
    }
    if (end_counter != 1 || start_counter != 1)
        return 84;
    return 0;
}

int error_checker(char **array)
{
    if (error_start_end(array) == 84)
        return 84;
    return 0;
}

/*
** EPITECH PROJECT, 2024
** play game2
** File description:
** play gmae 2
*/

#include "my.h"

int test_position_i(char **str, int i)
{
    for (int j = 0; str[i][j] != '\0'; j++) {
        if (str[i][j] == 'P') {
            return (i);
        }
    }
    return -1;
}

int test_position_j(char **str, int i)
{
    for (int j = 0; str[i][j] != '\0'; j++) {
        if (str[i][j] == 'P') {
            return (j);
        }
    }
    return -1;
}

int position_i(char **str)
{
    int value = -1;

    for (int i = 0; str[i] != NULL; i++) {
        value = test_position_i(str, i);
        if (value != -1)
            return value;
    }
    return (0);
}

int position_j(char **str)
{
    int value = -1;

    for (int i = 0; str[i] != NULL; i++) {
        value = test_position_j(str, i);
        if (value != -1)
            return value;
    }
    return (0);
}

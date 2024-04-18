/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-amazed-arthur.fagueret
** File description:
** error_2.c
*/

#include "my.h"

int checker_coo(char **array, int i)
{
    for (int j = 0; array[j] != NULL; j++) {
        if (i == j)
            j++;
        if ((array[i][1] == array[j][1]) && (array[i][2] == array[j][2]));
            return 84;
    }
    return 0;
}

int checker(char **array, int i)
{
    for (int j = 0; array[j] != NULL; j++) {
        if (i == j)
            j++;
        if (array[i][0] == array[j][0])
            return 84;
    }
    return 0;
}

int check_if_numberrooms(char **str)
{
    int value = 0;

    for (int i = 0; str[i] != NULL; i++) {
        if (checker(str, i) == 84)
            value = 84;
    }
    for (int i = 0; str[i] != NULL; i++) {
        if (checker_coo(str, i) == 84)
            value = 84;
    }
    return value;
}

char **arraycat(char **room, char **startend)
{
    int room_size = 0;
    int startend_size = 0;
    char **new_array = malloc(sizeof(room) + sizeof(startend) + 1);

    while (room[room_size] != NULL)
        room_size++;
    while (startend[startend_size] != NULL)
        startend_size++;
    for (int i = 0; i < room_size; i++) {
        new_array[i] = my_strdup(room[i]);
    }
    for (int i = 0; i < startend_size; i++) {
        new_array[room_size + i] = my_strdup(startend[i]);
    }
    new_array[room_size + startend_size] = NULL;
    return new_array;
}

int check_coordinates(char **room, char **startend)
{
    int value = 0;
    char **new_array = NULL;

    new_array = arraycat(room, startend);
    check_if_numberrooms(new_array);
    return value;
}

/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-amazed-arthur.fagueret
** File description:
** algorithm.c
*/

#include "my.h"

int number_rooms(char **room)
{
    int number = 0;

    for (int i = 0; room[i] != NULL; i++) {
        if (room[i][0] > number)
            number = room[i][0];
    }
    return number;
}

void initializelist(linkedlist_t *list)
{
    list->head = NULL;
}

void appendtolist(linkedlist_t *list, int data)
{
    return;
} // Implement cette fonction pour remplir le tableaux de liste chainées

int ini_path(list_path_t *path, char **room, char **tunnels)
{
    linkedlist_t **path_array = NULL;
    int rows = number_rooms(room);
    int cols = 3;

    path_array = (linkedlist_t **)malloc(rows * sizeof(linkedlist_t *));
    for (int i = 0; i < rows; i++) {
        path_array[i] = (linkedlist_t *)malloc(cols * sizeof(linkedlist_t));
        for (int j = 0; j < cols; j++) {
            initializelist(&path_array[i][j]);
        }
    }
    for (int i = 0; tunnels[i] != NULL; i++) {
        appendtolist(&tunnels[i][0], &tunnels[i][2]);
    }
    appendtolist(&path_array[0][0], 1);
    return 0;
}

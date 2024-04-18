/*
** EPITECH PROJECT, 2024
** amazed
** File description:
** free_all.c
*/

#include "my.h"

void free_all(amazed_t *amazed, list_path_t *path, char **file)
{
    while (amazed != NULL) {
        free(amazed->str);
        amazed = amazed->next;
    }
    free(file);
}

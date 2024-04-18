/*
** EPITECH PROJECT, 2024
** fonction disp
** File description:
** fonction disp
*/

#include "my.h"
#include "shell.h"

int disp(void *data, char **args)
{
    Objet_t **head = (Objet_t **)data;
    Objet_t *list = *head;

    if (args[0] != NULL)
        return 84;
    while (list != NULL) {
        my_printf("%s n°%d - \"%s\"\n", list->type,
            list->id, list->name);
        list = list->next;
    }
    return 0;
}

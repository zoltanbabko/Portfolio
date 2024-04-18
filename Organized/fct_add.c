/*
** EPITECH PROJECT, 2024
** add
** File description:
** add
*/

#include "shell.h"
#include "my.h"

int error_add(char **args)
{
    int i = 0;

    if (args[0] == NULL)
        return 84;
    for (i = 0; args[i] != NULL; i += 2) {
        if (my_strcmp(args[i], "WIRE") != 0
        && my_strcmp(args[i], "ACTUATOR") != 0
        && my_strcmp(args[i], "PROCESSOR") != 0
        && my_strcmp(args[i], "SENSOR") != 0
        && my_strcmp(args[i], "DEVICE") != 0) {
            return 84;
        }
        if (args[i] != NULL && args[i + 1] == NULL)
            return 84;
    }
    return 0;
}

void print_add(Objet_t *newObj)
{
    my_printf("%s n°%d - \"%s\" added.\n", newObj->type,
                newObj->id, newObj->name);
}

int add(void *data, char **args)
{
    static int id_count = 0;
    Objet_t *newObj = NULL;
    Objet_t **head = (Objet_t **)data;
    int i = 0;

    if (error_add(args) == 84)
        return 84;
    while (args[i + 1] != NULL) {
        newObj = malloc(sizeof(Objet_t));
        newObj->id = id_count;
        newObj->type = my_strdup(args[i]);
        newObj->name = my_strdup(args[i + 1]);
        newObj->next = *head;
        *head = newObj;
        i += 2;
        id_count++;
        print_add(newObj);
    }
    return 0;
}

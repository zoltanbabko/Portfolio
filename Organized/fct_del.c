/*
** EPITECH PROJECT, 2024
** fonction del
** File description:
** fonction del
*/

#include "my.h"
#include "shell.h"

int del_2(Objet_t **head, char **args, int i)
{
    Objet_t *list = *head;
    Objet_t *prev = NULL;

    if (list != NULL && list->id == my_getnbr(args[i])) {
        *head = list->next;
        print_del(list);
        free(list);
        return 0;
    }
    while (list != NULL && list->id != my_getnbr(args[i])) {
        prev = list;
        list = list->next;
    }
    if (list == NULL) {
        return 84;
    }
    prev->next = list->next;
    print_del(list);
    free(list);
    return 0;
}

int test2_invalid_id(int id, Objet_t *head)
{
    Objet_t *list = head;

    while (list != NULL) {
        if (list->id == id)
            return 0;
    }
    return 84;
}

int test1_invalid_id(void *data, char **args)
{
    Objet_t **head = (Objet_t **)data;
    int id;
    int i = 0;

    while (args[i] != NULL) {
        id = my_getnbr(args[i]);
        if (test2_invalid_id(id, *head) != 0)
            return 84;
        i++;
    }
    return 0;
}

void print_del(Objet_t *newObj)
{
    my_printf("%s n°%d - \"%s\" deleted.\n", newObj->type,
            newObj->id, newObj->name);
}

int del(void *data, char **args)
{
    Objet_t **head = (Objet_t **)data;
    int i = 0;

    while (args[i] != NULL) {
        if (test_number(args[i]) != 0)
            return 84;
        if (del_2(head, args, i) != 0)
            return 84;
        i++;
    }
    return 0;
}

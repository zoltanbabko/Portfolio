/*
** EPITECH PROJECT, 2024
** amazed
** File description:
** my_amazed_struct.c
*/

#include "my.h"

amazed_t *create_amazed(char *data)
{
    amazed_t *new_str = (amazed_t *)malloc(sizeof(amazed_t));

    if (new_str == NULL) {
        return NULL;
    }
    new_str->str = data;
    new_str->next = NULL;
    return new_str;
}

void ini_amazed(amazed_t **head, char **amazed)
{
    int i = 0;
    amazed_t *newamazed = NULL;

    while (amazed[i] != NULL) {
        if (amazed[i][0] == '#' && amazed[i][1] == '#')
            set_amazed(head, amazed[i]);
        if (amazed[i][0] != '#' && amazed[i][1] != '#')
            set_amazed(head, amazed[i]);
        i++;
    }
}

int my_amazed(amazed_t *head)
{
    while (head != NULL) {
        my_printf("%s\n", head->str);
        head = head->next;
    }
    return 0;
}

int set_amazed(amazed_t **head, char *str)
{
    amazed_t *newamazed = create_amazed(str);
    amazed_t *lastamazed = NULL;

    if (*head == NULL) {
        *head = newamazed;
        return 0;
    }
    lastamazed = *head;
    while (lastamazed->next != NULL) {
        lastamazed = lastamazed->next;
    }
    lastamazed->next = newamazed;
    return 0;
}

int unset_amazed(amazed_t **head, char *str)
{
    amazed_t *list = *head;
    amazed_t *prev = NULL;

    if (list != NULL && my_strncmp(str, list->str, my_strlen(str)) == 0) {
        *head = list->next;
        free(list);
        return 0;
    }
    while (list != NULL && my_strncmp(str, list->str, my_strlen(str)) != 0) {
        prev = list;
        list = list->next;
    }
    if (list == NULL) {
        return 0;
    }
    prev->next = list->next;
    free(list);
    return 0;
}

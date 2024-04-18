/*
** EPITECH PROJECT, 2024
** my env
** File description:
** my env
*/

#include "my.h"

Env_t *create_env(char *data)
{
    Env_t *newStr = (Env_t *)malloc(sizeof(Env_t));

    if (newStr == NULL) {
        return NULL;
    }
    newStr->str = data;
    newStr->next = NULL;
    return newStr;
}

void ini_env(Env_t **head, char **env)
{
    int i = 0;
    Env_t *newEnv;

    while (env[i] != NULL) {
        set_env(head, env[i]);
        i++;
    }
}

int my_env(Env_t *head)
{
    while (head != NULL) {
        my_printf("%s\n", head->str);
        head = head->next;
    }
    return 0;
}

int set_env(Env_t **head, char *str)
{
    Env_t *newEnv = create_env(str);
    Env_t *lastEnv;

    if (*head == NULL) {
        *head = newEnv;
        return 0;
    }
    lastEnv = *head;
    while (lastEnv->next != NULL) {
        lastEnv = lastEnv->next;
    }
    lastEnv->next = newEnv;
    return 0;
}

int unset_env(Env_t **head, char *str)
{
    Env_t *list = *head;
    Env_t *prev = NULL;

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

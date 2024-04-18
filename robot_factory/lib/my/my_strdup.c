/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-robin.wipff
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(const char *str)
{
    char *new_str = NULL;
    size_t len = my_strlen(str) + 1;

    new_str = (char *)malloc(len * sizeof(char));
    if (new_str == NULL) {
        return NULL;
    }
    my_strcpy(new_str, str);
    return new_str;
}

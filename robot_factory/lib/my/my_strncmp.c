/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-robin.wipff
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        if (s1[i] == '\0' || s2[i] == '\0')
            break;
    }
    return 0;
}

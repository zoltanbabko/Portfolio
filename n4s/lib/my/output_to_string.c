/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-zoltan.babko
** File description:
** str_to_word_array.c
*/

#include "my.h"

char **my_output_to_string(char *str, const char *delimiters)
{
    char **tab = NULL;
    size_t num_words = 0;
    char *copy = strdup(str);
    char *token = NULL;

    token = strtok(copy, delimiters);
    while (token != NULL) {
        tab = realloc(tab, (num_words + 1) * sizeof(char *));
        tab[num_words] = strdup(token);
        num_words++;
        token = strtok(NULL, delimiters);
    }
    tab = realloc(tab, (num_words + 1) * sizeof(char *));
    if (tab == NULL) {
        return NULL;
    }
    tab[num_words] = NULL;
    free(copy);
    return tab;
}

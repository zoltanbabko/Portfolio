/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-zoltan.babko
** File description:
** need4steak.c
*/

#include "my.h"

stats_t init_struct(stats_t *new)
{
    new->velocity = 0.5;
    return *new;
}

int main(void)
{
    stats_t *new = malloc(sizeof(stats_t));

    if (new == NULL)
        return 84;
    *new = init_struct(new);
    printf("START_SIMULATION\n");
    start(new);
    free(new);
    return 0;
}

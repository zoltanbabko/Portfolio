/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-zoltan.babko
** File description:
** need4steak.c
*/

#include "my.h"

int main(void)
{
    char *start_sim = NULL;
    size_t buf_size = 0;

    dprintf(1, "START_SIMULATION\n");
    getline(&start_sim, &buf_size, stdin);
    start();
    return 0;
}

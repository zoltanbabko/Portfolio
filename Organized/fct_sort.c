/*
** EPITECH PROJECT, 2024
** fontion sort
** File description:
** fonction sort
*/

#include "shell.h"
#include "my.h"

void my_swap_list(Objet_t *list_1, Objet_t *list_2)
{
    Objet_t temp = *list_1;

    *list_1 = *list_2;
    *list_2 = temp;
}

int sort(void *data, char **args)
{
    return 0;
}

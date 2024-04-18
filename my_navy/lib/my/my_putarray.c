/*
** EPITECH PROJECT, 2024
** put array
** File description:
** put array
*/

#include "my.h"

void my_putarray(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_putstr(array[i]);
        my_putchar('\n');
        i++;
    }
}

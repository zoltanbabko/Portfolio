/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** my_swap_c
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int tmpo = *a;

    *a = *b;
    *b = tmpo;
}

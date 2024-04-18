/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** my compute power rec
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (nb == 0) {
        return 1;
    } else if (p < 0) {
        return 0;
    } else {
        result = nb * my_compute_power_rec(nb, p - 1);
    }
    return result;
}

/*
** EPITECH PROJECT, 2024
** calcul a
** File description:
** calcul a
*/

#include "my.h"

float calcul_a(char **argv, int n2, char new_value[], struct Valeurs stock)
{
    float a = atof(argv[2]);
    int n1 = n2 - 1;
    float result = 0;
    float value = atof(new_value);

    if (a == stock.v_a) {
        result = (((n1 * a) + value) / n2);
    }
    else {
        result = (((n1 * stock.v_a) + value) / n2);
    }
    return result;
}

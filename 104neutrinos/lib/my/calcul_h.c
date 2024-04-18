/*
** EPITECH PROJECT, 2024
** calcul h
** File description:
** calcul h
*/

#include "my.h"

float calcul_h(char **argv, int n2, char new_value[], struct Valeurs stock)
{
    float h = atof(argv[3]);
    int n1 = n2 - 1;
    long double result = 0;
    long double value = atof(new_value);

    if (h == stock.v_h) {
        result = 1 / ((1.0/n2)*((1.0/(h / n1))+(1.0/value)));
    }
    else {
        result = 1 / ((1.0/n2)*((1.0/(stock.v_h / n1))+(1.0/value)));
    }
    return result;
}

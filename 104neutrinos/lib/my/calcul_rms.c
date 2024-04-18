/*
** EPITECH PROJECT, 2024
** calcul rms
** File description:
** calcul rms
*/

#include "my.h"

float calcul_rms(char **argv, int n2, char new_value[], struct Valeurs stock)
{
    float rms = atof(argv[2]);
    int n1 = n2 - 1;
    float result = 0;
    float value = atof(new_value);

    if (rms == stock.v_rms) {
	result = sqrt((n1 * rms) + powf(value, 2) / n2);
    }
    else {
        result = sqrt((powf((n1 * stock.v_rms), 2) + powf(value, 2)) / n2);
    }
    return 0;
}

//result = (((n1 * a) + value) / n2);
//      result = (((n1 * stock.v_a) + value) / n2);

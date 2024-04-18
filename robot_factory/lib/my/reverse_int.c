/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-robotfactory-robin.wipff
** File description:
** reverse_int.c
*/

#include "my.h"
#include "op.h"

int reverse_int(int number)
{
    int result = 0;

    result |= (number & 0xFF) << 24;
    result |= (number & 0xFF00) << 8;
    result |= (number & 0xFF0000) >> 8;
    result |= (number & 0xFF000000) >> 24;
    return result;
}

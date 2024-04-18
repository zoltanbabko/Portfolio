/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stddef.h>

#ifndef MY_FONC
    #define MY_FONC
int velocity(int argc, char **argv);
int time(int argc, char **argv);
int angle(float vx, float vy, float vz);
int condition(int argc, char **argv);
int rules(int argc, char **argv);
int isFloat(char *str);
#endif /* !MY_FONC */

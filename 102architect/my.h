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
int flag_t_arc(char **argv, int n, int x, int y);
int flag_z(char **argv, int n, int x, int y);
int flag_r(char **argv, int n, int x, int y);
int flag_s(char **argv, int n, int x, int y);
int **calcul_matric(int a[3][3], int x, int y);
int isFloat(char *str);
#endif /* !MY_FONC */

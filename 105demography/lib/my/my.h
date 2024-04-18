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
struct Valeurs {
    float v_rms;
    float v_sd;
    float v_a;
    float v_h;
};
int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
int my_getnbr(char const *str);
float calcul_sd(char **argv, int n2);
float calcul_a(char **argv, int n2, char new_value[], struct Valeurs stock);
float calcul_rms(char **argv, int n2, char new_value[], struct Valeurs stock);
float calcul_h(char **argv, int n2, char new_value[], struct Valeurs stock);
int flag_help(char **argv);
#endif /* !MY_FONC */

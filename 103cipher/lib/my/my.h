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
int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void information(char **argv, int **str, int **a);
void information_d(char **argv, int **str, int **a);
int encrypted(char **argv, int **a);
int decrypted(char **argv, int **a);
int flag_help(char **argv);
int key_matrix(char *str, int len, char **argv, int n);
int test_message(char **argv, int n, int **a);
int **multiplication_matrix(int **a, int **b, char **argv);
void display_produit(int **result, int len, char **argv);
#endif /* !MY_FONC */

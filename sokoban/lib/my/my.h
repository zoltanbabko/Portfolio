/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#include <ncurses.h>
#include <stdarg.h>
#include <sys/types.h>
#include <dirent.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef MY_FONC
    #define MY_FONC
int my_printf(const char *format, ...);
int cas1(char form, va_list ap);
int cas2(char form, va_list ap);
int cas3(char form, va_list ap);
int cas4(char form, va_list ap);
int cas5(char form, va_list ap);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_put_unsigned_int(int nb);
void my_putoctal(int nb);
void my_puthexa_maj(int nb);
void my_puthexa_min(int nb);
void my_put_longhexa(long int nb);
void my_putadresse(long int nb);
int my_put_float(double nb);
int my_put_sc_nbr_min(double nb);
int my_put_sc_nbr_maj(double nb);
char **my_str_to_array(char const *str, int line, int i, int j);
int generation(char **argv, char *paterne, int size);
char *print_generation(int size, char *paterne);
char *open_file(char *file);
int count(char *buffer);
int test_map(char **file, int argc, char **argv);
int start_game(char **argv);
int gauche(char **map);
int droite(char **map);
int haut(char **map);
int bas(char **map);
int play_game(char **map);
int test_victoire(char **map);
int count_line(char **map);
int help(char **argv);
int position_i(char **map);
int position_j(char **map);
#endif /* !MY_FONC */

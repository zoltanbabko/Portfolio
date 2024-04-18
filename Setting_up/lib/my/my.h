/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/
#include <stdarg.h>
#include <sys/types.h>
#include <dirent.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

#ifndef MY_FONC
    #define MY_FONC
int my_printf(const char *format, ...);
int cas1(char form, va_list ap);
int cas2(char form, va_list ap);
int cas3(char form, va_list ap);
int cas4(char form, va_list ap);
int cas5(char form, va_list ap);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_put_unsigned_int(int nb);
void my_putoctal(int nb);
void my_puthexa_maj(int nb);
void my_puthexa_min(int nb);
void my_put_longhexa(long int nb);
void my_putadresse(long int nb);
int my_put_float(double nb);
int my_put_sc_nbr_min(double nb);
int my_put_sc_nbr_maj(double nb);
int condition(double nb);
int count(char *buffer);
void print_map(char **buffer);
char *open_file(char *file);
int basic_find(char **argv);
char **my_str_to_array(char const *str, int line, int i, int j);
int small_nbr(int **demineur, int i, int j);
int **malloc_fct(char const *buffer);
int **algo_1(int **arr, int rows, int cols);
int **algo_1_bis(int cols, int **arr, int i);
char **algo_2(char **tab, int **arr, int rows, int cols);
int get_j(int **demineur, int rows, int cols, int nb);
int get_j_2(int **arr, int cols, int nb, int i);
int get_i(int **arr, int rows, int cols, int nb);
int get_i_2(int **arr, int cols, int nb, int i);
int biggest_number(int **demineur, int rows, int cols);
int biggest_number_bis(int cols, int **arr, int bigger_nb, int i);
int **replace_map_by_nbr(int **arr, char *buffer);
void print_find_char(char **tab);
char *nb_rows(char const *buffer);
int nb_cols(char const *buffer);
int petit_number(int **arr, int i, int j);
char **confirme(char **map, int i, int j);
int erreur_generation(char **argv);
int generation(char **argv, char *paterne, int size);
char *creat_generation(int size, char *paterne);
int **malloc_array(int **arr, int rows, int cols);
int **replace_map_by_nbr_gn(int **arr, char **buffer_arr);
char **complet_by_nbr_gn(char **map, int rows);
void print_find_char_gn(char **tab);
#endif /* !MY_FONC */

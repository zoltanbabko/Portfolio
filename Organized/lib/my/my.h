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
#include <stdlib.h>
#include <string.h>

#ifndef MY_FONC
    #define MY_FONC
int my_printf(const char *format, ...);
int cas1(char form, va_list ap);
int cas2(char form, va_list ap);
int cas3(char form, va_list ap);
int cas4(char form, va_list ap);
int cas5(char form, va_list ap);
int test_number(char *str);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
int my_put_unsigned_int(int nb);
void my_putoctal(int nb);
void my_puthexa_maj(int nb);
void my_puthexa_min(int nb);
void my_put_longhexa(long int nb);
void my_putadresse(long int nb);
int my_put_float(double nb);
int my_put_sc_nbr_min(double nb);
int my_put_sc_nbr_maj(double nb);
char **my_str_to_array(char const *str, int size_of_file, int line, int i);
int condition(double nb);
#endif /* !MY_FONC */

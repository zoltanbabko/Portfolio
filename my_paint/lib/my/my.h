/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#include <stdarg.h>
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>

#ifndef MY_H_
    #define MY_H_

void flag_capital_e(char);
int my_nbrlen(int);
int mini_printf(const char *, ...);
int my_put_error(char const *);
int how_many_words(char const *);
int my_tablen(char **);
int my_swap(int, int);
char my_strupcase(char *);
char **my_str_to_word_array(char const *);
char *my_strstr(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strncpy(char *, char const *, int);
int my_strncmp(char *, char *, int);
char my_strlowcase(char *);
int my_strlen(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isalpha(char const *);
char *my_strdup(char const *);
char my_strcpy(char *, char const *);
int my_strcmp(char *, char *);
char *my_strcat(char *, char const *);
char my_strcapitalize(char *);
void my_sort_int_array(int *, int);
int my_show_word_array(char *const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_revstr(char *);
int my_putstr(char const *);
int my_put_nbr(int);
void my_putchar(char);
int my_is_prime(int);
char my_isneg(int);
int my_getnbr(char const *);
int my_find_prime_sup(int);
int my_compute_square_root(int);
int my_compute_power_rec(int, int);
int word_len_str(char const *, int);
int absolute_value(int);
int flag_null(va_list ap, char type);
char *my_int_to_hex(int);
char *my_int_to_oct(int);
char *my_double_to_str(double);
char alphalower(char *argv);
int file_to_buffer(char *argv);
int file_into_str(char *filepath);

#endif /* !MY_H_ */

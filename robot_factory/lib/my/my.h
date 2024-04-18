/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <signal.h>
    #include <stdarg.h>
    #include <fcntl.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include "op.h"

void flag_capital_e(char);
int my_nbrlen(int);
int mini_printf(const char *, ...);
int my_put_error(char const *);
int how_many_words(char const *);
int my_maplen(char **);
int my_swap(int, int);
char my_strupcase(char *);
char **my_str_to_word_array(char *str);
char *my_strstr(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strncpy(char *, char const *, int);
int my_strncmp(const char *s1, const char *s2, size_t n);
char my_strlowcase(char *);
int my_strlen(char const *);
int my_str_isupper(char const *);
int my_str_isprinmaple(char const *);
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
char **m_s_t_l_a(char *str);
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
char *open_file(char *filepath);
int my_printf(const char *, ...);
int flag_c(va_list ap, char type);
int flag_d(va_list ap, char type);
int flag_e(va_list ap, char type);
int flag_f(va_list ap, char type);
int flag_g(va_list ap, char type);
int flag_i(va_list ap, char type);
int flag_n(va_list ap, char type);
int flag_o(va_list ap, char type);
int flag_p(va_list ap, char type);
int flag_s(va_list ap, char type);
int flag_u(va_list ap, char type);
int flag_x(va_list ap, char type);
int flag_help(char **argv);
char alphalower(char *argv);
int str_array_to_file(char *name_file, char **file, header_t header);
header_t translate(char **file, header_t header);
char **file_to_tab(char **argv);
int array_checker(char **tab);
int check_comment(char **tab);
int check_body(char **tab);
void modifier_chaine(char *chaine);
void retirer_espaces_en_double(char *chaine);
void retirer_espaces_debut_fin(char *chaine);
void retirer_tabulations(char *chaine);
char **my_str_to_array(char const *str, int line, int i, int j);
int count(char *buffer);
char *my_strcpy_name(char *dest, char const *src);
char *my_strcpy_comment(char *dest, char const *src);
int reverse_int(int number);

static int (*f_list[26])(va_list, char) = {flag_null, flag_null, flag_c,
    flag_d, flag_e, flag_f, flag_g, flag_null, flag_i, flag_null, flag_null,
    flag_null, flag_null, flag_n, flag_o, flag_p, flag_null, flag_null,
    flag_s, flag_null, flag_u, flag_null, flag_null, flag_x, flag_null,
    flag_null};

typedef struct int_to_char {
    int nbr;
    unsigned char str[4];
} int_to_char;

#endif /* !MY_H_ */

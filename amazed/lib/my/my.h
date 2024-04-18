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

    #define BUFFER_SIZE 1024

typedef struct amazed_s {
    char *str;
    struct amazed_s *next;
} amazed_t;

typedef struct list_path {
    int path;
    struct list_path *next;
} list_path_t;

typedef struct {
    list_path_t *head;
} linkedlist_t;

void flag_capital_e(char);
int my_nbrlen(int);
int my_strncmp(const char *s1, const char *s2, size_t n);
int my_strlen(char const *);
char *my_strdup(char const *);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char *, char *);
char *my_strcat(char *, char const *);
char *my_revstr(char *);
int my_putstr(char const *);
int my_put_nbr(int);
void my_putchar(char);
int my_getnbr(char const *);
int absolute_value(int);
int flag_null(va_list ap, char type);
char *my_int_to_hex(int);
char *my_int_to_oct(int);
char *my_double_to_str(double);
int open_file(char *filepath);
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
char **my_str_to_array(char const *str);
int count(char const *buffer);
int error_checker(char **array);
char **convert_array(char **array);
void ini_amazed(amazed_t **head, char **amazed);
int my_amazed(amazed_t *head);
int set_amazed(amazed_t **head, char *str);
int unset_amazed(amazed_t **head, char *str);
int del(amazed_t **head, char *str);
int start(char **file, char *buffer);
char **malloc_tab(amazed_t *head, char **tab);
amazed_t *print_unset_rooms(amazed_t *amazed, char **save_rooms);
amazed_t *unset_strt_end_rbts(amazed_t *amazed, char **start_end, char **file);
char **print_tunnels(amazed_t *head, char **save_tunnels);
int checker_coo(char **array, int i);
int checker(char **array, int i);
int check_if_numberrooms(char **str);
char **arraycat(char **room, char **startend);
int check_coordinates(char **room, char **startend);
void free_all(amazed_t *amazed, list_path_t *path, char **file);

static int (*f_list[26])(va_list, char) = {flag_null, flag_null, flag_c,
    flag_d, flag_e, flag_f, flag_g, flag_null, flag_i, flag_null, flag_null,
    flag_null, flag_null, flag_n, flag_o, flag_p, flag_null, flag_null,
    flag_s, flag_null, flag_u, flag_null, flag_null, flag_x, flag_null,
    flag_null};

#endif /* !MY_H_ */

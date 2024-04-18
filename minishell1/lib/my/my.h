/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

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
int my_strncmp(char const *s1, char const *s2, int n);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int my_put_unsigned_int(int nb);
void my_putoctal(int nb);
void my_puthexa_maj(int nb);
void my_puthexa_min(int nb);
void my_put_longhexa(long int nb);
void my_putadresse(long int nb);
int my_put_float(double nb);
int my_put_sc_nbr_min(double nb);
char *my_strdup(char *src);
int my_put_sc_nbr_maj(double nb);
int count(char *buffer);
char *my_add_str_to_str(char *src, char *add);
char **my_str_to_array(char const *str, int line, int i, int j);
int help(char **argv);
int exe_execve(char *buffer, char **env);
int exe_fonction(char **array, char **env, char *path);
int exe_cd_cmd(char **array, char **env);
char *get_env(char **env, char *home);
void modifier_chaine(char *chaine);
void retirer_espaces_en_double(char *chaine);
void retirer_espaces_debut_fin(char *chaine);
void retirer_tabulations(char *chaine);
char *str_unset(char **array, char *str);
char *str_set(char **array, char *str);
char *test_path(char **token_arr, char *path, char **array, char **env);
int test_basic(char **array, char **env);

typedef struct Env {
    char *str;
    struct Env* next;
} Env_t;

int test_cmd(char **array, char **env, Env_t *myEnv, char *str);
void ini_env(Env_t **head, char **env);
int my_env(Env_t *head);
int set_env(Env_t **head, char *str);
int unset_env(Env_t **head, char *str);
#endif /* !MY_FONC */

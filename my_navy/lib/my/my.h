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
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
void my_putarray(char **array);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
char *my_strcpy(char *dest, char const *src);
char **my_array_cpy(char **dest, char **src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
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
void option1(int i, char *str, char **argv);
void option2(int i, char *str, char **argv);
void option3(int i, char *str, char **argv);
void option4(int i, char *str, char **argv);
int flag_help(char **argv);
void int_to_string(int num, char *str);
char **my_str_to_array(char const *str, int line, int i, int j);
void handler_p1(int signum);
void handler_p2(int signum);
int player_1_connexion(char **argv);
int player_2_connexion(char **argv);
int test_arg_player_2(char **argv);
int setmap_p1(char **argv);
int setmap_p2(char **argv);
int verification_coordonnees1(char *file, char **map, char **argv);
int verification_coordonnees2(char *file, char **map, char **argv);
int true_coordonnees1(char **cdn, char **map, char **argv);
int true_coordonnees2(char **cdn, char **map, char **argv);
int set_file_to_map1(char **coordonnees, char **map, char **argv);
int set_file_to_map2(char **coordonnees, char **map, char **argv);
int print_maps(char **map_player, char **map_enemy);
int replace_alpha(char alpha);
int meme_lettre(char **coo, int i, char **map_player);
int meme_chiffre(char **coo, int i, char **map_player);
int cree_pid_p2(int pid);
int cree_map_p_1(char **map);
int cree_map_p_2(char **map);
char **read_file(char *file, int size);
int play_p1(char **argv, char **map_player, char **map_enemy);
int play_p2(char **argv, char **map_player, char **map_enemy);
char *attack(void);
int result(char *position, char **map_player, char **map_enemy, char **map_p);
void handler_attack(int signum);
#endif /* !MY_FONC */

/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#ifndef SHELL_H
    #define SHELL_H
typedef struct Objet {
    int id;
    char *type;
    char *name;
    struct Objet *next;
} Objet_t;
int error_add(char **args);
void print_add(Objet_t *newObj);
int add(void *data, char **args);
int test2_invalid_id(int id, Objet_t *head);
int test1_invalid_id(void *data, char **args);
void print_del(Objet_t *newObj);
int del_2(Objet_t **head, char **args, int i);
int del(void *data, char **args);
void my_swap_list(Objet_t *list_1, Objet_t *list_2);
int sort(void *data, char **args);
int disp(void *data, char **args);
int workshop_shell(void *data);
#endif /* SHELL_H */

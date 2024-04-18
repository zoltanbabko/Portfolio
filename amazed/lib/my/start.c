/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-amazed-arthur.fagueret
** File description:
** start.c
*/

#include "my.h"

int test_str(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            return 84;
    }
    return 0;
}

char **find_romms(amazed_t *head, char **save_rooms)
{
    int i = 0;
    int value = 0;

    save_rooms = malloc_tab(head, save_rooms);
    while (head != NULL) {
        value = test_str(head->str);
        if (value == 0) {
            save_rooms[i] = my_strcpy(save_rooms[i], head->str);
            i++;
        }
        head = head->next;
    }
    return save_rooms;
}

char **print_start_end(amazed_t *head, char **start_end)
{
    int i = 0;

    while (head != NULL) {
        if (my_strncmp(head->str, "##start\0", 8) == 0) {
            head = head->next;
            start_end[0] = my_strcpy(start_end[0], head->str);
        }
        if (my_strncmp(head->str, "##end\0", 6) == 0) {
            head = head->next;
            start_end[1] = my_strcpy(start_end[1], head->str);
        }
        head = head->next;
    }
    my_printf("##start\n%s\n", start_end[0]);
    my_printf("##end\n%s\n", start_end[1]);
    return start_end;
}

int nombre_robots(char **file)
{
    int nb = 0;
    int i = 0;

    while (my_strncmp(file[i], "#", 1) == 0) {
        i++;
    }
    nb = my_getnbr(file[i]);
    my_printf("#number_of_robot\n%i\n", nb);
    my_printf("#rooms\n");
    return nb;
}

int start(char **file, char *buffer)
{
    amazed_t *amazed = NULL;
    list_path_t *path = NULL;
    int nb_robots = 0;
    char **save_start_end = (char **)malloc(sizeof(char *) * 2 + 1);
    char **save_rooms = NULL;
    char **save_tunnels = NULL;

    ini_amazed(&amazed, file);
    nb_robots = nombre_robots(file);
    save_start_end = print_start_end(amazed, save_start_end);
    amazed = unset_strt_end_rbts(amazed, save_start_end, file);
    save_rooms = find_romms(amazed, save_start_end);
    amazed = print_unset_rooms(amazed, save_rooms);
    save_tunnels = print_tunnels(amazed, save_tunnels);
    my_printf("#moves\n");
    free_all(amazed, path, file);
    return 0;
}

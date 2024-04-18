/*
** EPITECH PROJECT, 2024
** amazed
** File description:
** start_2.c
*/

#include "my.h"

char **malloc_tab(amazed_t *head, char **tab)
{
    int counter = 0;

    while (head != NULL) {
        counter++;
        head = head->next;
    }
    tab = (char **)malloc(sizeof(char *) * counter + 1);
    return tab;
}

amazed_t *print_unset_rooms(amazed_t *amazed, char **save_rooms)
{
    for (int i = 0; save_rooms[i][0] != '\0'; i++) {
        my_printf("%s\n", save_rooms[i]);
        unset_amazed(&amazed, save_rooms[i]);
    }
    return amazed;
}

amazed_t *unset_strt_end_rbts(amazed_t *amazed, char **start_end, char **file)
{
    int line = 0;

    while (my_strncmp(file[line], "#", 1) == 0) {
        line++;
    }
    unset_amazed(&amazed, "##start");
    unset_amazed(&amazed, start_end[0]);
    unset_amazed(&amazed, "##end");
    unset_amazed(&amazed, start_end[1]);
    unset_amazed(&amazed, file[line]);
    return amazed;
}

char **print_tunnels(amazed_t *head, char **save_tunnels)
{
    int i = 0;

    save_tunnels = malloc_tab(head, save_tunnels);
    my_printf("#tunnels\n");
    while (head != NULL) {
        save_tunnels[i] = my_strcat(head->str, "\0");
        i++;
        head = head->next;
    }
    for (i = 0; save_tunnels[i][0] != '\0'; i++) {
        my_printf("%s\n", save_tunnels[i]);
    }
    return save_tunnels;
}

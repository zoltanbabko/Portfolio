/*
** EPITECH PROJECT, 2024
** bonus
** File description:
** bonus
*/

#include "my.h"

void print_my_sh(void)
{
    my_printf("\033[0;34m");
    my_printf("                               __   \n");
    my_printf("     ____ ___  __  __    _____/ /_  \n");
    my_printf("\033[0;37m");
    my_printf("    / __ `__ \\/ / / /   / ___/ __ \\ \n");
    my_printf("   / / / / / / /_/ /   (__  ) / / / \n");
    my_printf("\033[0;31m");
    my_printf("  /_/ /_/ /_/\\__, /    ____/_/ /_/  \n");
    my_printf("            /____/                    \n");
    my_printf("\033[0m\n\n");
}

void test_value(int value, char **env)
{
    char *name = get_env(env, "LOGNAME");
    int a = my_strlen(name);
    char *hostname = get_env(env, "HOSTNAME");
    int b = my_strlen(hostname);

    name[a - 1] = '\0';
    hostname[b - 1] = '\0';
    if (value != 0)
        my_printf("\033[0;36m[%s@%s]\033[0;31m$\033[0m> ", name, hostname);
    else
        my_printf("\033[0;36m[%s@%s]\033[0;32m$\033[0m> ", name, hostname);
}

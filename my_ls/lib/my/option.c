/*
** EPITECH PROJECT, 2023
** option ls
** File description:
** option ls
*/

#include "my.h"

int option1(int i, char *str, char **argv)
{
    switch (str[i]) {
    case 'a':
        if (argv[i + 1] == NULL || (argv[i + 1][0] == '-')) {
            return flag_ls_a(".");
        } else {
            return flag_ls_a(argv[i + 1]);
        }
        break;
    default:
        option2(i, str, argv);
    }
}

int option2(int i, char *str, char **argv)
{
    DIR *dir;

    switch (str[i]) {
    case 'l':
        if (argv[i + 1] == NULL || (argv[i + 1][0] == '-')) {
            return print_all_files(".");
        }
        dir = opendir(argv[i + 1]);
        if (dir == NULL)
            return 84;
        return flag_ls_l(argv[i + 1]);
        break;
    default:
        option3(i, str, argv);
    }
}

int option3(int i, char *str, char **argv)
{
    switch (str[i]) {
    case 'd':
        break;
    case 'r':
        if ((argv[i + 1] == NULL) || (argv[i + 1][0] == '-')) {
            flag_ls_r(".");
            return 0;
        } else {
            flag_ls_r(argv[i + 1]);
            return 0;
        }
        break;
    default:
        option4(i, str, argv);
    }
}

int option4(int i, char *str, char **argv)
{
    DIR *dir;

    switch (str[i]) {
    case 'R':
        break;
    case 't':
        if (argv[i + 1] == NULL || (argv[i + 1][0] == '-')) {
            return print_all_files_times(".");
        }
        dir = opendir(argv[i + 1]);        
        if (dir == NULL)
            return 84;
        my_putstr(argv[i + 1]);
        my_putchar('\n');
        return 0;
        break;
    }
    return 84;
}

void print_time(struct stat *sb)
{
    char *time_str;
    char *time = malloc(sizeof(char) * 12);
    int i = 4;
    int j = 0;

    time_str = ctime(&sb->st_mtime);
    while (i != 16) {
        time[j] = time_str[i];
        i++;
        j++;
    }
    time[j] = '\0';
    my_printf("%s ", time);
}

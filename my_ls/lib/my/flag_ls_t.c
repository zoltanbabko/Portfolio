/*
** EPITECH PROJECT, 2023
** ls -t
** File description:
** ls -t
*/

#include "my.h"

struct FileInfo {
    char name[256];
    char time[100][100];
};

int print_all_files_times(const char *dirname)
{
    DIR *dir = opendir(dirname);
    char time_str[20];
    struct dirent *entry;

    if (dir == NULL) {
        return 84;
    }
    entry = readdir(dir);
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            flag_ls_t(entry->d_name);
            my_putchar(' ');
        }
        entry = readdir(dir);
    }
    my_putchar('\n');
    closedir(dir);
    return 0;
}

int flag_ls_t(char *argv)
{
    struct stat sb;
    DIR *dir = opendir(argv);
    int i = 0;

    my_printf("%s", argv);
    return 0;
}

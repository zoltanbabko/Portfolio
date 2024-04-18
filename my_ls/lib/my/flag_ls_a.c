/*
** EPITECH PROJECT, 2023
** flag_a
** File description:
** flag_a
*/

#include <stdio.h>
#include <dirent.h>
#include "my.h"
#include <sys/types.h>

int flag_ls_a(char *argv)
{
    struct dirent *pdir;
    DIR *opendirectory;

    opendirectory = opendir(argv);
    if (opendirectory == NULL) {
        return 84;
    }
    pdir = readdir(opendirectory);
    while (pdir != NULL) {
        my_printf("%s  ", pdir->d_name);
        pdir = readdir(opendirectory);
    }
    my_putchar('\n');
    closedir(opendirectory);
    return 0;
}

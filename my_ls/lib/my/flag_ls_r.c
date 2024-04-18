/*
** EPITECH PROJECT, 2023
** ls_r
** File description:
** ls_r
*/

#include "my.h"

int flag_ls_r(char *argv)
{
    struct dirent *pdir;
    DIR *opendirectory;

    opendirectory = opendir(argv);
    if (opendirectory == NULL) {
        return 84;
    }
    pdir = readdir(opendirectory);
    while (pdir != NULL) {
        if (pdir->d_name[0] != '.') {
            my_printf("%s  ", pdir->d_name);
        }
        pdir = readdir(opendirectory);
    }
    my_putchar('\n');
    closedir(opendirectory);
    return 0;
}

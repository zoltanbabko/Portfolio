/*
** EPITECH PROJECT, 2023
** basic ls
** File description:
** basic ls
*/

#include "my.h"

int basic_ls(char *argv)
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

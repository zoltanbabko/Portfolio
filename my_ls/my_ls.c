/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_ls
*/

#include <sys/types.h>
#include <dirent.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int execution(int argc, char **argv)
{
    int i = 0;

    while (argc > i) {
        if (argv[i][0] == '-') {
            return option1(i, argv[i], argv);
            i++;
        }
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 1) {
        basic_ls(".");
        return 0;
    }
    if (argc > 1) {
        basic_ls(argv[1]);
        return execution(argc, argv);
    }
}

/*
** EPITECH PROJECT, 2023
** flag_help
** File description:
** flag_help
*/

#include "my.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int flag_help(char **argv)
{
    int fd = open("./README.md", O_RDONLY);
    char *buffer;

    switch (argv[1][1]) {
    case 'h':
        buffer = malloc(sizeof(char) * 250 + 1);
        read(fd, buffer, 250);
        my_putstr(buffer);
        free(buffer);
        return 0;
        break;
    }
    return 84;
}

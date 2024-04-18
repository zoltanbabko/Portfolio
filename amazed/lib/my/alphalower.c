/*
** EPITECH PROJECT, 2023
** alpha uppercase to lowercase
** File description:
** alpha uppercase to lowercase
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

char alphalower(char *argv)
{
    int i = 0;

    while (argv[i] != '\0') {
        if (argv[i] >= 'A' && argv[i] <= 'Z')
            argv[i] = (argv[i] + 32);
        i += 1;
    }
    return 0;
}

/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-1-bssettingup-robin.wipff
** File description:
** str_to_buffer.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void **print_str(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        my_putchar(buffer[i]);
    }
}

int file_into_str(char *filepath)
{
    struct stat st;
    int file_size;
    char *buffer;
    int filepath_open = open(filepath, O_RDONLY);

    stat(filepath, &st);
    file_size = st.st_size;
    buffer = malloc(sizeof(char) * (file_size + 1));
    read(filepath_open, buffer, file_size);
    buffer[file_size] = '\0';
    close(filepath_open);
    print_str(buffer);
    return 0;
}

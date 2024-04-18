/*
** EPITECH PROJECT, 2024
** cree fichier 
** File description:
** cree fichier
*/

#include "my.h"

int cree_pid_p2(int pid)
{
    int i = 0;
    int fichier = open("pid.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    char *pid_char;

    int_to_string(pid, pid_char); 
    if (fichier == -1) {
        return 84;
    }
    write(fichier, pid_char, 6);
    write(fichier, "\n", 1);
    close(fichier);
    free(pid_char);
    return 0;
}

int cree_map_p_1(char **map)
{
    int i = 0;
    int fichier = open("player_1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fichier == -1) {
        return 84;
    }
    while (map[i] != NULL) {
        write(fichier, map[i], my_strlen(map[i]));
        write(fichier, "\n", 1);
        i++;
    }
    close(fichier);
    free(map);
    return 0;
}

int cree_map_p_2(char **map)
{
    int i = 0;
    int fichier = open("player_2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fichier == -1) {
        return 84;
    }
    while (map[i] != NULL) {
        write(fichier, map[i], my_strlen(map[i]));
        write(fichier, "\n", 1);
        i++;
    }
    close(fichier);
    free(map);
    return 0;
}

int count(char *buffer)
{
    int line = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            line++;
        i++;
    }
    return line;
}

char **read_file(char *file, int size)
{
    char **arr;
    char *buffer;
    int fd;

    fd = open(file, O_RDONLY, 0644);
    read(fd, buffer, size + 1);
    arr = my_str_to_array(buffer, count(buffer) + 1, 0, 0);
    return arr;
}
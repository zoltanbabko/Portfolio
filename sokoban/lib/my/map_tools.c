/*
** EPITECH PROJECT, 2023
** test map
** File description:
** test map
*/

#include "my.h"
/*
int test_map(char **file, int argc, char **argv)
{
    for (int i = 0; file[0][i] != '\0'; i++) {
        if (file[0][i] != '#') {
            return 84;
        }
    }
    for (int i = 0; file[i][0] != '\0'; i++) {
        if (file[i][0] != '#') {
            return 84;
        }
    }
    for (int i = 0; file[i][my_strlen(file[i])] != '\0'; i++) {
        if (file[i][my_strlen(file[i])] != '#') {
            return 84;
        }
    }
    return play_game(argc, argv);
}
*/
char *open_file(char *file)
{
    struct stat sb;
    int fd = open(file, O_RDONLY);
    char *buffer;
    int size;

    stat(file, &sb);
    size = sb.st_size;
    if (fd == -1)
        return NULL;
    buffer = malloc(sizeof(char) * size + 1);
    read(fd, buffer, size);
    close(fd);
    return buffer;
}

int test_victoire_bis(char **map, int i, int k)
{
    int j = 0;

    for (j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'O') {
            k++;
        }
    }
    return k;
}

int test_victoire(char **map)
{
    int i = 0;
    int k = 0;

    while (map[i] != NULL) {
        k = test_victoire_bis(map, i, k);
        i++;
    }
    return k;
}

int count(char *buffer)
{
    int line = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            line++;
        }
        i++;
    }
    return line;
}

int count_line(char **map)
{
    int i = 0;

    while (map[i] != NULL) {
        i++;
    }
    return i;
}

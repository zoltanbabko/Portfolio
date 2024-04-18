/*
** EPITECH PROJECT, 2024
** basic find
** File description:
** basic find
*/

#include "my.h"

char **confirme(char **map, int i, int j)
{
    if (map[i][j] == '.')
        map[i][j] = '1';
    else
        map[i][j] = '0';
    return map;
}

char **complet_by_nbr(char **map)
{
    int i = 1;
    int j = 0;
    int ligne = my_getnbr(map[0]);

    while (i <= ligne) {
        while (map[i][j] != '\0') {
            map = confirme(map, i, j);
            j++;
        }
        j = 0;
        i++;
    }
    return map;
}

char *open_file(char *file)
{
    struct stat sb;
    int fd = open(file, O_RDONLY);
    char *buffer;
    int size;
    int i = 0;
    int j = 0;

    stat(file, &sb);
    size = sb.st_size;
    if (fd == -1)
        return NULL;
    buffer = malloc(sizeof(char) * size + 1);
    read(fd, buffer, size);
    close(fd);
    return buffer;
}

int basic_find(char **argv)
{
    char *buffer;
    char **buffer_arr;
    int **arr;
    char **tab;
    int rows = 0;
    int cols = 0;

    buffer = open_file(argv[1]);
    buffer_arr = my_str_to_array(buffer, count(buffer), 0, 0);
    rows = my_getnbr(buffer_arr[0]);
    cols = my_strlen(buffer_arr[1]);
    arr = malloc_fct(buffer);
    replace_map_by_nbr(arr, buffer);
    complet_by_nbr(buffer_arr);
    algo_1(arr, rows, cols);
    algo_2(buffer_arr, arr, rows, cols);
    print_find_char(buffer_arr);
    return 0;
}

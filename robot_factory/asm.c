/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "my.h"
#include "op.h"

char **file_to_tab(char **argv)
{
    char **tab = NULL;
    char *str = NULL;
    int fd1 = open(argv[1], O_RDONLY);
    ssize_t bytes_read;
    struct stat fd;

    if (fd1 == -1) {
        return NULL;
    }
    stat(argv[1], &fd);
    str = (char *)malloc(fd.st_size + 1);
    bytes_read = read(fd1, str, (fd.st_size + 1));
    tab = my_str_to_array(str, count(str), 0, 0);
    return tab;
}

int start_asm(char **argv)
{
    char **file = file_to_tab(argv);
    char **final_array = NULL;
    header_t header;

    if (file == NULL)
        return 84;
    for (int i = 0; file[i] != NULL; i++) {
        modifier_chaine(file[i]);
    }
    if (array_checker(file) == 84)
        return 84;
    header = translate(file, header);
    str_array_to_file(argv[1], file, header);
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (argv[1][0] == '-')
        return flag_help(argv);
    if (argc == 2) {
        return start_asm(argv);
    }
    return 84;
}

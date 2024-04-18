/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "my.h"

static void instructions(void)
{
    my_printf("USAGE\n\t./amazed < [file with instructions]\n\nDESCRIPTION\n");
    my_printf("\tAmazed is a program that aims to find\n\t");
    my_printf("the shortest route(s) to the exit\n");
    my_printf("\tand has as goal to optimize the process.\n");
}

char *read_to_buffer(char *buffer)
{
    char *tmp = NULL;
    size_t buffer_size = 0;
    int size_read = 0;
    int total_size_read = 0;

    while (size_read != -1) {
        size_read = getline(&tmp, &buffer_size, stdin);
        buffer = my_strcat(tmp, buffer);
        total_size_read += size_read;
    }
    if (total_size_read == 0)
        return NULL;
    return buffer;
}

int amazed(void)
{
    char *buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    int value = 0;
    char **file = NULL;

    buffer = read_to_buffer(buffer);
    if (buffer == NULL) {
        return 84;
    }
    file = my_str_to_array(buffer);
    file = convert_array(file);
    value = error_checker(file);
    if (value == 0){
        return start(file, buffer);
    }
    return value;
}

int main(int argc, char **argv)
{
    if (argc == 2 && my_strcmp(argv[1], "-h") == 0) {
        instructions();
        return 0;
    }
    if (argc == 1)
        return amazed();
    return 84;
}

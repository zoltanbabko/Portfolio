/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** minishell1
*/

#include "lib/my/my.h"

int start(char **env)
{
    size_t size = 2048;
    char *buffer = (char *)malloc(size * sizeof(char));
    char **array = NULL;
    int value = 0;
    env_t *myEnv = NULL;

    my_putstr("$> ");
    ini_env(&myEnv, env);
    while (getline(&buffer, &size, stdin) > 0) {
        value = parthing(buffer, array, env, myEnv);
    }
    my_putstr("Shell close\n");
    return value;
}

int main(int argc, char **argv, char **env)
{
    if (argc == 2 && argv[1][0] == '-')
        return help(argv);
    if (argc != 1)
        return 84;
    return start(env);
}

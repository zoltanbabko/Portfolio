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
    char **array;
    int value;
    Env_t *myEnv = NULL;
    char *str = NULL;

    my_putstr("$> ");
    ini_env(&myEnv, env);
    while (getline(&buffer, &size, stdin) > 0) {
        modifier_chaine(buffer);
        array = my_str_to_array(buffer, count(buffer), 0, 0);
        value = test_cmd(array, env, myEnv, str);
        if (value != 0) {
            value = exe_execve(buffer, env);
        }
        my_putstr("$> ");
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

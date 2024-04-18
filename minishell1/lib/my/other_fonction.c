/*
** EPITECH PROJECT, 2024
** other fonction
** File description:
** other fonction
*/

#include "my.h"

char *get_env(char **env, char *str)
{
    int count = 0;
    int b = 0;
    int c = 0;
    char *env_line = NULL;

    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], str, my_strlen(str)) == 0)
            b = i;
    }
    env_line = (char *)malloc(sizeof(char) * my_strlen(env[b])
        - my_strlen(str));
    for (int j = my_strlen(str) + 1; env[b][j]; j++) {
        env_line[c] = env[b][j];
        c++;
    }
    env_line[c] = '/';
    return env_line;
}

char *str_unset(char **array, char *str)
{
    array[1][(my_strlen(array[1]) - 1)] = '=';
    array[1][(my_strlen(array[1]))] = '\0';
    if (array[2] != NULL && array[3] == NULL) {
        array[2][(my_strlen(array[2]) - 1)] = '\0';
        str = my_add_str_to_str(array[1], array[2]);
        return str;
    }
    return array[1];
}

char *str_set(char **array, char *str)
{
    if (array[2] != NULL && array[3] == NULL) {
        array[1][(my_strlen(array[1]))] = '=';
        array[2][(my_strlen(array[2]) - 1)] = '\0';
        str = my_add_str_to_str(array[1], array[2]);
        return str;
    } else {
        array[1][(my_strlen(array[1]) - 1)] = '=';
        return array[1];
    }
}

int test_basic(char **array, char **env)
{
    if (my_strcmp("cd\0", array[0]) == 0)
        return exe_cd_cmd(array, env);
    if (my_strcmp("exit\0", array[0]) == 0)
        exit(0);
    return 84;
}

char *test_path(char **token_arr, char *path, char **array, char **env)
{
    int fin = 0;
    int i = 0;
    char *pwd = get_env(env, "PWD");

    for (i = 0; token_arr[i] != NULL; i++) {
        fin = my_strlen(token_arr[i]);
        token_arr[i][fin] = '/';
        token_arr[i][fin + 1] = '\0';
        path = my_add_str_to_str(token_arr[i], array[0]);
        if (access(path, F_OK) == 0) {
            return path;
        }
    }
    pwd = my_add_str_to_str(pwd, array[0]);
    if (access(pwd, F_OK) == 0) {
        return pwd;
    }
    return NULL;
}

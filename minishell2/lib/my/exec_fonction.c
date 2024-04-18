/*
** EPITECH PROJECT, 2024
** exec fonction
** File description:
** exec fonction
*/

#include "my.h"
#include <errno.h>

int exe_fonction(char **array, char **env, char *path)
{
    pid_t prog;
    int status;

    prog = fork();
    if (prog == -1)
        return 84;
    if (prog == 0) {
        execve(path, array, env);
    } else {
        if (waitpid(prog, &status, 0) != 0) {
            return erreur_case(status);
        }
    }
    return 0;
}

int exe_cd_cmd(char **array, char **env, env_t **myEnv)
{
    int i = 0;
    char *home = get_env(env, "HOME");
    char cwd[1024];
    char *actual_pwd = NULL;
    char **pwd = NULL;

    if (array[1] == NULL) {
        chdir(home);
        change_env(myEnv);
        return 0;
    }
    if (array[1][0] == '-') {
        chdir(get_env_struct(myEnv, "OLDPWD"));
        change_env(myEnv);
        return 0;
    }
    return basic_cd(array, myEnv);
}

int test_cmd(char **array, char **env, env_t *myEnv, char *str)
{
    if (my_strcmp("env\0", array[0]) == 0)
        return my_env(myEnv);
    if (my_strcmp("setenv\0", array[0]) == 0) {
        if (array[1] == NULL)
            return 0;
        str = str_set(array, str);
        if (str == NULL)
            return 0;
        return set_env(&myEnv, str);
    }
    if (my_strcmp("unsetenv\0", array[0]) == 0) {
        if (array[1] == NULL)
            return 0;
        str = str_unset(array, str);
        if (str == NULL)
            return 0;
        return unset_env(&myEnv, str);
    }
    return test_basic(array, env, &myEnv);
}

char *find_path(char *buffer, char **env, char **array, char *path)
{
    int i = 0;
    int j = 0;
    char *token = NULL;
    char **token_arr = (char **)malloc(sizeof(char *) * 20);

    token = strtok(path, "=:");
    while (token != NULL) {
        token_arr[j] = (char *)malloc(sizeof(char) * my_strlen(token));
        token_arr[j] = token;
        token = strtok(NULL, "=:");
        j++;
    }
    path = my_add_str_to_str(token_arr[i], array[0]);
    return test_path(token_arr, path, array, env);
}

int exe_execve(char *buffer, char **env)
{
    int value = 0;
    char **array = NULL;
    char *path = NULL;
    int i = 0;
    char *str = NULL;

    for (i = 0; buffer[i] != '\0'; i++) {
        }
    buffer[i - 1] = '\0';
    array = my_str_to_array(buffer, ' ');
    path = get_env(env, "PATH");
    if (my_strcmp(array[0], "\n\0") == 0)
        return 0;
    path = find_path(buffer, env, array, path);
    if (path == NULL) {
        my_printf("%s: Command not found.\n", array[0]);
        return 1;
    }
    value = exe_fonction(array, env, path);
    return value;
}

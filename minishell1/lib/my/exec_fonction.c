/*
** EPITECH PROJECT, 2024
** exec fonction
** File description:
** exec fonction
*/

#include "my.h"

int exe_fonction(char **array, char **env, char *path)
{
    pid_t prog;
    int value;
    int status;

    prog = fork();
    if (prog == -1)
        return 84;
    if (prog == 0) {
        value = execve(path, array, env);
        if (value == -1) {
            my_printf("%s: Command not found.\n", array[0]);
            return 1;
        }
    } else {
        if (waitpid(prog, &status, 0) != -1 && WIFEXITED(status)) {
            return WEXITSTATUS(status);
        }
    }
    return 0;
}

int exe_cd_cmd(char **array, char **env)
{
    int i = 0;
    int b = 0;
    int c = 0;
    int count = 0;
    char *home = get_env(env, "HOME");
    char *old_pwd = get_env(env, "OLDPWD");

    if (array[1] == NULL)
        return chdir(home);
    if (array[1][0] == '-')
        return chdir(old_pwd);
    for (i = 0; array[1][i] != '\n'; i++) {
    }
    array[1][i] = '\0';
    if (chdir(array[1]) == 0) {
        return 0;
    } else {
        my_printf("cd: %s: No such file or directory\n", array[1]);
        return 84;
    }
}

int test_cmd(char **array, char **env, Env_t *myEnv, char *str)
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
    return test_basic(array, env);
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
    array = my_str_to_array(buffer, count(buffer), 0, 0);
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

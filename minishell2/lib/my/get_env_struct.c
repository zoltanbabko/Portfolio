/*
** EPITECH PROJECT, 2024
** env strcut
** File description:
** env struct
*/

#include "my.h"

char *get_env_struct(env_t **head, char *str)
{
    env_t *list = *head;
    char *path = NULL;
    char *tmp = NULL;
    int i = 0;
    int j = 0;

    while (list != NULL) {
        if (my_strncmp(list->str, str, my_strlen(str) - 1) == 0)
            tmp = my_strcpy(tmp, list->str);
        list = list->next;
    }
    for (i = 0; tmp[i] != '='; i++) {
    }
    i++;
    path = (char *)malloc(sizeof(char) * my_strlen(tmp));
    for (i; tmp[i] != '\0'; i++) {
        path[j] = tmp[i];
        j++;
    }
    return path;
}

char *old_pwd(char *str)
{
    char *token = NULL;
    char **token_arr = (char **)malloc(sizeof(char *) * 2);
    int j = 0;

    token = strtok(str, "=");
    while (token != NULL) {
            token_arr[j] = (char *)malloc(sizeof(char) * my_strlen(token));
            token_arr[j] = token;
            token = strtok(NULL, "=");
            j++;
    }
    str = my_strcat("OLDPWD=", token_arr[1]);
    return str;
}

char *get_oldpwd(env_t *myEnv)
{
    char *save_pwd_for_old = NULL;

    while (myEnv != NULL) {
        if (my_strncmp(myEnv->str, "PWD", my_strlen("PWD") - 1) == 0) {
            save_pwd_for_old = my_strcpy(save_pwd_for_old, myEnv->str);
            save_pwd_for_old = old_pwd(save_pwd_for_old);
            return save_pwd_for_old;
        }
        myEnv = myEnv->next;
    }
    return NULL;
}

void change_env(env_t **myEnv)
{
    char cwd[1024];
    char *actual_pwd = getcwd(cwd, sizeof(cwd));
    char *save_pwd_for_old = get_oldpwd(*myEnv);

    if ((my_strcmp(get_env_struct(myEnv, "PWD"), actual_pwd) != 0) ||
    (my_strcmp(actual_pwd, get_env_struct(myEnv, "PWD")) != 0)) {
        unset_env(myEnv, "OLDPWD");
        set_env(myEnv, save_pwd_for_old);
        actual_pwd = my_strcat("PWD=", actual_pwd);
        unset_env(myEnv, "PWD");
        set_env(myEnv, actual_pwd);
    }
}

int basic_cd(char **array, env_t **myEnv)
{
    int i = 0;

    for (i = 0; array[1][i] != '\n'; i++) {
    }
    array[1][i] = '\0';
    if (chdir(array[1]) == 0) {
        change_env(myEnv);
        return 0;
    } else {
        my_printf("cd: %s: No such file or directory\n", array[1]);
        return 84;
    }
    return 0;
}

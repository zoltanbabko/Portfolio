/*
** EPITECH PROJECT, 2024
** pathing
** File description:
** parthing
*/

#include "my.h"

int execute(char *buffer, char **array, char **env, env_t *myEnv)
{
    char *str = NULL;
    int value = 0;

    modifier_chaine(buffer);
    array = my_str_to_array(buffer, ' ');
    value = test_cmd(array, env, myEnv, str);
    if (value != 0) {
        value = exe_execve(buffer, env);
    }
    return value;
}

static int pipe_test(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '|')
            return 1;
    }
    return 0;
}

static int redi_test(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '<' || str[i] == '>')
            return 1;
    }
    return 0;
}

int verification_pipe_redi(char *str, char **array, char **env, env_t *myEnv)
{
    int value = 0;

    if (pipe_test(str) != 0) {
        value = execute(str, array, env, myEnv);
    } else if (redi_test(str) != 0) {
        value = execute(str, array, env, myEnv);
    } else {
        value = execute(str, array, env, myEnv);
    }
}

int parthing(char *buffer, char **array, char **env, env_t *myEnv)
{
    int value = 0;
    char **commandes = NULL;
    
    commandes = my_str_to_array(buffer, ';');
    for (int i = 0; commandes[i] != NULL; i++) {
        printf("commande %s\n", commandes[i]);
        value = verification_pipe_redi(commandes[i], array, env, myEnv);
    }
    my_putstr("$> ");
    return value;
}

/*
** EPITECH PROJECT, 2024
** erreur
** File description:
** erreur
*/

#include "my.h"

int erreur_case(int status)
{
    int signum = WTERMSIG(status);

    if (WIFEXITED(status)) {
        if (WEXITSTATUS(status) != 0)
            return WEXITSTATUS(status);
    }
    if (WIFSIGNALED(status)) {
        if (signum == SIGSEGV)
            return 11;
        else
            return signum;
    }
    if (__WCOREDUMP(status)) {
        return __WCOREDUMP(status);
    }
    if (WIFSTOPPED(status)) {
        return WSTOPSIG(status);
    }
}

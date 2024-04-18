/*
** EPITECH PROJECT, 2024
** connect player
** File description:
** connect player
*/

#include "my.h"

void handler_p1(int signum)
{
    my_putstr("\nenemy connected\n");
}

void handler_p2(int signum)
{
    my_putstr("\nsuccessfully connected\n");
}

int player_1_connexion(char **argv)
{
    int pid_p1 = getpid();

    my_putstr("my_pid: ");
    my_put_nbr(pid_p1);
    my_putstr("\n\nwaiting for enemy connection...\n");
    while (!signal(12, handler_p1)) {
        pause();
    }
    return setmap_p1(argv);
}

int player_2_connexion(char **argv)
{
    int pid_p1 = my_getnbr(argv[1]);
    int pid_p2 = getpid();
    int value;

    my_putstr("my_pid: ");
    my_put_nbr(pid_p2);
    value = kill(pid_p1, SIGUSR2);
    if (value == -1) {
        return 84;
    }
    my_putstr("\n\nsuccessfully connected\n");
    return setmap_p2(argv);
}

int test_arg_player_2(char **argv)
{
    int i = 0;
    int fd;

    while (argv[1][i] != '\0') {
        if (argv[1][i] < '0' || argv[1][i] > '9')
            return 84;
        i++;
    }
    fd = open(argv[2], O_RDONLY);
    if (fd == -1)
        return 84;
    return player_2_connexion(argv);
}

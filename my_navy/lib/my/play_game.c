/*
** EPITECH PROJECT, 2024
** play_game.c
** File description:
** play game
*/

#include "my.h"

void handler_restart(int signum)
{
}

void handler_result(int signum)
{

}

char *attack()
{
    size_t n = 10;
    char *buf = malloc(sizeof(char) * n);

    my_putstr("attack: ");
    getline(&buf, &n, stdin);
    if (buf[0] < 'A' && buf[0] > 'H')
        return "84";
    if (buf[1] < '1' && buf[0] > '8')
        return "84";
    
    return buf;
    free(buf);
}

int result(char *position, char **map_player, char **map_enemy, char **map_p)
{
    int alpha = replace_alpha(position[0]);
    int nb = my_getnbr(position);
    int value;
    //char **file_pid = read_file("pid.txt", 10);
    //int pid = my_getnbr(file_pid[0]);

    alpha = alpha * 2 + 2;
    if (map_p[alpha][nb + 2] != '.') {
        my_printf("\nresult: %s:hit\n\n", position);
        map_enemy[alpha][nb + 2] = 'x';
        //value = kill(pid, SIGUSR1);
    } else {
        my_printf("\nresult: %s:missed\n\n", position);
        map_enemy[alpha][nb + 2] = 'o';
        //value = kill(pid, SIGUSR1);
    }
}

int play_p1(char **argv, char **map_player, char **map_enemy)
{
    int win = 0;
    int pid_p1 = getpid();
    char **map_p2 = read_file("player_2.txt", 180);
    int value;
    char *position;

    position = attack();
    if (position == "84") {
        my_putstr("\nwrong position\n\n");
        play_p1(argv, map_player, map_enemy);
    } else {
        result(position, map_player, map_enemy, map_p2);
        print_maps(map_player, map_enemy);
        while (!signal(10, handler_restart))
            pause();
        play_p1(argv, map_player, map_enemy);
    }
    return 0;
}

int play_p2(char **argv, char **map_player, char **map_enemy)
{
    int win = 0;
    char **map_p1 = read_file("player_1.txt", 180);

    my_putstr("waiting for enemy's attack...\n\n");
    while (!signal(10, handler_result)) {
        pause();
    }
    
    return 0;
}

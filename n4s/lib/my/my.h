/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <signal.h>
    #include <stdarg.h>
    #include <fcntl.h>
    #include <string.h>

    #define BUFFER_SIZE 1024

typedef struct stats {
    float velocity;
    char *track_finished;
} stats_t;

int start(void);
stats_t init_struct(stats_t *new);
char **my_output_to_string(char *str, const char *delimiters);
int car_dir(char **lidar_infos);

#endif /* !MY_H_ */

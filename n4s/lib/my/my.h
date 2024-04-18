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

    #define BUFFER_SIZE 1024

typedef struct stats {
    float velocity;
    float speed;
    float wheels;
    float lidar;
} stats_t;

int start(stats_t *new);

#endif /* !MY_H_ */

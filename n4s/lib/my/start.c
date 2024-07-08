/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-zoltan.babko
** File description:
** start.c
*/

#include "my.h"

static char **get_lidar_info(void)
{
    char *lidar_info = NULL;
    char **lidar_infos = NULL;
    size_t buf_size = 0;

    dprintf(1, "GET_INFO_LIDAR\n");
    getline(&lidar_info, &buf_size, stdin);
    lidar_infos = my_output_to_string(lidar_info, ":");
    if (strcmp(lidar_infos[35], "Track Cleared") == 0) {
        dprintf(1, "STOP_SIMULATION\n");
    }
    return lidar_infos;
}

float front_speed(char **lidar_infos)
{
    float center1 = atof(lidar_infos[18]);
    float center2 = atof(lidar_infos[19]);
    float dist = ((center1 + center2) / 2);
    float speed = 0.5;
    char *car_forwd = NULL;
    size_t buf_size = 0;

    if (dist < 1500) {
        speed = (dist / 4) / 1500;
    }
    dprintf(1, "CAR_FORWARD:%f\n", speed);
    getline(&car_forwd, &buf_size, stdin);
    return speed;
}

int start(void)
{
    char **tab = NULL;
    char *wheels_dir = NULL;
    size_t buf_size = 0;

    while (1) {
        tab = get_lidar_info();
        front_speed(tab);
        tab = get_lidar_info();
        car_dir(tab);
    }
    return 0;
}

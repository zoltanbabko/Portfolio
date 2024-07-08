/*
** EPITECH PROJECT, 2023
** Need_4_Stek
** File description:
** car_dir.c
*/

#include "my.h"

int exec_dir(float val, float num)
{
    char *buff = NULL;
    size_t len = 0;
    int average = 0;
    char *wheels_dir = NULL;
    size_t buf_size = 0;

    if (num >= 0.0)
        dprintf(1, "WHEELS_DIR:%f\n", val);
    else
        dprintf(1, "WHEELS_DIR:-%f\n", val);
    getline(&wheels_dir, &buf_size, stdin);
    return (0);
}

int car_dir(char **lidar_infos)
{
    float average = atof(lidar_infos[4]) - atof(lidar_infos[34]);
    float front_speed = (atof(lidar_infos[17]) + atof(lidar_infos[18])) / 2;
    int dists[6] = {1500, 1000, 600, 400, 200, 0};
    char *wheels[6] = {"0.005", "0.05", "0.1", "0.2", "0.3", "0.5"};

    for (int i = 0; i != 6; i++) {
        if (front_speed >= dists[i]) {
            exec_dir(atof(wheels[i]), average);
            return 0;
        }
    }
    return 0;
}

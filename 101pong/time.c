/*
** EPITECH PROJECT, 2023
** time
** File description:
** time
*/

#include "my.h"

int time(int argc, char **argv)
{
    float x0 = atof(argv[1]);
    float y0 = atof(argv[2]);
    float z0 = atof(argv[3]);
    float x1 = atof(argv[4]);
    float y1 = atof(argv[5]);
    float z1 = atof(argv[6]);
    int n = atof(argv[7]);
    float vx = x1 - x0;
    float vy = y1 - y0;
    float vz = z1 - z0;
    float time_x = x1 + (vx * n);
    float time_y = y1 + (vy * n);
    float time_z = z1 + (vz * n);

    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)\n", time_x, time_y, time_z);
    return 0;
}

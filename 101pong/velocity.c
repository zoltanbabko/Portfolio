/*
** EPITECH PROJECT, 2023
** velocity
** File description:
** velocity
*/

#include "my.h"

int velocity(int argc, char **argv)
{
    float x0 = atof(argv[1]);
    float y0 = atof(argv[2]);
    float z0 = atof(argv[3]);
    float x1 = atof(argv[4]);
    float y1 = atof(argv[5]);
    float z1 = atof(argv[6]);
    float vx = x1 - x0;
    float vy = y1 - y0;
    float vz = z1 - z0;

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vx, vy, vz);
    return 0;
}

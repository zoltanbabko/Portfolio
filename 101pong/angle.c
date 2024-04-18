/*
** EPITECH PROJECT, 2023
** angle
** File description:
** angle
*/

#include "my.h"

int angle(float vx, float vy, float vz)
{
    float arcsin = asin(vz / sqrt((vx * vx) + (vy * vy) + (vz * vz)));

    if (arcsin < 0) {
        arcsin *= -1;
    }
    printf("The incidence angle is:\n");
    if (arcsin > 0) {
        printf("%.2f degrees\n", arcsin * (180 / M_PI));
    } else {
        printf("%.2f degrees\n", 0.00);
    }
    return 0;
}

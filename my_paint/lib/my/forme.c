/*
** EPITECH PROJECT, 2024
** forme
** File description:
** forme
*/

#include "paint.h"

csfml_t chose_forme(csfml_t csfml, button_t button)
{
    button.black = sfRectangleShape_create();
    sfRectangleShape_setSize(button.black, (sfVector2f){30, 30});
    sfRectangleShape_setFillColor(button.black, sfBlack);
    sfRectangleShape_setPosition(button.black, (sfVector2f){1000, 60});
    button.circle = sfCircleShape_create();
    sfRenderWindow_drawRectangleShape(csfml.window, button.black, NULL);
    sfRectangleShape_destroy(button.black);
    sfCircleShape_destroy(button.circle);
    return csfml;
}

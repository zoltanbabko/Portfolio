/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-robin.wipff
** File description:
** gui.c
*/

#include "my.h"
#include "paint.h"

button_t brush_eraser_button(sfRenderWindow *window, button_t button)
{
    button.brush = sfRectangleShape_create();
    sfRectangleShape_setSize(button.brush, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(button.brush, sfWhite);
    sfRectangleShape_setPosition(button.brush, (sfVector2f){50, 50});
    sfRenderWindow_drawRectangleShape(window, button.brush, NULL);
    button.eraser = sfRectangleShape_create();
    sfRectangleShape_setSize(button.eraser, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(button.eraser, sfWhite);
    sfRectangleShape_setPosition(button.eraser, (sfVector2f){110, 50});
    sfRenderWindow_drawRectangleShape(window, button.eraser, NULL);
}

button_t green_back_colors(sfRenderWindow *window, button_t button)
{
    button.green = sfRectangleShape_create();
    sfRectangleShape_setSize(button.green, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(button.green, sfGreen);
    sfRectangleShape_setPosition(button.green, (sfVector2f){1470, 50});
    sfRenderWindow_drawRectangleShape(window, button.green, NULL);
    button.black = sfRectangleShape_create();
    sfRectangleShape_setSize(button.black, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(button.black, sfBlack);
    sfRectangleShape_setPosition(button.black, (sfVector2f){1530, 50});
    sfRenderWindow_drawRectangleShape(window, button.black, NULL);
    button = brush_eraser_button(window, button);
    sfRectangleShape_destroy(button.green);
    sfRectangleShape_destroy(button.black);
    return button;
}

button_t colors(sfRenderWindow *window, button_t button)
{
    button.blue = sfRectangleShape_create();
    sfRectangleShape_setSize(button.blue, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(button.blue, sfBlue);
    sfRectangleShape_setPosition(button.blue, (sfVector2f){1350, 50});
    sfRenderWindow_drawRectangleShape(window, button.blue, NULL);
    button.red = sfRectangleShape_create();
    sfRectangleShape_setSize(button.red, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(button.red, sfRed);
    sfRectangleShape_setPosition(button.red, (sfVector2f){1410, 50});
    sfRenderWindow_drawRectangleShape(window, button.red, NULL);
    button = green_back_colors(window, button);
    sfRectangleShape_destroy(button.blue);
    sfRectangleShape_destroy(button.red);
    return button;
}

int background_gui(sfRenderWindow *window)
{
    sfRectangleShape *outilRectangle;
    sfRectangleShape *infoRectangle;

    outilRectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(outilRectangle, (sfVector2f){1920, 175});
    sfRectangleShape_setFillColor(outilRectangle,
    sfColor_fromRGB(213, 213, 213));
    sfRectangleShape_setPosition(outilRectangle, (sfVector2f){0, 0});
    sfRenderWindow_drawRectangleShape(window, outilRectangle, NULL);
    infoRectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(infoRectangle, (sfVector2f){1920, 25});
    sfRectangleShape_setFillColor(infoRectangle,
    sfColor_fromRGB(0, 0, 0));
    sfRectangleShape_setPosition(infoRectangle, (sfVector2f){0, 0});
    sfRenderWindow_drawRectangleShape(window, infoRectangle, NULL);
    sfRectangleShape_destroy(outilRectangle);
    sfRectangleShape_destroy(infoRectangle);
    return 0;
}

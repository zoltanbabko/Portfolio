/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-robin.wipff
** File description:
** menu.c
*/

#include "my.h"
#include "paint.h"

void menu_save(csfml_t csfml)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);

    if (click(sfMouseLeft) == 1 && mousePos.x >= 270 && mousePos.x <= 320 &&
    mousePos.y >= 0 && mousePos.y <= 25) {
        sfImage_saveToFile(csfml.image, "./YourDraw.png");
    }
}

void menu_help(csfml_t csfml, button_t button)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);

    if (click(sfMouseLeft) == 1 && mousePos.x >= 180 && mousePos.x <= 260 &&
    mousePos.y >= 0 && mousePos.y <= 25) {
        sfRectangleShape_setSize(button.button_menu, (sfVector2f){80, 50});
        sfRectangleShape_setFillColor(button.button_menu, sfBlue);
        sfRectangleShape_setPosition(button.button_menu,
        (sfVector2f){180, 25});
        sfRenderWindow_drawRectangleShape(csfml.window,
        button.button_menu, NULL);
    }
}

void menu_edit(csfml_t csfml, button_t button)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);

    if (click(sfMouseLeft) == 1 && mousePos.x >= 90 && mousePos.x <= 150 &&
    mousePos.y >= 0 && mousePos.y <= 25) {
        sfRectangleShape_setSize(button.button_menu, (sfVector2f){80, 50});
        sfRectangleShape_setFillColor(button.button_menu, sfBlue);
        sfRectangleShape_setPosition(button.button_menu,
        (sfVector2f){90, 25});
        sfRenderWindow_drawRectangleShape(csfml.window,
        button.button_menu, NULL);
    }
}

void menu_files(csfml_t csfml, button_t button)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);

    if (click(sfMouseLeft) == 1 && mousePos.x >= 0 && mousePos.x <= 80 &&
    mousePos.y >= 0 && mousePos.y <= 25) {
        sfRectangleShape_setSize(button.button_menu, (sfVector2f){80, 50});
        sfRectangleShape_setFillColor(button.button_menu, sfBlue);
        sfRectangleShape_setPosition(button.button_menu, (sfVector2f){0, 25});
        sfRenderWindow_drawRectangleShape(csfml.window,
        button.button_menu, NULL);
    }
}

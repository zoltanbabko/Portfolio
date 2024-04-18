/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-robin.wipff
** File description:
** colors.c
*/

#include "my.h"
#include "paint.h"

int click(sfMouseButton bouton)
{
    if (sfMouse_isButtonPressed(bouton)) {
        return 1;
    } else {
        return 0;
    }
}

sfColor clicked(csfml_t csfml, int i, sfColor color)
{
    sfRectangleShape* rectangle = sfRectangleShape_create();

    return color;
}

csfml_t which_colors(csfml_t csfml, button_t button)
{
    int i = 1350;
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);

    if (click(sfMouseLeft) == 1 && mousePos.x >= i && mousePos.x <= 1400 &&
    mousePos.y >= 50 && mousePos.y <= 100)
        csfml.color = clicked(csfml, i, sfBlue);
    if (click(sfMouseLeft) == 1 && mousePos.x >= (i + 60) &&
    mousePos.x <= 1460 && mousePos.y >= 50 && mousePos.y <= 100)
        csfml.color = clicked(csfml, (i + 60), sfRed);
    if (click(sfMouseLeft) == 1 && mousePos.x >= (i + 120) &&
    mousePos.x <= 1520 && mousePos.y >= 50 && mousePos.y <= 100)
        csfml.color = clicked(csfml, (i + 120), sfGreen);
    if (click(sfMouseLeft) == 1 && mousePos.x >= (i + 180) &&
    mousePos.x <= 1580 && mousePos.y >= 50 && mousePos.y <= 100)
        csfml.color = clicked(csfml, (i + 180), sfBlack);
    if (click(sfMouseLeft) == 1 && mousePos.x >= (i - 1240) &&
    mousePos.x <= 160 && mousePos.y >= 50 && mousePos.y <= 100) {
        csfml.color = clicked(csfml, (i - 1240), sfWhite);
    }
    return csfml;
}

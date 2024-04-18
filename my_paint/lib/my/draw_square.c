/*
** EPITECH PROJECT, 2024
** draw square
** File description:
** draw square
*/

#include "my.h"
#include "paint.h"

csfml_t drow_square(int size, int posX, int posY, csfml_t csfml)
{
    sfRectangleShape* square = sfRectangleShape_create();

    sfRectangleShape_setSize(square, (sfVector2f){50, 50});
    sfRectangleShape_setFillColor(square, sfBlack);
    sfRectangleShape_setPosition(square, (sfVector2f){100, 100});
    sfRenderWindow_drawRectangleShape(csfml.window, square, NULL);
    return csfml;
}

csfml_t del_square(int size, int posX, int posY, csfml_t csfml)
{
    sfRectangleShape* outline = sfRectangleShape_create();

    sfRectangleShape_setSize(outline, (sfVector2f){size, size});
    sfRectangleShape_setPosition(outline, (sfVector2f){posX, posY});
    sfRectangleShape_setFillColor(outline, sfTransparent);
    sfRectangleShape_setOutlineThickness(outline, 5);
    sfRectangleShape_setOutlineColor(outline, sfTransparent);
    sfRenderWindow_drawRectangleShape(csfml.window, outline, NULL);
    return csfml;
}

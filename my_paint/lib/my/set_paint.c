/*
** EPITECH PROJECT, 2024
** set paint
** File description:
** set paint
*/

#include "paint.h"

csfml_t set_image(csfml_t csfml)
{
    csfml.texture_brush = sfTexture_createFromImage(csfml.image_brush, NULL);
    csfml.texture_eraser = sfTexture_createFromImage(csfml.image_eraser, NULL);
    csfml.sprite_brush = sfSprite_create();
    csfml.sprite_eraser = sfSprite_create();
    return csfml;
}

csfml_t outil_fct(csfml_t csfml)
{
    sfSprite_setTexture(csfml.sprite, csfml.texture, sfTrue);
    sfSprite_setPosition(csfml.sprite, (sfVector2f){0, 175});
    sfRenderWindow_drawSprite(csfml.window, csfml.sprite, NULL);
    sfSprite_setTexture(csfml.sprite_brush, csfml.texture_brush, sfTrue);
    sfSprite_setPosition(csfml.sprite_brush, (sfVector2f){50, 56});
    sfRenderWindow_drawSprite(csfml.window, csfml.sprite_brush, NULL);
    sfSprite_setTexture(csfml.sprite_eraser, csfml.texture_eraser, sfTrue);
    sfSprite_setPosition(csfml.sprite_eraser, (sfVector2f){112, 49});
    sfRenderWindow_drawSprite(csfml.window, csfml.sprite_eraser, NULL);
    sfRenderWindow_display(csfml.window);
    return csfml;
}

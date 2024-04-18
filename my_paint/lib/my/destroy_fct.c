/*
** EPITECH PROJECT, 2024
** destroy_fct
** File description:
** destroy
*/

#include "paint.h"

void destroy_fct(csfml_t csfml)
{
    sfTexture_destroy(csfml.texture);
    sfSprite_destroy(csfml.sprite);
    sfTexture_destroy(csfml.texture_brush);
    sfSprite_destroy(csfml.sprite_brush);
    sfTexture_destroy(csfml.texture_eraser);
    sfSprite_destroy(csfml.sprite_eraser);
    sfImage_destroy(csfml.image);
    sfImage_destroy(csfml.image_brush);
    sfImage_destroy(csfml.image_eraser);
    sfRenderWindow_destroy(csfml.window);
}

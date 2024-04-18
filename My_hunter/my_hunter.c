/*
** EPITECH PROJECT, 2023
** my window
** File description:
** my window
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "my.h"

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = initialize_window(mode);
    sfTexture *backgroundTexture = set_texture("./background.jpg");
    DuckInfo duckInfo;

    duckInfo.texture = set_texture("./duck.png");
    duckInfo.rect = (sfIntRect){0, 0, 110, 110};
    duckInfo.duckPosition = (sfVector2f){100.0f, 100.0f};
    duckInfo.sprite = setup_sprite(duckInfo.texture,
        &duckInfo.rect, &duckInfo.duckPosition);
    duckInfo.clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        animation_duck(&duckInfo);
        set_events(window);
        if (sfMouse_isButtonPressed(sfMouseLeft) &&
            kill_duck(&duckInfo, window)) {
            reset_duck(&duckInfo);
        }
        refresh(window, backgroundTexture, duckInfo.sprite);
    }
    destroy(window, duckInfo.sprite, duckInfo.texture, duckInfo.clock);
    return EXIT_SUCCESS;
}

sfRenderWindow* initialize_window(sfVideoMode mode)
{
    sfRenderWindow* window =
        sfRenderWindow_create(mode, "My Hunter", sfResize | sfClose, NULL);

    if (!window)
        return NULL;
    return window;
}

void set_background(sfRenderWindow *window, sfTexture *backgroundTexture)
{
    sfSprite *backgroundSprite = sfSprite_create();

    sfSprite_setTexture(backgroundSprite, backgroundTexture, sfTrue);
    sfRenderWindow_drawSprite(window, backgroundSprite, NULL);
    sfSprite_destroy(backgroundSprite);
}

sfTexture* set_texture(const char *filename)
{
    sfTexture *texture = sfTexture_createFromFile(filename, NULL);

    if (!texture)
        return NULL;
    return texture;
}

sfSprite* setup_sprite(sfTexture *texture, sfIntRect *rect,
    sfVector2f *initialPosition)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, *rect);
    sfSprite_setPosition(sprite, *initialPosition);
    return sprite;
}

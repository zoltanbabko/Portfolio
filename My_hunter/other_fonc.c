/*
** EPITECH PROJECT, 2023
** other fonct
** File description:
** other fonct
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "my.h"

void set_events(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

void animation_duck(DuckInfo *duckInfo)
{
    sfTime elapsed_time = sfClock_getElapsedTime(duckInfo->clock);
    float seconds = sfTime_asSeconds(elapsed_time);
    float animationSpeed = 0.2;

    if (seconds > animationSpeed) {
        duckInfo->rect.left += 110;
        if (duckInfo->rect.left >= 330)
            duckInfo->rect.left = 0;
        sfSprite_setTextureRect(duckInfo->sprite, duckInfo->rect);
        duckInfo->duckPosition.x += 5.0f;
        duckInfo->duckPosition.y += 0.0f;
        sfSprite_setPosition(duckInfo->sprite, duckInfo->duckPosition);
        sfClock_restart(duckInfo->clock);
    }
}

sfBool kill_duck(DuckInfo *duckInfo, sfRenderWindow *window)
{
    sfVector2i mousePosition = sfMouse_getPositionRenderWindow(window);
    sfFloatRect duckBounds = sfSprite_getGlobalBounds(duckInfo->sprite);

    return sfFloatRect_contains(&duckBounds, mousePosition.x, mousePosition.y);
}

void refresh(sfRenderWindow *window, sfTexture *backgroundTexture,
    sfSprite *sprite)
{
    sfRenderWindow_clear(window, sfBlack);
    set_background(window, backgroundTexture);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
}

void destroy(sfRenderWindow *window, sfSprite *sprite,
    sfTexture *texture, sfClock *clock)
{
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
}

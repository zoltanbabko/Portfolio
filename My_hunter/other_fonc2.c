/*
** EPITECH PROJECT, 2023
** other fonct 2
** File description:
** other fonct 2
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "my.h"

void reset_duck(DuckInfo *duckInfo)
{
    sfSprite_setColor(duckInfo->sprite, sfTransparent);
    sfSprite_destroy(duckInfo->sprite);
    duckInfo->duckPosition.x = 110;
    duckInfo->duckPosition.y = rand() % (1080 - 110);
    duckInfo->sprite = setup_sprite(duckInfo->texture,
        &duckInfo->rect, &duckInfo->duckPosition);
    sfClock_restart(duckInfo->clock);
}

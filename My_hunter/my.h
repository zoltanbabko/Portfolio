/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/
#include <stdarg.h>
#include <sys/types.h>
#include <dirent.h>
#include <stddef.h>
#include <stdio.h>

#ifndef MY_FONC
    #define MY_FONC
typedef struct {
    sfSprite *sprite;
    sfVector2f duckPosition;
    sfTexture *texture;
    sfIntRect rect;
    sfClock *clock;
} DuckInfo;

sfRenderWindow* initialize_window(sfVideoMode mode);
void set_background(sfRenderWindow *window, sfTexture *backgroundTexture);
sfTexture* set_texture(const char *filename);
sfSprite* setup_sprite(sfTexture *texture, sfIntRect *rect,
    sfVector2f *initialPosition);
void set_events(sfRenderWindow *window);
void animation_duck(DuckInfo *duckInfo);
sfBool kill_duck(DuckInfo *duckInfo, sfRenderWindow *window);
void destroy(sfRenderWindow *window, sfSprite *sprite,
    sfTexture *texture, sfClock *clock);
void refresh(sfRenderWindow *window, sfTexture *backgroundTexture,
    sfSprite *sprite);
void reset_duck(DuckInfo *duckInfo);
int main(void);
#endif /* !MY_FONC */

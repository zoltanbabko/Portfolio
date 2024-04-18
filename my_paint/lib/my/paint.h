/*
** EPITECH PROJECT, 2023
** B-MUL-100-PAR-1-1-myradar-robin.wipff
** File description:
** radar.h
*/

#include <stdarg.h>
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <stdbool.h>

#ifndef PAINT_H
    #define PAINT_H

typedef struct csfml_s {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfImage* image;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    sfColor color;
    sfImage* image_brush;
    sfTexture* texture_brush;
    sfSprite* sprite_brush;
    sfImage* image_eraser;
    sfTexture* texture_eraser;
    sfSprite* sprite_eraser;
    sfBool active_brush;
} csfml_t;

typedef struct button_s {
    int size;
    sfRectangleShape* brush;
    sfBool boutonActuel_brush;
    sfBool boutonPasser_brush;
    sfCircleShape* circle;
    sfRectangleShape* eraser;
    sfRectangleShape* size_tool;
    sfRectangleShape* blue;
    sfRectangleShape* red;
    sfRectangleShape* green;
    sfRectangleShape* black;
    sfText *text;
    sfRectangleShape *button_menu;
} button_t;

int background_gui(sfRenderWindow *window);
csfml_t which_colors(csfml_t csfml, button_t button);
button_t colors(sfRenderWindow *window, button_t button);
csfml_t chose_forme(csfml_t csfml, button_t button);
button_t green_back_colors(sfRenderWindow *window, button_t button);
csfml_t update_image(csfml_t csfml, button_t button);
csfml_t set_image(csfml_t csfml);
csfml_t outil_fct(csfml_t csfml);
int click(sfMouseButton bouton);
void menu_help(csfml_t csfml, button_t button);
void menu_edit(csfml_t csfml, button_t button);
void save(csfml_t csfml, button_t button, sfFont *font);
void menu_files(csfml_t csfml, button_t button);
void set_menu(csfml_t csfml, button_t button);
void destroy_fct(csfml_t csfml);
sfColor clicked(csfml_t csfml, int i, sfColor color);
void menu_save(csfml_t csfml);

#endif /* !PAINT_H_ */

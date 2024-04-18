/*
** EPITECH PROJECT, 2024
** gui menu
** File description:
** gui menu
*/

#include "my.h"
#include "paint.h"

void save(csfml_t csfml, button_t button, sfFont *font)
{
    sfText_setString(button.text, "Save");
    sfText_setFont(button.text, font);
    sfText_setCharacterSize(button.text, 15);
    sfText_setFillColor(button.text, sfWhite);
    sfText_setPosition(button.text, (sfVector2f){270, 5});
    sfRenderWindow_drawText(csfml.window, button.text, NULL);
    menu_save(csfml);
}

void files(csfml_t csfml, button_t button, sfFont *font)
{
    sfText_setString(button.text, "Files");
    sfText_setFont(button.text, font);
    sfText_setCharacterSize(button.text, 15);
    sfText_setFillColor(button.text, sfWhite);
    sfText_setPosition(button.text, (sfVector2f){0, 5});
    sfRenderWindow_drawText(csfml.window, button.text, NULL);
    menu_files(csfml, button);
}

void edit(csfml_t csfml, button_t button, sfFont *font)
{
    sfText_setString(button.text, "Edit");
    sfText_setFont(button.text, font);
    sfText_setCharacterSize(button.text, 15);
    sfText_setFillColor(button.text, sfWhite);
    sfText_setPosition(button.text, (sfVector2f){90, 5});
    sfRenderWindow_drawText(csfml.window, button.text, NULL);
    menu_edit(csfml, button);
}

void help(csfml_t csfml, button_t button, sfFont *font)
{
    sfText_setString(button.text, "Help");
    sfText_setFont(button.text, font);
    sfText_setCharacterSize(button.text, 15);
    sfText_setFillColor(button.text, sfWhite);
    sfText_setPosition(button.text, (sfVector2f){180, 5});
    sfRenderWindow_drawText(csfml.window, button.text, NULL);
    menu_help(csfml, button);
}

void set_menu(csfml_t csfml, button_t button)
{
    sfFont *font = sfFont_createFromFile("Files/Regular.otf");

    button.text = sfText_create();
    button.button_menu = sfRectangleShape_create();
    files(csfml, button, font);
    edit(csfml, button, font);
    help(csfml, button, font);
    save(csfml, button, font);
    sfText_destroy(button.text);
    sfFont_destroy(font);
}

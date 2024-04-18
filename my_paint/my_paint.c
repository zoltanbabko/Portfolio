/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-mypaint-robin.wipff
** File description:
** my_paint.c
*/

#include "my.h"
#include "paint.h"
#include <stdbool.h>

csfml_t gui_init(csfml_t csfml, button_t button)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);

    background_gui(csfml.window);
    button = colors(csfml.window, button);
    csfml = chose_forme(csfml, button);
    set_menu(csfml, button);
    if (click(sfMouseLeft) == 1 && mousePos.x >= 50 && mousePos.x <= 100 &&
    mousePos.y >= 50 && mousePos.y <= 100)
        csfml.color = sfBlack;
    csfml = outil_fct(csfml);
    sfTexture_destroy(csfml.texture);
    return csfml;
}

csfml_t event_close(csfml_t csfml)
{
    while (sfRenderWindow_pollEvent(csfml.window, &csfml.event)) {
        if (csfml.event.type == sfEvtClosed) {
            sfRenderWindow_close(csfml.window);
        }
    }
    return csfml;
}

csfml_t init_struct(csfml_t csfml, sfColor color)
{
    csfml.mode.width = 1920;
    csfml.mode.height = 1080;
    csfml.mode.bitsPerPixel = 32;
    csfml.window = sfRenderWindow_create(csfml.mode, "My_Paint", sfClose
    | sfResize, NULL);
    csfml.image = sfImage_createFromFile("Files/image.png");
    csfml.texture = sfTexture_createFromImage(csfml.image, NULL);
    csfml.image_brush = sfImage_createFromFile("Files/brush.png");
    csfml.texture_brush = sfTexture_createFromImage(csfml.image_brush, NULL);
    csfml.image_eraser = sfImage_createFromFile("Files/eraser.png");
    csfml.texture_eraser = sfTexture_createFromImage(csfml.image_eraser, NULL);
    csfml.sprite = sfSprite_create();
    csfml.sprite_brush = sfSprite_create();
    csfml.sprite_eraser = sfSprite_create();
    csfml.color = color;
    csfml.active_brush = sfFalse;
    return csfml;
}

button_t init_button(button_t button)
{
    button.boutonPasser_brush = sfFalse;
    return button;
}

static int test_project(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        return file_into_str("./README.md");
    }
    if (argc != 1)
        return 84;
    return 1;
}

int main(int argc, char **argv)
{
    csfml_t csfml;
    button_t button;

    if (test_project(argc, argv) != 1)
        return test_project(argc, argv);
    button = init_button(button);
    csfml = init_struct(csfml, sfBlack);
    sfSprite_setTexture(csfml.sprite, csfml.texture, sfTrue);
    csfml = set_image(csfml);
    while (sfRenderWindow_isOpen(csfml.window)) {
        csfml = event_close(csfml);
        csfml = which_colors(csfml, button);
        csfml = update_image(csfml, button);
        csfml = gui_init(csfml, button);
        csfml.texture = sfTexture_createFromImage(csfml.image, NULL);
        sfSprite_setTexture(csfml.sprite, csfml.texture, sfFalse);
        sfRenderWindow_drawSprite(csfml.window, csfml.sprite, NULL);
    }
    destroy_fct(csfml);
    return 0;
}

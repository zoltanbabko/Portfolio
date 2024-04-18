/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-size-mypaint-robin.wipff
** File description:
** pinceau.c
*/

#include "my.h"
#include "paint.h"

void print_circle(csfml_t csfml, int centerX, int centerY, int radius)
{
    int x = radius;
    int y = 0;
    int z = 0;

    while (x >= y) {
        for (int i = centerX - x; i <= centerX + x; i++) {
            sfImage_setPixel(csfml.image, i, centerY + y, csfml.color);
            sfImage_setPixel(csfml.image, i, centerY - y, csfml.color);
        }
        y++;
        if (z <= 0)
            z += 2 * y + 1;
        if (z > 0){
            x--;
            z -= 2 * x + 1;
        }
    }
}

void print_square(csfml_t csfml, int mouseX, int mouseY, int size)
{
    for (int i = -size; i <= size; i++) {
        for (int j = -size; j <= size; j++) {
            sfImage_setPixel(csfml.image, mouseX + i, mouseY + j, csfml.color);
        }
    }
}

void print_etoile(csfml_t csfml, int mouseX, int mouseY)
{
    int size = 10;

    for (int i = 1; i <= size; i ++) {
        sfImage_setPixel(csfml.image, mouseX, mouseY, csfml.color);
        sfImage_setPixel(csfml.image, mouseX - i, mouseY, csfml.color);
        sfImage_setPixel(csfml.image, mouseX + i, mouseY, csfml.color);
        sfImage_setPixel(csfml.image, mouseX, mouseY + i, csfml.color);
        sfImage_setPixel(csfml.image, mouseX, mouseY - i, csfml.color);
        sfImage_setPixel(csfml.image, mouseX - i, mouseY + i, csfml.color);
        sfImage_setPixel(csfml.image, mouseX - i, mouseY - i, csfml.color);
        sfImage_setPixel(csfml.image, mouseX + i, mouseY + i, csfml.color);
        sfImage_setPixel(csfml.image, mouseX + i, mouseY - i, csfml.color);
    }
}

csfml_t update_image(csfml_t csfml, button_t button)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml.window);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y - 175;
    unsigned int imageXmax = sfImage_getSize(csfml.image).x;
    unsigned int imageYmax = sfImage_getSize(csfml.image).y + 175;
    int b_click = click(sfMouseLeft);

    button.size = 5;
    if (b_click == 1 && mouseX >= 50 && mouseX <= 100 && mouseY + 175 >= 50 &&
    mouseY + 175 <= 100)
        csfml.active_brush = !csfml.active_brush;
    if ((mouseX >= imageXmax) || (mouseY <= 0 + button.size)
    || (mouseY >= imageYmax + button.size))
        return csfml;
    if (b_click == 1 && csfml.active_brush) {
        if (mouseX >= 0 && mouseX < imageXmax && mouseY >= 0
        && mouseY < imageYmax)
            print_circle(csfml, mouseX, mouseY, button.size);
    }
    return csfml;
}

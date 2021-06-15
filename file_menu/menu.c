/*
** EPITECH PROJECT, 2021
** menu
** File description:
** my_runner
*/

#include "../include/functions.h"

void menu(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p)
{

    sfRenderWindow_setFramerateLimit(disp_w.window_w, 60);
    texture(disp_b, run, disp_p);
    sfSprite_setTexture(disp_w.exit_button_s, disp_w.exit_button_t, sfFalse);
    sfSprite_setTexture(disp_w.play_button_s, disp_w.play_button_t, sfFalse);
    clock_menu(disp_w, disp_b, run, disp_p);
    sfSprite_destroy(disp_w.exit_button_s);
    sfTexture_destroy(disp_w.exit_button_t);
    sfSprite_destroy(disp_w.play_button_s);
    sfTexture_destroy(disp_w.play_button_t);
}
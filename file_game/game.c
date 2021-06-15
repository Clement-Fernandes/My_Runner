/*
** EPITECH PROJECT, 2021
** game
** File description:
** my_runner
*/

#include "../include/functions.h"

int game(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p)
{
    sfRenderWindow_setFramerateLimit(disp_w.window_w, 60);
    texture(disp_b, run, disp_p);
    clocks(disp_w, disp_b, run, disp_p);
}
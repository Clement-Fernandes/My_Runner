/*
** EPITECH PROJECT, 2021
** end
** File description:
** my_runner
*/

#include "../include/functions.h"

int end(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    scale_and_pos(disp_b, run, disp_p);
    while (sfRenderWindow_isOpen(disp_w.window_w)) {
        analyse_menu(disp_w, run, disp_b, disp_p);
        draw_end(disp_w, disp_b, run, disp_p);
        sfRenderWindow_display(disp_w.window_w);
    }
    return (0);
}
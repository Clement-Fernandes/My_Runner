/*
** EPITECH PROJECT, 2021
** clock_menu.c
** File description:
** my_runner
*/

#include "../include/functions.h"

int clock_menu(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    struct move move_p = move_para(move_p);
    sfClock *clock = sfClock_create();
    sfTime timer;
    float seconds = 0;

    buttons_sp(disp_w, disp_b, run, disp_p);
    while (sfRenderWindow_isOpen(disp_w.window_w)) {
        replace(move_p, disp_p, disp_b);
        move_menu(move_p, disp_p, disp_b);
        alll(disp_w, disp_b, run, disp_p);
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
        if (seconds > 0.100) {
            move_char(&run, 50, 300);
            sfClock_restart(clock);
        }
        sfSprite_setTextureRect(run.run_s, run.rect_menu);
        sfRenderWindow_display(disp_w.window_w);
    }
}

int alll(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    sfRenderWindow_clear(disp_w.window_w, sfBlack);
    analyse_menu(disp_w, run, disp_b, disp_p);
    draw(disp_w, disp_b, run, disp_p);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_w.exit_button_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_w.play_button_s, NULL);
}
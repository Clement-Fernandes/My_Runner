/*
** EPITECH PROJECT, 2021
** my_clock.c
** File description:
** my_runner
*/

#include "../include/functions.h"

int clocks(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    struct move move_p = move_para(move_p);
    sfClock *clock = sfClock_create();
    sfTime timer;
    float seconds;

    scale_and_pos(disp_b, run, disp_p);
    while (sfRenderWindow_isOpen(disp_w.window_w)) {
        replace(move_p, disp_p, disp_b);
        move(move_p, disp_p, disp_b);
        all(disp_w, disp_b, run, disp_p);
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
        if (seconds > 0.100) {
            move_rect(&run, 52, 624);
            sfClock_restart(clock);
        }
        sfSprite_setTextureRect(run.run_s, run.rect);
        sfRenderWindow_display(disp_w.window_w);
    }
    return (0);
}

int all(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    sfRenderWindow_clear(disp_w.window_w, sfBlack);
    run = analyse_events(&disp_w, &run, &disp_b, &disp_p);
    analyse_event(disp_w, run, disp_b, disp_p);
    draw(disp_w, disp_b, run, disp_p);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_b.rocket_s, NULL);
    return (0);
}
/*
** EPITECH PROJECT, 2021
** analyse_event.c
** File description:
** my_runner
*/

#include "../include/functions.h"

int analyse_event(struct window disp_w, struct luke run,
struct background disp_b, struct parallax disp_p)
{
    sfVector2f rocket_p = sfSprite_getPosition(disp_b.rocket_s);
    sfVector2f luke_p = sfSprite_getPosition(run.run_s);

    if (rocket_p.x < luke_p.x + 30 && rocket_p.y < luke_p.y + 168 &&
        rocket_p.x > luke_p.x)
        end(disp_w, disp_b, run, disp_p);
}
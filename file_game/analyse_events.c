/*
** EPITECH PROJECT, 2020
** analyse_events.c
** File description:
** my_runner
*/

#include "../include/functions.h"

struct luke analyse_events(struct window *disp_w, struct luke *run,
struct background *disp_b, struct parallax *disp_p)
{
    struct move move_p = move_para(move_p);

    while (sfRenderWindow_pollEvent(disp_w->window_w, &disp_w->event)) {
        if (disp_w->event.type == sfEvtClosed)
            sfRenderWindow_close(disp_w->window_w);
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            while (run->pos.y > 600) {
                *run = jump(run, -10);
                jump_next(&move_p, disp_b, disp_p);
                jump_end(disp_w, run, disp_b, disp_p);
            }
            while (run->pos.y < 765) {
                *run = jump(run, 10);
                jump_next(&move_p, disp_b, disp_p);
                jump_end(disp_w, run, disp_b, disp_p);
            }
        }
    }
    return (*run);
}

struct luke jump(struct luke *run, int value)
{
    run->pos.y = run->pos.y + value;
    sfSprite_setPosition(run->run_s, run->pos);
    return (*run);
}

void jump_next(struct move *move_p, struct background *disp_b,
struct parallax *disp_p)
{
    move(*move_p, *disp_p, *disp_b);
    replace(*move_p, *disp_p, *disp_b);
}

void jump_end(struct window *disp_w, struct luke *run,
struct background *disp_b, struct parallax *disp_p)
{
    draw(*disp_w, *disp_b, *run, *disp_p);
    sfRenderWindow_drawSprite(disp_w->window_w, disp_b->rocket_s, NULL);
    sfRenderWindow_display(disp_w->window_w);
}

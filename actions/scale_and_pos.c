/*
** EPITECH PROJECT, 2020
** scale
** File description:
** my_runner
*/

#include "../include/functions.h"

int scale(struct background disp_b, struct luke run, struct parallax disp_p)
{
    sfSprite_setScale(disp_b.background_s, disp_b.scale);
    sfSprite_setScale(disp_b.back_copy_s, disp_b.scale);
    sfSprite_setScale(disp_p.big_mountain_s, disp_b.scale);
    sfSprite_setScale(disp_p.big_copy_s, disp_b.scale);
    sfSprite_setScale(disp_p.mountains_s, disp_b.scale);
    sfSprite_setScale(disp_p.little_trees_s, disp_b.scale);
    sfSprite_setScale(disp_p.trees_s, disp_b.scale);
    sfSprite_setScale(run.run_s, run.scale);
    sfSprite_setScale(disp_b.rocket_s, disp_b.scale_s);
    sfSprite_setScale(run.over_s, run.scale_g);
}

int pos(struct background disp_b, struct luke run, struct parallax disp_p)
{
    sfSprite_setPosition(run.run_s, run.pos);
    sfSprite_setPosition(disp_b.background_s, disp_p.pos);
    sfSprite_setPosition(disp_b.back_copy_s, disp_p.pos_copy);
    sfSprite_setPosition(disp_p.big_mountain_s, disp_p.pos_up);
    sfSprite_setPosition(disp_p.big_copy_s, disp_p.pos_up_copy);
    sfSprite_setPosition(disp_p.mountains_s, disp_p.pos_up);
    sfSprite_setPosition(disp_p.little_trees_s, disp_p.pos_up);
    sfSprite_setPosition(disp_p.trees_s, disp_p.pos_up);
    sfSprite_setPosition(disp_p.grass_s, disp_p.pos_grass);
    sfSprite_setPosition(disp_b.rocket_s, disp_b.pos_s);
    sfSprite_setPosition(run.over_s, run.pos_g);
}

int pos_buttons(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    sfSprite_setScale(disp_w.exit_button_s, disp_w.scale_b);
    sfSprite_setScale(disp_w.play_button_s, disp_w.scale_b);
    sfSprite_setPosition(disp_w.play_button_s, disp_w.pos_p);
    sfSprite_setPosition(disp_w.exit_button_s, disp_w.pos_e);
}

int buttons_sp(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    sfMusic_play(disp_w.music);
    pos_buttons(disp_w, disp_b, run, disp_p);
    pos(disp_b, run, disp_p);
    scale(disp_b, run, disp_p);
}

int scale_and_pos(struct background disp_b, struct luke run,
struct parallax disp_p)
{
    pos(disp_b, run, disp_p);
    scale(disp_b, run, disp_p);
}
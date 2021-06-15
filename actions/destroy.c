/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** my_runner
*/

#include "../include/functions.h"

void destroy_player_and_back(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p)
{
    sfTexture_destroy(disp_b.background_t);
    sfSprite_destroy(disp_b.background_s);
    sfTexture_destroy(disp_b.back_copy_t);
    sfSprite_destroy(disp_b.back_copy_s);
    sfTexture_destroy(run.run_t);
    sfSprite_destroy(run.run_s);
    sfTexture_destroy(disp_b.rocket_t);
    sfSprite_destroy(disp_b.rocket_s);
    sfTexture_destroy(run.over_t);
    sfSprite_destroy(run.over_s);
    sfMusic_destroy(disp_w.music);
}

void destroy_parallax(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p)
{
    sfTexture_destroy(disp_p.big_mountain_t);
    sfSprite_destroy(disp_p.big_mountain_s);
    sfTexture_destroy(disp_p.big_copy_t);
    sfSprite_destroy(disp_p.big_copy_s);
    sfTexture_destroy(disp_p.mountains_t);
    sfSprite_destroy(disp_p.mountains_s);
    sfTexture_destroy(disp_p.little_trees_t);
    sfSprite_destroy(disp_p.little_trees_s);
    sfTexture_destroy(disp_p.trees_t);
    sfSprite_destroy(disp_p.trees_s);
    sfTexture_destroy(disp_p.grass_t);
    sfSprite_destroy(disp_p.grass_s);
}

void destroy(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p)
{
    destroy_player_and_back(disp_w, disp_b, run, disp_p);
    destroy_parallax(disp_w, disp_b, run, disp_p);
}
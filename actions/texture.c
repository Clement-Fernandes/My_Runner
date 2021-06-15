/*
** EPITECH PROJECT, 2020
** texture
** File description:
** my_runner
*/

#include "../include/functions.h"

int texture(struct background disp_b, struct luke run, struct parallax disp_p)
{
    sfSprite_setTexture(disp_b.background_s, disp_b.background_t, sfFalse);
    sfSprite_setTexture(disp_b.back_copy_s, disp_b.back_copy_t, sfFalse);
    sfSprite_setTexture(run.run_s, run.run_t, sfFalse);
    sfSprite_setTexture(disp_p.big_mountain_s, disp_p.big_mountain_t, sfFalse);
    sfSprite_setTexture(disp_p.big_copy_s, disp_p.big_copy_t, sfFalse);
    sfSprite_setTexture(disp_p.mountains_s, disp_p.mountains_t, sfFalse);
    sfSprite_setTexture(disp_p.little_trees_s, disp_p.little_trees_t, sfFalse);
    sfSprite_setTexture(disp_p.trees_s, disp_p.trees_t, sfFalse);
    sfSprite_setTexture(disp_p.grass_s, disp_p.grass_t, sfFalse);
    sfSprite_setTexture(disp_b.rocket_s, disp_b.rocket_t, sfFalse);
    sfSprite_setTexture(run.over_s, run.over_t, sfFalse);
}
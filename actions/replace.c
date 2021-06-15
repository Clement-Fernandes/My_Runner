/*
** EPITECH PROJECT, 2021
** replace.c
** File description:
** my_runner
*/

#include "../include/functions.h"

int rep_mount_and_grass(struct move move_p,
struct parallax disp_p, struct background disp_b)
{
    sfVector2f pos = {0, -100};
    sfVector2f pos_copy = {1920, -100};
    sfVector2f pos_grass = {0, 50};

    if (sfSprite_getPosition(disp_p.big_mountain_s).x <= -1920)
        sfSprite_setPosition(disp_p.big_mountain_s, pos);
    if (sfSprite_getPosition(disp_p.big_copy_s).x <= 0)
        sfSprite_setPosition(disp_p.big_copy_s, pos_copy);
    if (sfSprite_getPosition(disp_p.mountains_s).x <= -1920)
        sfSprite_setPosition(disp_p.mountains_s, pos);
    if (sfSprite_getPosition(disp_p.grass_s).x <= -5760)
        sfSprite_setPosition(disp_p.grass_s, pos_grass);
}

int rep_trees_and_back(struct move move_p,
struct parallax disp_p, struct background disp_b)
{
    sfVector2f pos = {0, 0};
    sfVector2f pos_up = {0, -100};
    sfVector2f pos_tree = {-50, -100};
    sfVector2f pos_copy = {1920, 0};

    if (sfSprite_getPosition(disp_b.background_s).x <= -1920)
        sfSprite_setPosition(disp_b.background_s, pos);
    if (sfSprite_getPosition(disp_b.back_copy_s).x <= 0)
        sfSprite_setPosition(disp_b.back_copy_s, pos_copy);
    if (sfSprite_getPosition(disp_p.little_trees_s).x <= -1920)
        sfSprite_setPosition(disp_p.little_trees_s, pos_up);
    if (sfSprite_getPosition(disp_p.trees_s).x <= -1920)
        sfSprite_setPosition(disp_p.trees_s, pos_tree);
}

int replace(struct move move_p, struct parallax disp_p,
struct background disp_b)
{
    sfVector2f pos_rock = {2000, 790};

    if (sfSprite_getPosition(disp_b.rocket_s).x <= -200)
        sfSprite_setPosition(disp_b.rocket_s, pos_rock);
    rep_trees_and_back(move_p, disp_p, disp_b);
    rep_mount_and_grass(move_p, disp_p, disp_b);
}
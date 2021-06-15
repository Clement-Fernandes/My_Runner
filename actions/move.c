/*
** EPITECH PROJECT, 2021
** move.c
** File description:
** my_runner
*/

#include "../include/functions.h"

int move(struct move move_p, struct parallax disp_p, struct background disp_b)
{
    sfSprite_move(disp_b.background_s, move_p.move_background);
    sfSprite_move(disp_b.back_copy_s, move_p.move_background);
    sfSprite_move(disp_p.big_mountain_s, move_p.move_big_m);
    sfSprite_move(disp_p.big_copy_s, move_p.move_big_m);
    sfSprite_move(disp_p.mountains_s, move_p.move_mountain);
    sfSprite_move(disp_p.little_trees_s, move_p.move_little_t);
    sfSprite_move(disp_p.trees_s, move_p.move_trees);
    sfSprite_move(disp_p.grass_s, move_p.move_trees);
    sfSprite_move(disp_b.rocket_s, move_p.move_rocket);
}

int move_menu(struct move move_p, struct parallax disp_p,
struct background disp_b)
{
    sfSprite_move(disp_b.background_s, move_p.move_backgroundm);
    sfSprite_move(disp_b.back_copy_s, move_p.move_backgroundm);
    sfSprite_move(disp_p.big_mountain_s, move_p.move_big_mm);
    sfSprite_move(disp_p.big_copy_s, move_p.move_big_mm);
    sfSprite_move(disp_p.mountains_s, move_p.move_mountainm);
    sfSprite_move(disp_p.little_trees_s, move_p.move_little_tm);
    sfSprite_move(disp_p.trees_s, move_p.move_treesm);
    sfSprite_move(disp_p.grass_s, move_p.move_treesm);
}
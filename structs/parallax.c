/*
** EPITECH PROJECT, 2021
** structdef_two
** File description:
** my_runner
*/

#include "../include/functions.h"

struct parallax create_sprite(struct parallax disp_p)
{
    disp_p.big_copy_s = sfSprite_create();
    disp_p.big_mountain_s = sfSprite_create();
    disp_p.little_trees_s = sfSprite_create();
    disp_p.mountains_s = sfSprite_create();
    disp_p.trees_s = sfSprite_create();
    disp_p.grass_s = sfSprite_create();
    disp_p.scale.x = 7.1;
    disp_p.scale.y = 5.8;
    disp_p.scale_big.x = 7.1;
    disp_p.scale_big.y = 5.5;
    disp_p.pos_copy.x = 1920;
    disp_p.pos_copy.y = 0;
    disp_p.pos_up.x = 0;
    disp_p.pos_up.y = -100;
    disp_p.pos_up_copy.x = 1920;
    disp_p.pos_up_copy.y = -100;
    disp_p.pos_grass.x = 0;
    disp_p.pos_grass.y = 50;
    return (disp_p);
}

struct parallax disp_para(struct parallax disp_p)
{
    disp_p.big_copy_t = (sfTexture_createFromFile
    ("images/parallax/big_mountain.png", NULL));
    disp_p.big_mountain_t = (sfTexture_createFromFile
    ("images/parallax/big_mountain.png", NULL));
    disp_p.mountains_t = (sfTexture_createFromFile
    ("images/parallax/mountains.png", NULL));
    disp_p.little_trees_t = (sfTexture_createFromFile
    ("images/parallax/little_trees.png", NULL));
    disp_p.trees_t = (sfTexture_createFromFile
    ("images/parallax/trees.png", NULL));
    disp_p.grass_t = (sfTexture_createFromFile
    ("images/parallax/grass.png", NULL));
    disp_p = create_sprite(disp_p);
    disp_p.pos.x = 0;
    disp_p.pos.y = 0;
    return (disp_p);
}

struct move move_para_two(struct move move_p)
{
    move_p.move_backgroundm.x = -0.2;
    move_p.move_backgroundm.y = 0;
    move_p.move_big_mm.x = -0.5;
    move_p.move_big_mm.y = 0;
    move_p.move_mountainm.x = -0.9;
    move_p.move_mountainm.y = 0;
    move_p.move_little_tm.x = -1.2;
    move_p.move_little_tm.y = 0;
    move_p.move_treesm.x = -1.5;
    move_p.move_treesm.y = 0;
    return (move_p);
}

struct move move_para(struct move move_p)
{
    move_p.move_background.x = -1;
    move_p.move_background.y = 0;
    move_p.move_big_m.x = -5;
    move_p.move_big_m.y = 0;
    move_p.move_mountain.x = -9;
    move_p.move_mountain.y = 0;
    move_p.move_little_t.x = -12;
    move_p.move_little_t.y = 0;
    move_p.move_trees.x = -15;
    move_p.move_trees.y = 0;
    move_p.move_rocket.x = -20;
    move_p.move_rocket.y = 0;
    move_p = move_para_two(move_p);
    return (move_p);
}
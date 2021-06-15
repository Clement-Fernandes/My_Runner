/*
** EPITECH PROJECT, 2020
** draw
** File description:
** my_runner
*/

#include "../include/functions.h"

void draw(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    sfRenderWindow_drawSprite(disp_w.window_w, disp_b.background_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_b.back_copy_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.big_mountain_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.big_copy_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.mountains_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.little_trees_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.trees_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.grass_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, run.run_s, NULL);
}

void draw_end(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p)
{
    sfRenderWindow_drawSprite(disp_w.window_w, disp_b.background_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_b.back_copy_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.big_mountain_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.big_copy_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.mountains_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.little_trees_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.trees_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, disp_p.grass_s, NULL);
    sfRenderWindow_drawSprite(disp_w.window_w, run.over_s, NULL);
}
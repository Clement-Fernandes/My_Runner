/*
** EPITECH PROJECT, 2020
** structdef.c
** File description:
** my_runner
*/

#include "../include/functions.h"

struct window disp_window(struct window disp_w)
{
    disp_w.video_mode.bitsPerPixel = 32;
    disp_w.video_mode.height = 1080;
    disp_w.video_mode.width = 1920;
    disp_w.play_button_t = (sfTexture_createFromFile
    ("images/other/play.png", NULL));
    disp_w.exit_button_t = (sfTexture_createFromFile
    ("images/other/exit.png", NULL));
    disp_w.play_button_s = sfSprite_create();
    disp_w.exit_button_s = sfSprite_create();
    disp_w.scale_b.x = 0.2;
    disp_w.scale_b.y = 0.2;
    disp_w.pos_p.x = 850;
    disp_w.pos_p.y = 450;
    disp_w.pos_e.x = 850;
    disp_w.pos_e.y = 550;
    disp_w.music = sfMusic_createFromFile("sounds/music.ogg");
    return (disp_w);
}

struct background disp_background(struct background disp_b)
{
    disp_b.background_t = (sfTexture_createFromFile
    ("images/parallax/background.png", NULL));
    disp_b.back_copy_t = (sfTexture_createFromFile
    ("images/parallax/background.png", NULL));
    disp_b.background_s = sfSprite_create();
    disp_b.back_copy_s = sfSprite_create();
    disp_b.scale.x = 7.1;
    disp_b.scale.y = 7.1;
    disp_b.rocket_t = (sfTexture_createFromFile
    ("images/other/rocket.png", NULL));
    disp_b.rocket_s = sfSprite_create();
    disp_b.scale_s.x = 2;
    disp_b.scale_s.y = 2;
    disp_b.pos_s.x = 2000;
    disp_b.pos_s.y = 790;
    return (disp_b);
}

struct luke game_over(struct luke run)
{
    run.over_t = (sfTexture_createFromFile
    ("images/other/game_over.png", NULL));
    run.over_s = sfSprite_create();
    run.pos_g.x = 630;
    run.pos_g.y = 300;
    run.scale_g.x = 5;
    run.scale_g.y = 5;
    return (run);
}

struct luke disp_run(struct luke run)
{
    run.run_t = (sfTexture_createFromFile
    ("images/character/line2.png", NULL));
    run.run_s = sfSprite_create();
    run.scale.x = 2;
    run.scale.y = 2;
    run.rect.top = 0;
    run.rect.left = 2;
    run.rect.width = 50;
    run.rect.height = 84;
    run.rect_menu.top = 0;
    run.rect_menu.left = 6;
    run.rect_menu.width = 50;
    run.rect_menu.height = 84;
    run.pos.x = 500;
    run.pos.y = 765;
    run = game_over(run);
    return (run);
}
/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** my_runner
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <stdlib.h>
#include <time.h>
#include <SFML/Audio.h>
#include <SFML/Network.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>

struct window disp_window(struct window disp_w);
struct background disp_background(struct background disp_b);
struct luke disp_run(struct luke run);
struct parallax disp_para(struct parallax disp_p);
struct parallax create_sprite(struct parallax disp_p);
struct move move_para(struct move move_p);
struct move move_para_two(struct move move_p);
struct menu buttons(struct menu menu_b);
struct luke game_over(struct luke run);

struct window {
    sfRenderWindow *window_w;
    sfEvent event;
    sfVideoMode video_mode;
    sfTexture *play_button_t;
    sfSprite *play_button_s;
    sfTexture *exit_button_t;
    sfSprite *exit_button_s;
    sfVector2f scale_b;
    sfVector2f pos_p;
    sfVector2f pos_e;
    sfMusic *music;
};

struct background {
    sfTexture *background_t;
    sfSprite *background_s;
    sfTexture *back_copy_t;
    sfSprite *back_copy_s;
    sfVector2f scale;
    sfTexture *rocket_t;
    sfSprite *rocket_s;
    sfVector2f scale_s;
    sfVector2f pos_s;
};

struct luke {
    sfTexture *run_t;
    sfSprite *run_s;
    sfTexture *over_t;
    sfSprite *over_s;
    sfVector2f scale;
    sfIntRect rect;
    sfIntRect rect_menu;
    sfVector2f pos;
    sfVector2f pos_g;
    sfVector2f scale_g;
};

struct parallax {
    sfTexture *big_mountain_t;
    sfSprite *big_mountain_s;
    sfTexture *big_copy_t;
    sfSprite *big_copy_s;
    sfTexture *little_trees_t;
    sfSprite *little_trees_s;
    sfTexture *mountains_t;
    sfSprite *mountains_s;
    sfTexture *trees_t;
    sfSprite *trees_s;
    sfTexture *grass_t;
    sfSprite *grass_s;
    sfVector2f scale;
    sfVector2f scale_big;
    sfVector2f pos;
    sfVector2f pos_copy;
    sfVector2f pos_up;
    sfVector2f pos_up_copy;
    sfVector2f pos_grass;
};

struct move {
    sfVector2f move_big_m;
    sfVector2f move_little_t;
    sfVector2f move_mountain;
    sfVector2f move_trees;
    sfVector2f move_grass;
    sfVector2f move_background;
    sfVector2f move_rocket;
    sfVector2f move_big_mm;
    sfVector2f move_little_tm;
    sfVector2f move_mountainm;
    sfVector2f move_treesm;
    sfVector2f move_grassm;
    sfVector2f move_backgroundm;
};
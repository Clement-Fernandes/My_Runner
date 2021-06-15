/*
** EPITECH PROJECT, 2020
** functions
** File description:
** functions
*/

#ifndef my_runner
#define my_runner

#include "struct.h"

void my_putchar(char c);
int my_putstr(char const *str);
int main(int ac, char **av);
void help(int argc, char **argv);
struct luke analyse_events(struct window *disp_w, struct luke *run,
struct background *disp_b, struct parallax *disp_p);
void draw(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
void destroy(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p);
void destroy_player_and_back(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p);
void destroy_parallax(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p);
int scale(struct background disp_b, struct luke run, struct parallax disp_p);
int pos(struct background disp_b, struct luke run, struct parallax disp_p);
int texture(struct background disp_b, struct luke run, struct parallax disp_p);
void move_rect(struct luke *run, int offset, int max_value);
void jump_rect(struct luke *run, int offset, int max_value);
int all(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
int clocks(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
int move(struct move move_p, struct parallax disp_p, struct background disp_b);
int replace(struct move move_p, struct parallax disp_p,
struct background disp_b);
int rep_trees_and_back(struct move move_p,
struct parallax disp_p, struct background disp_b);
int rep_mount_and_grass(struct move move_p,
struct parallax disp_p, struct background disp_b);
struct luke jump(struct luke *run, int value);
void jump_next(struct move *move_p, struct background *disp_b,
struct parallax *disp_p);
void jump_end(struct window *disp_w, struct luke *run,
struct background *disp_b, struct parallax *disp_p);
int game(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p);
void menu(struct window disp_w,
struct background disp_b, struct luke run, struct parallax disp_p);
int analyse_menu(struct window disp_w, struct luke run,
struct background disp_b, struct parallax disp_p);
int clock_menu(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
int alll(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
int move_menu(struct move move_p, struct parallax disp_p,
struct background disp_b);
void move_char(struct luke *run, int offset, int max_value);
int scale_and_pos(struct background disp_b, struct luke run,
struct parallax disp_p);
int pos_buttons(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
int buttons_sp(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
int analyse_event(struct window disp_w, struct luke run,
struct background disp_b, struct parallax disp_p);
int end(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);
void draw_end(struct window disp_w, struct background disp_b,
struct luke run, struct parallax disp_p);

#endif /* !my_runner */
/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** my_runner
*/

#include "../include/functions.h"

int main(int ac, char **av)
{
    struct window disp_w = disp_window(disp_w);
    struct background disp_b = disp_background(disp_b);
    struct luke run = disp_run(run);
    struct parallax disp_p = disp_para(disp_p);

    help(ac, av);
    if (ac == 2 && av[1][1] == 'i') {
        disp_w.window_w = sfRenderWindow_create(disp_w.video_mode, "MY_RUNNER",
        sfClose | sfResize, NULL);
        menu(disp_w, disp_b, run, disp_p);
        destroy(disp_w, disp_b, run, disp_p);
        return (0);
    }
}
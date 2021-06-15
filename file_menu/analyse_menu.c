/*
** EPITECH PROJECT, 2021
** analyse_menu
** File description:
** my_runner
*/

#include "../include/functions.h"

int analyse_menu(struct window disp_w, struct luke run,
struct background disp_b, struct parallax disp_p)
{
    sfVector2i mouseclick = sfMouse_getPositionRenderWindow(disp_w.window_w);
    sfVector2f exit_b = sfSprite_getPosition(disp_w.exit_button_s);
    sfVector2f play_b = sfSprite_getPosition(disp_w.play_button_s);

    while (sfRenderWindow_pollEvent(disp_w.window_w, &disp_w.event)) {
        if (disp_w.event.type == sfEvtClosed)
            sfRenderWindow_close(disp_w.window_w);
        if (disp_w.event.type == sfEvtMouseButtonPressed) {
            if (mouseclick.x > play_b.x && mouseclick.y > play_b.y &&
                mouseclick.x < play_b.x + 200 && mouseclick.y < play_b.y + 62) {
                sfRenderWindow_clear(disp_w.window_w, sfBlack);
                game(disp_w, disp_b, run, disp_p);
            }
            if (mouseclick.x > exit_b.x && mouseclick.y > exit_b.y &&
                mouseclick.x < exit_b.x + 200 && mouseclick.y < exit_b.y + 62)
                sfRenderWindow_close(disp_w.window_w);
        }
    }
    return (0);
}

/*
** EPITECH PROJECT, 2021
** move_char
** File description:
** my_runner
*/

#include "../include/functions.h"

void move_char(struct luke *run, int offset, int max_value)
{
    run->rect_menu.left = run->rect_menu.left + offset;
    if (run->rect_menu.left >= max_value)
        run->rect_menu.left = 6;
}
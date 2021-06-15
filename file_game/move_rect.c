/*
** EPITECH PROJECT, 2020
** move_rect.c
** File description:
** my_hunter
*/

#include "../include/functions.h"

void move_rect(struct luke *run, int offset, int max_value)
{
    run->rect.left = run->rect.left + offset;
    if (run->rect.left >= max_value)
        run->rect.left = 312;
}
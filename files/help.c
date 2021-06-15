/*
** EPITECH PROJECT, 2020
** help.c
** File description:
** my_runner
*/

#include "../include/functions.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int e = 0;
    while (str[e] != '\0'){
        my_putchar(str[e]);
        e++;
    }
    return (0);
}

void help(int argc, char **argv)
{
    if (argc == 1) {
        my_putstr("./my_runner: bad arguments: 0 given but 1 is required\n");
        my_putstr("retry with -h\n");
    }
    if (argc == 2 && argv[1][1] == 'h') {
        my_putstr("Finite runner created with CSFML.\n\n");
        my_putstr("USAGE\n");
        my_putstr("  ./my_runner -i\n\n\n");
        my_putstr("OPTIONS\n");
        my_putstr("  -h\t\tprint the usage and quit.\n");
        my_putstr("  -i\t\tplay the infinit game.\n\n");
        my_putstr("USER INTERACTIONS\n  SPACE_KEY\tjump.\n\n");
    }
}
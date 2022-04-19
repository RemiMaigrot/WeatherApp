/*
** EPITECH PROJECT, 2021
** DISPLAY
** File description:
** BSQ
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "../include/my.h"

int return_i_x(char *str);

void display_buffer(char *buffer, int size, int i_first)
{
    write(1, &buffer[i_first], size - i_first);
}

void display(int **tab, char *buffer, int i_first, int size)
{
    int i = i_first;
    int y = 0;
    int x = 0;

    while (buffer[i] != '\0') {
        if (tab[y][x] == -9)
            buffer[i] = 'x';
        x++;
        if (buffer[i] == '\n') {
            y++;
            x = 0;
        }
        i++;
    }
    display_buffer(buffer, size, i_first);
}

/*
** EPITECH PROJECT, 2021
** ERRORS MANAGE
** File description:
** MY BSQ
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "../include/my.h"

int calcul_malloc_x(char *str, int i_first);

int goog_char(char *buffer, int i_first)
{
    int i = 0;

    while (buffer[i] != '\n' && i_first > 0) {
        if (buffer[i] < 0 && buffer[i] > 9)
            return (84);
        i++;
    }
    i = i_first;
    while (buffer[i] != '\0') {
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n')
            return (84);
        i++;
    }
    return (0);
}

int good_lines(char *buffer, int i_first, int nb)
{
    int nb_lines = 0;

    while (buffer[i_first] != '\0') {
        if (buffer[i_first] == '\n') {
            nb_lines++;
        }
        i_first++;
    }
    if (nb != nb_lines)
        return (84);
    return (0);
}

int lines_correct(char *buffer, int i_first)
{
    int nb_char_first = calcul_malloc_x(buffer, i_first);
    int nb_char_line = 0;
    int i = nb_char_first + i_first + 1;

    while (buffer[i] != '\0') {
        while (buffer[i] != '\n') {
            i++;
            nb_char_line++;
        }
        if (nb_char_line != nb_char_first)
            return (84);
        i++;
        nb_char_line = 0;
    }
    return (0);
}

int manage_buffer(char *buffer, int i_first)
{
    int nb = 0;

    if (lines_correct(buffer, i_first) == 84)
        return (84);
    nb = my_getnbr(buffer);
    if (goog_char(buffer, i_first) == 84)
        return (84);
    if (i_first > 0) {
        if (good_lines(buffer, i_first, nb) == 84)
            return (84);
    }
    return (0);
}

int manage_errors(int argc, char **argv, int fd, int read_d)
{
    if (argc != 2) {
        write(2, "Bad lenght or arguments", 23);
        return (84);
    }
    if (fd == -1)
        return (84);
    if (read_d == 0 || read_d == -1)
        return (84);
    return (0);
}

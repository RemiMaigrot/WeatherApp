/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** BSQ
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "../include/my.h"

int **create_tab(char *str, int i_first);
int manage_errors(int argc, char **argv, int fd, int read_d);
void replace(char *str, int **tab);
int return_i_x(char *str);
int manage_buffer(char *buffer, int i_first);
int goog_char(char *buffer, int i_first);
int good_lines(char *buffer, int i_first, int nb);
int lines_correct(char *buffer, int i_first);
void display(int **tab, char *buffer, int i_first, int size);
void display_buffer(char *buffer, int size, int i_first);

int remove_nb(char *str)
{
    int i = 0;

    while (str[i] != '.' && str[i] != 'o')
        i++;
    return (i);
}

void step_tab(int **tab, char *buffer, int i_first, int size)
{
    tab = create_tab(buffer, i_first);
    replace(buffer, tab);
    display(tab, buffer, i_first, size);
    free(buffer);
    free(tab);
}

int main(int argc, char **argv)
{
    struct stat st;
    int fd = 0;
    char *buffer = NULL;
    int read_d = 0;
    int **tab;
    int i_first = 0;

    fd = open(argv[1], O_RDONLY);
    stat(argv[1], &st);
    buffer = malloc(st.st_size + 1);
    read_d = read(fd, buffer, st.st_size);
    if (manage_errors(argc, argv, fd, read_d) == 84)
        return (84);
    i_first = remove_nb(buffer);
    if (manage_buffer(buffer, i_first) == 84) {
        return (84);
    }
    step_tab(tab, buffer, i_first, st.st_size);
    close(fd);
    return (0);
}

/*
** EPITECH PROJECT, 2021
** manage tab
** File description:
** MY BSQ
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int **put_algo(int **tab, int end_x);

int calcul_malloc_y(char *str, int i_first)
{
    int result = 0;
    int i = i_first;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            result++;
        i++;
    }
    return (result + 1);
}

int calcul_malloc_x(char *str, int i_first)
{
    int result = 0;
    int i = i_first;

    while (str[i] != '\n') {
        result++;
        i++;
    }
    return (result);
}

void incre1(int *i_y, int *i_x, int *i_str)
{
    *i_y = *i_y + 1;
    *i_x = 0;
    *i_str = *i_str + 1;
}

void incre2(int *i_x, int *i_str)
{
    *i_str = *i_str + 1;
    *i_x = *i_x + 1;
}

int **create_tab(char *str, int i_first)
{
    int **tab;
    int y_malloc = calcul_malloc_y(str, i_first);
    int x_malloc = calcul_malloc_x(str, i_first);
    int i_str = i_first;
    int i_y = 0;
    int i_x = 0;

    tab = malloc(sizeof(int *) * (y_malloc + 1));
    while (i_y < y_malloc - 1) {
        tab[i_y] = malloc(sizeof(int) * x_malloc);
        while (str[i_str] != '\n' && str[i_str] != '\0') {
            if (str[i_str] == '.')
                tab[i_y][i_x] = 1;
            if (str[i_str] == 'o')
                tab[i_y][i_x] = 0;
            incre2(&i_x, &i_str);
        }
        incre1(&i_y, &i_x, &i_str);
    }
    return (put_algo(tab, x_malloc));
}

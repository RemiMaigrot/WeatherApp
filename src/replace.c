/*
** EPITECH PROJECT, 2021
** REPLACE FINISHINM
** File description:
** MY BSQ
*/

#include <stdio.h>
#include <stdlib.h>

int *search_max(int **tab, int i_x, int i_y)
{
    int *tab_values;
    int i_xx = i_x - 1;
    int i_yy = i_y - 1;
    int max = 0;

    tab_values = malloc(sizeof(int) * 3);
    while (i_yy >= 0) {
        while (i_xx >= 0) {
            if (tab[i_yy][i_xx] >= max) {
                max = tab[i_yy][i_xx];
                tab_values[0] = i_xx;
                tab_values[1] = i_yy;
                tab_values[2] = max;
            }
            i_xx--;
        }
        i_xx = i_x - 1;
        i_yy--;
    }
    return (tab_values);
    free(tab_values);
}

int return_i_x(char *str)
{
    int result = 0;
    int i = 0;

    while (str[i] != '.' && str[i] != 'o')
        i++;
    while (str[i] != '\n') {
        result++;
        i++;
    }
    return (result);
}

int return_i_y(int **tab)
{
    int result = 0;

    while (tab[result] != NULL)
        result++;
    return (result);
}

void replace(char *str, int **tab)
{
    int *coord_max = search_max(tab, return_i_x(str), return_i_y(tab));
    int max_x = coord_max[0];
    int max_y = coord_max[1];
    int max = coord_max[2];
    int i_y = max_y;
    int i_x = max_x;
    int x = 1;
    int y = 1;

    while (y <= max) {
        while (x <= max) {
            tab[max_y + 1 - y][max_x + 1 - x] = -9;
            x++;
        }
        y++;
        x = 1;
    }
    free(coord_max);
}

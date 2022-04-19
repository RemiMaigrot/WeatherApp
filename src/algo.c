/*
** EPITECH PROJECT, 2021
** algo
** File description:
** MY BSQ
*/

#include <stdio.h>
#include <stdlib.h>

int return_min(int n1, int n2, int n3)
{
    int result = n1;

    if (n2 < result)
        result = n2;
    if (n3 < result)
        result = n3;
    return (result);
}

void put_algo2(int **tab, int i_y, int i_x)
{
    if (tab[i_y][i_x] == 1)
        tab[i_y][i_x] = tab[i_y][i_x] + return_min(tab[i_y][i_x - 1],
        tab[i_y - 1][i_x - 1], tab[i_y - 1][i_x]);
}

int **put_algo(int **tab, int end_x)
{
    int i_y = 1;
    int i_x = 1;

    while (tab[i_y] != NULL) {
        while (i_x < end_x) {
            put_algo2(tab, i_y, i_x);
            i_x++;
        }
        i_y++;
        i_x = 1;
    }
    return (tab);
}

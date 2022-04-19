/*
** EPITECH PROJECT, 2021
** MY_GETNBR
** File description:
** lzlzlzlz
*/

#include <stddef.h>

int my_getnbr(char const *str)
{
    int result = 0;
    int is_negatif = 1;
    int i = 0;

    if (str == NULL)
        return 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            is_negatif = is_negatif * (-1);
        i = i + 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i = i + 1;
    }
    if (result > 2147483647 || result < -2147483648)
        return (0);
    return (result * is_negatif);
}

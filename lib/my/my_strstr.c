/*
** EPITECH PROJECT, 2021
** MY_STRSTR
** File description:
** lalalal an bas laa
*/

#include <stddef.h>

static int str_len1(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len = len + 1;
    }
    return (len);
}

char *my_strstr(char *str, char const *to_find)
{
    int i_str = 0;
    int i_find = 0;
    int x = 0;
    int result = 0;

    while (str[i_str] != '\0') {
        x = i_str;
        while (to_find[i_find] != '\0' && str[i_str] == to_find[i_find]) {
            i_str = i_str + 1;
            i_find = i_find + 1;
        }
        result = i_str - i_find;
        if (str_len1(to_find) == i_find) {
            return (result + str);
        }
        i_find = 0;
        i_str = x + 1;
    }
    return (NULL);
}

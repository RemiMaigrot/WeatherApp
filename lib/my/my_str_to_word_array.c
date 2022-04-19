/*
** EPITECH PROJECT, 2021
** MY_STR_TO_WORD_ARRAY
** File description:
** lalalalalalalalalala
*/

#include <stdlib.h>

int my_strlen(char const *str);
int my_strncpy(char *dest, char const *src, int n);

static int alpha_num(char c)
{
    if (c == '.' || c == 'o') {
        return (1);
    } else if (c == '\n') {
        return (0);
    }
}

static int count_words(char const *str)
{
    int len = 0;
    int i = 1;

    if (alpha_num(str[0]) == 1) {
        len = len + 1;
    }
    while (i <= my_strlen(str) - 1) {
        if (alpha_num(str[i + 1]) == 1 && alpha_num(str[i]) == 0) {
            len = len + 1;
        }
        i = i + 1;
    }
    return (len);
}

static int len_mot(char const *str, int n)
{
    int len = 0;

    while (alpha_num(str[n]) != 0) {
        n = n + 1;
        len = len + 1;
    }
    return (len);
}

static int len_false(char const *str, int n)
{
    int len = 0;

    while (alpha_num(str[n]) != 1) {
        n = n + 1;
        len = len + 1;
    }
    return (len);
}

char **my_str_to_word_array(char const *str)
{
    char **result;
    int mot_len = 0;
    int mot = 0;
    int len = count_words(str);

    result = malloc(sizeof(char *) * (len + 1));
    while (mot <= len) {
        if (alpha_num(str[0]) == 1) {
            mot_len = len_mot(str, 0);
            result[mot] = malloc(sizeof(char) * (mot_len + 1));
            my_strncpy(result[mot], str, mot_len);
            result[mot][mot_len + 1] = '\0';
            str = str + mot_len;
        } else {
            str = str + len_false(str, 0);
            mot = mot + 1;
        }
    }
    result[mot] = NULL;
    return result;
}

/*
** EPITECH PROJECT, 2021
** MY_REVSTR
** File description:
** lalalalala
*/

static int my_lenstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int i_temp = 1;
    int i_changement = 0;
    char result[my_lenstr(str)];
    int i = 0;

    while (str[i] != '\0') {
        result[i] = str[i];
        i = i + 1;
    }
    while (i_changement != my_lenstr(str) + 1) {
        result[i_changement] = str[my_lenstr(str) - i_temp];
        i_temp = i_temp + 1;
        i_changement = i_changement + 1;
    }
    i = 0;
    while (str[i] != '\0') {
        str[i] = result[i];
        i = i + 1;
    }
    return (str);
}

/*
** EPITECH PROJECT, 2021
** MY_STR_ISPRINTABLE
** File description:
** lallalalalala
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 0 && str[i] <= 31 || str[i] == 127) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}

/*
** EPITECH PROJECT, 2021
** MY_STRUCASE
** File description:
** lalalal e
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i = i + 1;
    }
    return str;
}

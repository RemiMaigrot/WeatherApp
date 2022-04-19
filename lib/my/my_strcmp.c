/*
** EPITECH PROJECT, 2021
** MY_STRCMP
** File description:
** lalalala en bas laaa
*/

int my_strcmp(char const *s1, char const *s2)
{
    int nb = 0;
    char break_while = 'N';

    while (break_while == 'N') {
        if (s1[nb] < s2[nb]) {
            return (-1);
        } else {
            return (1);
        }
        if (s1[nb] == '\0') {
            return (0);
        }
        nb = nb + 1;
    }
}

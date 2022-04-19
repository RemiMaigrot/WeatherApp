/*
** EPITECH PROJECT, 2021
** MY_STRNCMP
** File description:
** alalla
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int nb = 0;

    while (nb < n) {
        if (s1[nb] < s2[nb]) {
            return (-1);
        } else {
            return (1);
        }
        if (nb == (n - 1)) {
            return (0);
        }
        nb = nb + 1;
    }
}

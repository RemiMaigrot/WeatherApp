/*
** EPITECH PROJECT, 2021
** MY_STRNCPY
** File description:
** lalalalla
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int nb = 0;

    while (nb < n && src[nb] != '\0') {
        dest[nb] = src[nb];
        nb = nb + 1;
    }
    dest[nb] = '\0';
    return dest;
}

/*
** EPITECH PROJECT, 2021
** MY_STRCAPITALIZE
** File description:
** lalalalalala
*/

char *my_strlowcase(char *str);

static int str_len2(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

static void condition_str(int i, char *str)
{
    if (str[i + 1] >= 97 && str[i + 1] <= 122) {
        str[i + 1] = str[i + 1] - 32;
    }
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    str = my_strlowcase(str);
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    while (i <= str_len2(str) - 1) {
        if (str[i] == 32 || str[i] >= 33 && str[i] <= 46) {
            condition_str(i, str);
        }
        i = i + 1;
    }
    return (str);
}

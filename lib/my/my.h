/*
** EPITECH PROJECT, 2021
** MY
** File description:
** lalalala
*/

#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H_
    #define MY_H_

    void incr_verif_base(char *av1, char *av2, int *i_av2, int *result);
    void incr_ver_base_s(char *av_solo, int *i_av, int *i_solo, int *result);
    int my_atoi(char const *str);
    int check_error(int n1, char sign, int n2, int result);
    int verif_base_solo(char *av_solo);
    int error_main(char *av1, char *av2, char *expr);
    int desc(int ac, char **av);
    void convert_base(char *calcul, char *numbers);
    void convert_base_sign(char *calcul, char *sign);
    void my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    char **my_str_to_word_array(char const *str);

#endif /* MY_HEADER */

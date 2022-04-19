/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_SQUARE_ROOT
** File description:
** lslsllsllsl
*/

int my_compute_square_root(int nb)
{
    int n_test;

    n_test = 1;
    if (nb <= 0 || nb > 2147483647) {
        return (0);
    }
    while ((n_test * n_test) != nb) {
        if (n_test == (nb / 2)) {
            return (0);
        } else {
            n_test = n_test + 1;
        }
    }
    return n_test;
}

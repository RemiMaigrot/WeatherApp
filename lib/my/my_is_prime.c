/*
** EPITECH PROJECT, 2021
** MY_IS_PRIME
** File description:
** lallallelfle
*/

void my_putchar(char c);

int my_is_prime(int nb)
{
    int test = 2;

    if (nb == 0 || nb == 1) {
        return (0);
    } else {
        while (test * test <= nb && nb % test != 0) {
            test = test + 1;
        }
        if (test * test > nb) {
            return (1);
        } else {
            return (0);
        }
    }
}

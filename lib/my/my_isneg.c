/*
** EPITECH PROJECT, 2021
** MY_ISNEG
** File description:
** No file there, just an epitech header example
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar(78);
    } else if (n >= 0) {
        my_putchar(80);
    }
    return (0);
}

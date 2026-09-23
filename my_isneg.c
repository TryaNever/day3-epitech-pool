/*
** EPITECH PROJECT, 2026
** Pool_day_3
** File description:
** check if is negative or positive
*/

int my_isneg(int number)
{
    if (number < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (1);
}

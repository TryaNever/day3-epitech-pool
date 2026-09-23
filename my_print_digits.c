/*
** EPITECH PROJECT, 2026
** Pool_day_3
** File description:
** write all numerique
*/

int my_print_digits(void)
{
    char integer;
    int i = 0;

    integer = '0';
    for (int i = 0; i < 10; i++) {
        my_putchar(integer);
        integer += 1;
    }
    return (1);
}

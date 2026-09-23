/*
** EPITECH PROJECT, 2026
** Pool_day_3
** File description:
** write reverse alphabet
*/

int my_print_revalpha(void)
{
    char letter;
    int i = 0;

    letter = 'z';
    for (int i = 0; i < 26; i++) {
        my_putchar(letter);
        letter -= 1;
    }
    return (1);
}

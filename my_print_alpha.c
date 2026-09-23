/*
** EPITECH PROJECT, 2026
** Pool_day_3
** File description:
** write alphabet
*/

int my_print_alpha(void)
{
    char letter;
    int i = 0;

    letter = 'a';
    for (int i = 0; i < 26; i++) {
        my_putchar(letter);
        letter += 1;
    }
    my_putchar('\n');
    return (1);
}

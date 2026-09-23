/*
** EPITECH PROJECT, 2026
** Pool_day_3
** File description:
** write three numeric with three char
*/
#include <unistd.h>
void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_multiple_var(char number1, char number2, char number3, char number4, int is_last)
{
    if (is_last)
    {
        my_putchar('\b');
        my_putchar('\b');
    }
    if (number1 == number3 && number2 == number4){
        return (0);
    }
    my_putchar(number4);
    my_putchar(number3);
    my_putchar(' ');
    my_putchar(number2);
    my_putchar(number1);
    my_putchar(',');
    my_putchar(' ');
    
    return (0);
}

int add_number(char *number1, char *number2, char *number3, char *number4)
{
    *number1 += 1;
    if (*number1 > '9'){
        *number1 = '0';
        *number2 += 1;
    }
    if (*number2 > '9'){
        *number2 = '0';
        *number3 += 1;
    }
    if (*number3 > '9'){
        *number3 = '0';
        *number4 += 1;
    }
    return (0);
}

int my_print_comb2(void)
{
    char number1 = '0';
    char number2 = '0';
    char number3 = '0';
    char number4 = '0';
    int is_last_number = 0;

    for (int i = 0; i <= 9999; i++) {
        if (i == 9999){
            is_last_number = 1;
        }
        my_print_multiple_var(number1, number2, number3, number4, is_last_number);
        add_number(&number1, &number2, &number3, &number4);
    }
    return (1);
}

int main(void)
{
    my_print_comb2();
    return (1);
}

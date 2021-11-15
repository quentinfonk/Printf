/*
** EPITECH PROJECT, 2019
** my_putnbruns
** File description:
** my_putnbruns
*/

void my_putchar(char c);

int my_putnbruns(unsigned int a)
{
    int i = 0;
    unsigned int s;

    s = a;
    if (a >= 10) {
        s = a%10;
        a = a / 10;
        my_putnbruns(a);
        my_putchar(s + 48);
    }
    else
        my_putchar(s + 48);
    return (0);
}

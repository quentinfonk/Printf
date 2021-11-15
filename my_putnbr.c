/*
** EPITECH PROJECT, 2019
** my_putnbr
** File description:
** my_putnbr
*/

void my_putchar(char c);

int puissa(int a)
{
    int t = 0;

    if (a < 0) {
        a = a * (-1);
        t++;
        my_putchar('-');
    }
        return (a);
}

int puiss(int a)
{
    int t;
    
    t = 1;
    while (a > 0) {
        a = a - 1;
        t = t * 10;
    }
    return (t);
}

int my_putnbr(int a)
{
    int i = 0;
    int b = 0;
    int o = 0;
    int s = 0;

    a = puissa(a);
    s = a;
    for (; a != 0; i++)
        a = a / 10;
    for (; s != 0; i--) {
        b = puiss(i);
        b = b / 10;
        a--;
        o = s%b;
        s = s/b;
        my_putchar(s + 48);
        s = o;
    }
    return (0);
}

/*
** EPITECH PROJECT, 2019
** printint
** File description:
** printint
*/

int printint(int i, int d, char *format)
{
    my_putchar('d');
    if (format[i+1] != '%' && format[i+1] != '\0') {
        my_putchar('\n');
        i += 1;
    }
    i += 2;
    return (i);
}

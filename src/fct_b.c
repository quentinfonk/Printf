/*
** EPITECH PROJECT, 2019
** fct_b
** File description:
** fct_b
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

char *bina(int i, char *str)
{
    int a = 0;

    for (; i != 0; a++) {
        str[a] = (i%2) + '0';
        i = i / 2;
    }
    str[a] = '\0';
    return (str);
}

int fct_b(va_list ap)
{
    int i = va_arg(ap, int);
    char *str;
    int o = 0;
    int c = i;

    if (i == 0) {
        my_putchar('0');
        return (0);
    }
    for (;i != 0; o++)
        i = i / 2;
    i = c;
    str = malloc(sizeof(char) * (o + 1));
    if (str == NULL)
        return (84);
    str = bina(i, str);
    my_revstr(str);
    my_putstr(str);
    return (0);
}

/*
** EPITECH PROJECT, 2019
** fct_xb
** File description:
** fct_xb
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int fct_xb(va_list ap)
{
    int i = va_arg(ap, int);
    char *str;
    int a = 0;
    char *base = "0123456789ABCDEF";
    int c = i;
    int o = 0;

    for (;i != 0; o++)
        i = i / 16;
    i = c;
    str = malloc(sizeof(char) * (o + 1));
    if (str == NULL)
        return (84);
    for (; i != 0; a++) {
        str[a] = base[i%16];
        i = i / 16;
    }
    str[a] = '\0';
    my_revstr(str);
    my_putstr(str);
    return (0);
}

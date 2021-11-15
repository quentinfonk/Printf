/*
** EPITECH PROJECT, 2019
** fct_p
** File description:
** fct_p
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int fct_p(va_list ap)
{
    long int i = va_arg(ap, long int);
    char *str;
    int a = 0;
    char *base = "0123456789abcdef";
    int o = 0;
    long int c = i;

    for (;i != 0; o++)
        i = i / 2;
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
    my_putstr("0x");
    my_putstr(str);
    return (0);
}

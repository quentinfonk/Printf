/*
** EPITECH PROJECT, 2019
** fct_o
** File description:
** fct_o
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int fct_o(va_list ap)
{
    int i = va_arg(ap, int);
    char *str;
    int a = 0;
    int o = 0;
    int c = i;

    for (;i != 0; o++)
        i = i / 8;
    i = c;
    str = malloc(sizeof(char) * (o + 1));
    if (str == NULL)
        return (84);
    for (; i != 0; a++) {
        str[a] = (i%8) + '0';
        i = i / 8;
    }
    str[a] = '\0';
    my_revstr(str);
    my_putstr(str);
    return (0);
}

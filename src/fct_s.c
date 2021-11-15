/*
** EPITECH PROJECT, 2019
** fct_s
** File description:
** fct_s
*/

#include <stdarg.h>
#include "my.h"

int fct_s(va_list ap)
{
    char *str = va_arg(ap, char *);

    my_putstr(str);
    return (0);
}

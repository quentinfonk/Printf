/*
** EPITECH PROJECT, 2019
** fct_c
** File description:
** fct_c
*/

#include <stdarg.h>
#include "my.h"

int fct_c(va_list ap)
{
    char c = (char) va_arg(ap, int);

    my_putchar(c);
    return (0);
}

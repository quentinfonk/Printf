/*
** EPITECH PROJECT, 2019
** fct_d
** File description:
** fct_d
*/

#include <stdarg.h>
#include "my.h"

int fct_d(va_list ap)
{
    int d = va_arg(ap, int);
    
    my_putnbr(d);
    return (0);
}

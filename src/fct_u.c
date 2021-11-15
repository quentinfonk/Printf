/*
** EPITECH PROJECT, 2019
** fct_u
** File description:
** fct_u
*/

#include <stdarg.h>
#include "my.h"

int fct_u(va_list ap)
{
    int d = va_arg(ap, int);
    
    my_putnbruns(d);
    return (0);
}

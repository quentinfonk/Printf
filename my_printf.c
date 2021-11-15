/*
** EPITECH PROJECT, 2019
** printf
** File description:
** printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int pfirst(char format, char *tab)
{
    int e = 0;

    for (; tab[e] != format; e++)
        if (tab[e] == '\0')
            return (84);
    return (e);
}

int my_printf(char *format, ...)
{
    va_list ap;
    char *tab = "sdicoxXbu%p";
    int (*fct[]) (va_list) = {fct_s, fct_d, fct_d,
        fct_c, fct_o, fct_x,
        fct_xb, fct_b, fct_u, fct_pr, fct_p};
    int i = 0;
    int e = 0;
    
    va_start(ap, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            e = pfirst(format[i], tab);
            if (e == 84)
                return (84);
            fct[e](ap);
        } else
            my_putchar(format[i]);
    }
    return (0);
}

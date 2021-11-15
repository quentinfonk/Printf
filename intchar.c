/*
** EPITECH PROJECT, 2019
** intchar
** File description:
** intchar
*/

#include <stdlib.h>

int puissan(int a)
{
    int t;

    t = 1;
    while (a > 0) {
        a = a - 1;
        t = t * 10;
    }
    t /= 10;
    return (t);
}

int dive(int a)
{
    int i = 0;

    for (; a != 0; i++)
        a = a / 10;
    return (i);
}

char *intchar(int a)
{
    int i = 0;
    char *str;
    int b = -1;

    i = dive(a);
    str = malloc(sizeof(char) * (i + 1));
    if (str == NULL)
        return NULL;
    for (; i != 0; i--) {
        b++;
        str[b] = (a / puissan(i) + '0');
        a = a % puissan(i);
    }
    str[b+1] = '\0';
    return (str);
}

/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
int my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int a);
char *intchar(int a);
int fct_b(va_list ap);
int fct_x(va_list ap);
int fct_xb(va_list ap);
int fct_o(va_list ap);
int fct_c(va_list ap);
int fct_d(va_list ap);
int fct_s(va_list ap);
int fct_f(va_list ap);
int fct_u(va_list ap);
int fct_pr(va_list ap);
int my_putnbruns(unsigned int a);
void redirect_all_std(void);
int fct_p(va_list ap);
int fct_sb(va_list ap);
int fct_por(int i, va_list ap, char *format);

#endif

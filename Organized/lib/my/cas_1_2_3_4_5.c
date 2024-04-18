/*
** EPITECH PROJECT, 2023
** case 1 2 3 4
** File description:
** case 1 2 3 4
*/

#include <stdarg.h>
#include "my.h"

int cas5(char form, va_list ap)
{
    switch (form) {
    case 'F':
    case 'f':
        my_put_float(va_arg(ap, double));
        break;
    case 'e':
        my_put_sc_nbr_min(va_arg(ap, double));
        break;
    case 'E':
        my_put_sc_nbr_maj(va_arg(ap, double));
        break;
    }
    return 0;
}

int cas4(char form, va_list ap)
{
    int x;
    int X;

    switch (form) {
    case 'x':
        x = va_arg(ap, int);
        my_puthexa_min(x);
        break;
    case 'X':
        X = va_arg(ap, int);
        my_puthexa_maj(X);
        break;
    case 'p':
        my_putadresse(va_arg(ap, long int));
        break;
    default:
        cas5(form, ap);
    }
    return 0;
}

int cas3(char form, va_list ap)
{
    int u;
    int o;

    switch (form) {
    case 'u':
        u = va_arg(ap, int);
        my_put_unsigned_int(u);
        break;
    case '+':
        my_putchar('+');
        break;
    case 'o':
        o = va_arg(ap, int);
        my_putoctal(o);
        break;
    default:
        cas4(form, ap);
    }
    return 0;
}

int cas2(char form, va_list ap)
{
    int d;

    switch (form) {
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'd':
        d = va_arg(ap, int);
        my_put_nbr(d);
        break;
    case '%':
        my_putchar('%');
        break;
    default:
        cas3(form, ap);
    }
    return 0;
}

int cas1(char form, va_list ap)
{
    int i;
    char c;

    switch (form) {
    case 'i' :
        i = va_arg(ap, int);
        my_put_nbr(i);
        break;
    case 'c':
        c = va_arg(ap, int);
        my_putchar(c);
        break;
    default:
        cas2(form, ap);
    }
    return 0;
}

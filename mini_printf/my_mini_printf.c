/*
** EPITECH PROJECT, 2023
** my_mini_printf.c
** File description:
** my_mini_printf.c
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

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

int mini_printf(const char *format, ...)
{
    int i = 0;
    va_list ap;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            cas1(format[i + 1], ap);
            i += 2;
        } else {
            my_putchar(format[i]);
            i++;
        }
    }
    return 0;
}

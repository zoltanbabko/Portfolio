/*
** EPITECH PROJECT, 2023
** my_printf.c
** File description:
** C-POOL my_printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include <stdio.h>

char charlower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int detect_flag(char type, va_list ap)
{
    int len_arg = 0;

    if (type == '%')
        my_putchar('%');
    else {
        len_arg += (f_list[charlower(type) - 97])\
            (ap, type);
    }
    return (len_arg);
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int len_arg = 0;
    int count = 0;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            len_arg += detect_flag(format[i + 1], ap);
            i += 2;
        } else {
            my_putchar(format[i]);
            i++;
            count++;
        }
    }
    va_end(ap);
    count += len_arg;
    return (count);
}

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

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list ap;
    int len = 0;

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
    len += my_strlen(format);
    return (len);
}

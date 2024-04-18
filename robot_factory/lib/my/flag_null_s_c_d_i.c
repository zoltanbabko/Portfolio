/*
** EPITECH PROJECT, 2023
** FlagNull-s-c-d-i
** File description:
** FlagNull-s-c-d-i
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int flag_null(va_list ap, char type)
{
    return 0;
}

int flag_c(va_list ap, char type)
{
    char c;

    c = va_arg(ap, int);
    my_putchar(c);
    return (1);
}

int flag_s(va_list ap, char type)
{
    va_list ap2;
    int len_arg = 0;

    va_copy(ap2, ap);
    my_putstr(va_arg(ap, char *));
    len_arg += my_strlen(va_arg(ap2, char *));
    va_end(ap2);
    return (len_arg);
}

int flag_d(va_list ap, char type)
{
    int d;
    va_list ap2;

    d = va_arg(ap, int);
    my_put_nbr(d);
    va_end(ap2);
    return (my_nbrlen(d));
}

int flag_i(va_list ap, char type)
{
    int i;

    i = va_arg(ap, int);
    my_put_nbr(i);
    return (my_nbrlen(i));
}

/*
** EPITECH PROJECT, 2023
** Flag_u_o_x_e_f
** File description:
** flag_u_o_x_e_f
*/
#include <stdarg.h>
#include "my.h"
#include <stdio.h>

int flag_u(va_list ap, char type)
{
    int u = absolute_value(va_arg(ap, int));
    int len_arg = 0;

    my_put_nbr(u);
    len_arg = my_nbrlen(u);
    return (len_arg);
}

int flag_o(va_list ap, char type)
{
    char *o = my_int_to_oct(va_arg(ap, int));
    int len_arg = 0;

    my_putstr(o);
    len_arg = my_strlen(o);
    return (len_arg);
}

int flag_x(va_list ap, char type)
{
    char *x = my_int_to_hex(va_arg(ap, int));
    int len_arg = 0;

    if (type >= 'a' && type <= 'z')
        alphalower(x);
    my_putstr(x);
    len_arg = my_strlen(x);
    return (len_arg);
}

int flag_e(va_list ap, char type)
{
    double f = va_arg(ap, double);
    char *str = my_double_to_str(f);
    int i = 0;

    for (; str[i + 1] != '.'; i++)
        i++;
    my_putchar(str[0]);
    my_putchar('.');
    for (int y = 1; str[y] != '\0' && y < 8; y++) {
        if (str[y] == '.')
            y++;
        my_putchar(str[y]);
    }
    flag_capital_e(type);
    if (i < 10)
        my_putchar('0');
    my_put_nbr(i);
    return (my_strlen(str) + 2 + my_nbrlen(i));
}

void flag_capital_e(char type)
{
    if (type >= 'A' && type <= 'Z')
        my_putstr("E+");
    else
        my_putstr("e+");
}

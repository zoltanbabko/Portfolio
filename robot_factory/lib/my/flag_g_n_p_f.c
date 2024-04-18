/*
** EPITECH PROJECT, 2023
** my_printf.c
** File description:
** Flag_g_n_p
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *flag_g_f(double f, double f_int)
{
    char *str = malloc(sizeof(char) *(my_nbrlen(f_int) + 8));
    char temp;

    str = my_double_to_str(f);
    temp = str[7];
    str[7] = '\0';
    for (int i = my_strlen(str) - 1; i > 1; i--) {
        if (str[i] != '0' && temp >= '5') {
                str[i] = str[i] + 1;
                break;
        }
        if (str[i] != '0')
            break;
        temp = str[i];
        str[i] = '\0';
    }
    my_putstr(str);
    return (str);
}

int flag_g_e(double f)
{
    char *str = my_double_to_str(f);
    int i = 0;
    int y = 1;

    for (; str[i + 1] != '.'; i++)
        i++;
    my_printf("%c.", str[0]);
    for (; str[y] != '\0' && y < 6; y++) {
        if (str[y] == '.')
            y++;
        if (y == 5 && str[y + 1] >= '5')
            str[y] = str[y] + 1;
        my_putchar(str[y]);
    }
    my_putstr("e+");
    if (i < 10)
        my_putchar('0');
    my_put_nbr(i);
    return (y);
}

int flag_g(va_list ap, char type)
{
    double f;
    double f_int;
    char *str;

    f = va_arg(ap, double);
    f_int = (long long int)f;
    if (f_int < 100000) {
        return (my_strlen(flag_g_f(f, f_int)));
    } else
        return (flag_g_e(f) + 3);
}

int flag_p(va_list ap, char type)
{
    return 0;
}

int flag_f(va_list ap, char type)
{
    double f = va_arg(ap, double);
    char *str = my_double_to_str(f);
    int len_arg = 0;

    my_putstr(str);
    len_arg = my_strlen(str);
    return (len_arg);
}

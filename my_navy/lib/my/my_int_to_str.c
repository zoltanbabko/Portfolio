/*
** EPITECH PROJECT, 2024
** int to str
** File description:
** int to str
*/

#include "my.h"

void int_to_string(int num, char *str)
{
    int i = 0;
    int isneg = 0;

    if (num < 0) {
        isneg = 1;
        num = -num;
    }
    do {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    if (isneg != 0)
        str[i] = '-';
    int len = my_strlen(str);
    for (int j = 0; j < len / 2; j++) {
        char temp = str[j];
        str[j] = str[len - j - 1];
        str[len - j - 1] = temp;
    }
}
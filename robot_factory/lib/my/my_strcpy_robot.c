/*
** EPITECH PROJECT, 2024
** strcpy name comment
** File description:
** srtcpy name comment
*/

#include "op.h"
#include "my.h"

char *my_strcpy_name(char *dest, char const *src)
{
    int i;

    for (i = 0; i != PROG_NAME_LENGTH + 1; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_strcpy_comment(char *dest, char const *src)
{
    int i;

    for (i = 0; i != COMMENT_LENGTH + 1; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

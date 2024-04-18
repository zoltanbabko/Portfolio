/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** C-POOL Day06 Task06
*/

int my_strcmp(const char *str1, const char *str2)
{
    int len = 0;
    int len2 = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        len += (int)str1[i];
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        len2 += (int)str2[i];
    }
    return (len - len2);
}

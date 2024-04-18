/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** C-POOL Day06 Task06
*/

int my_strcmp(const char *str1, const char *str2)
{
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]){
            return 84;
        }
    }
    return 0;
}

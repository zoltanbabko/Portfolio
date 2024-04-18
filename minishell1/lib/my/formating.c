/*
** EPITECH PROJECT, 2024
** formating
** File description:
** formating
*/

#include "my.h"

void conditionb(char *p, char *q)
{
    while (*q) {
        *q = *(q + 1);
        q++;
    }
}

void retirer_tabulations(char *chaine)
{
    char *p = chaine;
    char *q;

    while (*p) {
        if (*p == '\t') {
            q = p;
            conditionb(p, q);
        } else {
            p++;
        }
    }
}

void retirer_espaces_debut_fin(char *chaine)
{
    int debut = 0;
    int fin = my_strlen(chaine);

    while (chaine[debut] == ' ') {
        debut++;
    }
    while (chaine[fin - 1] == ' ' || chaine[fin - 1] == '\n') {
        fin--;
    }
    for (int i = debut; i <= fin; i++) {
        chaine[i - debut] = chaine[i];
    }
    chaine[fin - debut + 1] = '\0';
}

void retirer_espaces_en_double(char *chaine)
{
    int i = 0;
    int j = 0;

    while (chaine[i]) {
        if (!(chaine[i] == ' ' && chaine[i + 1] == ' ')) {
            chaine[j] = chaine[i];
            j++;
        }
        i++;
    }
    chaine[j] = '\0';
}

void modifier_chaine(char *chaine)
{
    retirer_tabulations(chaine);
    retirer_espaces_debut_fin(chaine);
    retirer_espaces_en_double(chaine);
}

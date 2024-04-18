/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-robotfactory-robin.wipff
** File description:
** array_to_file.c
*/

#include "my.h"

int str_array_to_file(char *name_file, char **file, header_t header)
{
    int i = 0;
    FILE* fichier = 0;

    for (i = 0; name_file[i] != '.'; i++) {
    }
    name_file[i] = '\0';
    i = 0;
    name_file = my_strcat(name_file, ".cor");
    fichier = fopen(name_file, "w");
    fwrite(&header, sizeof(header_t), 1, fichier);
    fclose(fichier);
    free(file);
    return 0;
}

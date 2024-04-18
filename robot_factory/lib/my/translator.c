/*
** EPITECH PROJECT, 2023
** B-CPE-200-PAR-2-1-robotfactory-robin.wipff
** File description:
** translator.c
*/

#include "my.h"
#include "op.h"

int int_to_bytes(int nb)
{
    int_to_char nbr;

    nbr.nbr = nb;
    nb = nbr.str[0] << 24;
    nb += nbr.str[1] << 16;
    nb += nbr.str[2] << 8;
    nb += nbr.str[3];
    return nb;
}

char *trad_line_name_fct(char *file_line)
{
    char *trad_name = (char *)malloc(sizeof(char) * PROG_NAME_LENGTH + 1);
    int i = 0;
    int j = 0;

    for (i = 0; file_line[i] != '"'; i++) {
    }
    i++;
    for (i; file_line[i] != '"'; i++) {
        trad_name[j] = file_line[i];
        j++;
    }
    for (j; j < PROG_NAME_LENGTH + 1; j++) {
        trad_name[j] = '\0';
    }
    return trad_name;
}

char *trad_line_comment_fct(char *file_line)
{
    char *trad_comment = (char *)malloc(sizeof(char) * COMMENT_LENGTH + 1);
    int i = 0;
    int j = 0;

    for (i = 0; file_line[i] != '"'; i++) {
    }
    i++;
    for (i; file_line[i] != '"'; i++) {
        trad_comment[j] = file_line[i];
        j++;
    }
    for (j; j < COMMENT_LENGTH + 1; j++) {
        trad_comment[j] = '\0';
    }
    return trad_comment;
}

header_t translate(char **file, header_t head)
{
    char *trad_name = trad_line_name_fct(file[0]);
    char *trad_comment = trad_line_comment_fct(file[1]);
    int i = 0;
    int j = 0;

    head.magic = reverse_int(COREWAR_EXEC_MAGIC);
    my_strcpy_name(head.prog_name, trad_name);
    head.prog_size = reverse_int(REG_NUMBER + 6);
    my_strcpy_comment(head.comment, trad_comment);
    return head;
}

char **translate_body(char **body)
{
    return NULL;
}

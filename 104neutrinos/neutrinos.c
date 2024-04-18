/*
** EPITECH PROJECT, 2023
** neutrinos
** File description:
** neutrinos
*/

#include "my.h"

struct Valeurs affichage(char **argv, int n2, char new_value[], struct Valeurs stock)
{
    printf("    Number of values:\t%d\n", n2);
    printf("    Standard deviation:\t%.2f\n", calcul_sd(argv, n2));
    printf("    Arithmetic mean:\t%.2f\n", stock.v_a = (calcul_a(argv, n2, new_value, stock)));
    printf("    Root mean square:\t%.2f\n", calcul_rms(argv, n2, new_value, stock));
    printf("    Harmonic mean:\t%.2f\n", stock.v_h = (calcul_h(argv, n2, new_value, stock)));
    printf("\n");
    return stock;
}
  
int execution(char **argv, int n2)
{
    struct Valeurs stock;
    char new_value[100];
    int i = 0;

    stock.v_rms = atof(argv[2]);
    stock.v_sd = atof(argv[4]);
    stock.v_a = atof(argv[2]);
    stock.v_h = atof(argv[3]);
    while (new_value != "END\0") {
        printf("Enter next value: ");
        scanf("%s", new_value);
        if (new_value[0] == 'E' && new_value[1] == 'N' &&
            new_value[2] == 'D' && new_value[3] == '\0')
            return 0;
        while (new_value[i] != '\0') {
            if ((new_value[i] < '0' || new_value[i] > '9') && new_value[i] != '.')
                return 84;
            i++;
        }
        i = 0;
        n2++;
        stock = affichage(argv, n2, new_value, stock);
    }
    return 0;
}

int is_integer(float n, char **argv)
{
    int n2 = n;

    n -= n2;
    if (n != 0)
        return 84;
    return execution(argv, n2);
}

int start(char **argv)
{
    float n = atof(argv[1]);

    return is_integer(n, argv);
}

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc == 2) {
        if (argv[1][0] == '-')
            return flag_help(argv);
    }
    if (argc < 5 || argc > 5)
        return 84;
    while (i < argc) {
        while (argv[i][j] != '\0') {
            if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '.')
                return 84;
            j++;
        }
        i++;
        j = 0;
    }
    if (argc == 5)
        return start(argv);
}

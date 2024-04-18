/*
** EPITECH PROJECT, 2023
** flag_ls_l
** File description:
** flag_ls_l
*/

#include "my.h"

int print_all_files(const char *dirname)
{
    DIR *dir = opendir(dirname);
    struct dirent *entry;

    if (dir == NULL) {
        return 84;
    }
    entry = readdir(dir);
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            flag_ls_l(entry->d_name);
        }
        entry = readdir(dir);
    }
    closedir(dir);
    return 0;
}

void print_permissions(mode_t mode)
{
    char symbols[] = "rwx";
    char permissions[10];

    for (int i = 0; i < 9; ++i) {
        permissions[i] = (mode & (1 << (8 - i))) ? symbols[i % 3] : '-';
    }
    permissions[9] = '\0';
    my_printf("%s", permissions);
    my_printf(". ");
}

int permissions(char *filename, struct stat *sb)
{
    if (lstat(filename, sb) == -1) {
        return 84;
    }
    switch (sb->st_mode & S_IFMT) {
    case S_IFDIR:
        my_putchar('d');
        break;
    case S_IFREG:
        my_putchar('-');
        break;
    default:
        my_putchar('-');
        break;
    }
    print_permissions(sb->st_mode);
    return 0;
}

int info(char *filename, struct stat *sb)
{
    struct passwd *pw;
    struct group *gr;

    if (lstat(filename, sb) == -1) {
        return 84;
    }
    pw = getpwuid(sb->st_uid);
    if (pw != NULL) {
        my_printf("%s ", pw->pw_name);
    } else {
        my_printf("%d ", (int)sb->st_uid);
    }
    gr = getgrgid(sb->st_gid);
    if (gr != NULL) {
        my_printf("%s ", gr->gr_name);
    } else {
        my_printf("%d ", (int)sb->st_gid);
    }
    return 0;
}

int flag_ls_l(char *argv)
{
    struct stat sb;
    DIR *dir = opendir(argv);

    if (argv[0] == '.' && argv[1] == '\0')
        return print_all_files(".");
    permissions(argv, &sb);
    my_printf("%u ", (uintmax_t) sb.st_nlink);
    info(argv, &sb);
    my_printf("%d ", (intmax_t) sb.st_size);
    print_time(&sb);
    my_printf("%s", argv);
    my_putchar('\n');
    return 0;
}

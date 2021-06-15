/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** .
*/

#include "../include/mydb.h"

int controll_sort(char *command, int sort, char *const *tmp, int check)
{
    int index = 0;

    for (int x = 0; x < sort; x++) {
        index = find_index("sort", command, x+1);
        if (my_strcmp(tmp[index + 1], "title") == 0)
            check++;
        if (my_strcmp(tmp[index + 1], "id_movie") == 0)
            check++;
        if (my_strcmp(tmp[index + 1], "synposis") == 0)
            check++;
        if (my_strcmp(tmp[index + 1], "id_director") == 0)
            check++;
        if (my_strcmp(tmp[index + 1], "director") == 0)
            check++;
        if (my_strcmp(tmp[index + 1], "id_type") == 0)
            check++;
        if (my_strcmp(tmp[index + 1], "type") == 0)
            check++;
    }
    return check;
}

int check_sort_command(char *command, int sort, char **tmp)
{
    int check = 0;

    check = controll_sort(command, sort, tmp, check);
    if (check == sort)
        return 1;
    return -1;
}
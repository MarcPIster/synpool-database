/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** .
*/

#include "../include/mydb.h"

int controll_get(char *command, int get, char *const *tmp, int check)
{
    int index = 0;
    for (int x = 0; x < get; x++) {
        index = find_index("get", command, x+1);
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

int check_get_command(char *command, int get, char **tmp)
{
    int check = 0;

    check = controll_get(command, get, tmp, check);
    if (check == get)
        return 1;
    return -1;
}

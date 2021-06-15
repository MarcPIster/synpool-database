/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** .
*/

#include "../include/mydb.h"

int check_show_command(char *command, int show, char **tmp)
{
    int check = 0;
    int index;

    if (array_size(tmp) < show*3)
        return -1;
    for (int x = 0; x < show; x++) {
        index = find_index("show", command, x+1);
        if (is_num(tmp[index + 1]) == 1 && is_num(tmp[index+2]) == 1)
            check++;
    }
    if (check == show)
        return 1;
    return -1;
}

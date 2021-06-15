/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** .
*/

#include "../include/mydb.h"


int check_command(char *command)
{
    int get = 0;
    int show = 0;
    int sort = 0;
    char **tmp = NULL;

    if (!command)
        return -1;
    get = find_word("get\0", command);
    show = find_word("show\0", command);
    sort = find_word("sort\0", command);

    if (get == 0 && show == 0 && sort == 0)
        return -1;
    tmp = my_str_to_word_array(command, ' ');
    if (get > 0)
        if (check_get_command(command, get, tmp) == -1) {
            free_tmp(tmp);
            return -1;
        }
    if (show > 0)
        if (check_show_command(command, show, tmp) == -1) {
            free_tmp(tmp);
            return -1;
        }
    if (sort > 0)
        if (check_sort_command(command, sort, tmp) == -1) {
            free_tmp(tmp);
            return -1;
        }
    free_tmp(tmp);
    return 1;
}
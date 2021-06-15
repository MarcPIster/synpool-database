/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** .
*/

#include "../include/mydb.h"

void check_input(int ac, char **av)
{
    if (ac != 3) {
        write(2, "False input\n", 12);
        exit(84);
    }
}


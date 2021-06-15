/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** .
*/

#include "../include/mydb.h"

char *getuserinput(void)
{
    char *line = NULL;
    size_t length = 0;

    while (line == NULL) {
        if (getline(&line, &length, stdin) == -1)
            exit(84);
    }
    return line;
}

void loop(mydb *db, char **av)
{
    char *command = NULL;
    int run = 1;

    while (run) {
        free(command);
        command = getuserinput();
        if (my_strcmp(command, "end\n") == 0)
            break;

        if (check_command(command) == -1)
            continue;
        printf("%s", command);

    }
}
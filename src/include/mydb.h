/*
** EPITECH PROJECT, 2020
** header for duostumper
** File description:
** mybsq
*/

#ifndef BSQ_LIBRARY_H
#define BSQ_LIBRARY_H

#include "../lib/library.h"
#include <stdio.h>
#include <libc.h>

typedef struct csv {
    char ***data;
    char **labels;
    int n_columns;
    int n_rows;
} csv;

typedef struct film {
    int id_movie;
    char *title;
    char *synposis;
    int id_director;
    char *director;
    int id_type;
    char *type;
} film;

typedef struct mydb {
    int max;
    char *command;
    film **films;
} mydb;

char *read_file(char *filepath);
void check_input(int ac, char **av);
csv *parse_csv(char *filepath);
void free_structs(mydb *db);

#endif //BSQ_LIBRARY_H
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
    char title[32];
    char synposis[128];
    int id_director;
    char director[16];
    int id_type;
    char type[16];
} film;

typedef struct mydb {
    int max;
    film **films;
} mydb;

char *read_file(char *filepath);
void check_input(int ac, char **av);
csv *parse_csv(char *filepath);
void free_structs(mydb *db);
void free_csv(csv *mycsv);
mydb *init_db(char **av);

#endif //BSQ_LIBRARY_H
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
void loop(mydb *db, char **av);
int check_command(char *command);
void free_tmp(char **tmp);
int check_sort_command(char *command, int sort, char **tmp);
int check_show_command(char *command, int show, char **tmp);
int check_get_command(char *command, int get, char **tmp);

#endif //BSQ_LIBRARY_H
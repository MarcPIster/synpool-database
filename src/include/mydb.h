/*
** EPITECH PROJECT, 2020
** header for duostumper
** File description:
** mybsq
*/

#ifndef BSQ_LIBRARY_H
#define BSQ_LIBRARY_H

#include "../lib/library.h"

typedef struct csv {
    char ***data;
    char **labels;
    int n_columns;
    int n_rows;
} csv;

char *read_file(char *filepath);

#endif //BSQ_LIBRARY_H
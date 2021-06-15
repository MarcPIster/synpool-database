/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** main file
*/


#include "../include/mydb.h"

void free_structs(mydb *db)
{
    for (int x = 0; db->films[x]; x++) {
        //free(db->films[x]->director);
        //free(db->films[x]->synposis);
        //free(db->films[x]->title);
        //free(db->films[x]->type);
        //free(db->films[x]);
    }
    //free(db);
}

void free_csv(csv *mycsv)
{
    int len = 0;
    for (int x = 0; x < mycsv->n_rows; x++) {
        len = array_size(mycsv->data[x]);
        for (int y = 0; y < len; y++)
            free(mycsv->data[x][y]);
        free(mycsv->data[x]);
    }
    free(mycsv->data);
    len = array_size(mycsv->labels);
    for (int x = 0; x < len; x++) {
        free(mycsv->labels[x]);
    }
    free(mycsv->labels);
}

void free_tmp(char **tmp)
{
    int size = array_size(tmp);

    for (int x = 0; x < size; x++) {
        free(tmp[x]);
        tmp[x] = NULL;
    }
    free(tmp);
    tmp = NULL;
}
/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** main file
*/


#include "../include/mydb.h"

void free_structs(mydb *db)
{
    free(db->command);
    db->command = NULL;
    for (int x = 0; x < db->max; x++) {
        //free(db->films[x]->director);
        //free(db->films[x]->synposis);
        //free(db->films[x]->title);
        //free(db->films[x]->type);
        //free(db->films[x]);
    }
    free(db);
    db = NULL;
}
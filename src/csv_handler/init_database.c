/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** init database
*/

#include "../include/mydb.h"

film **get_films(csv *my_csv)
{
    film **output = malloc(sizeof(film) *(my_csv->n_rows)+1);
    char **tmp = NULL;

    for (int x = 0; x < my_csv->n_rows; x++) {
        output[x] = malloc(sizeof(film));
        tmp = my_str_to_word_array(my_csv->data[x][0], ';');
        output[x]->id_movie = my_getnbr(tmp[0]);
        memset(output[x]->title, 0, sizeof(output[x]->title));
        strncpy(output[x]->title, tmp[1], sizeof(output[x]->title) - 1);
        memset(output[x]->synposis, 0, sizeof(output[x]->synposis));
        strncpy(output[x]->synposis, tmp[2], sizeof(output[x]->synposis) - 1);
        output[x]->id_director =  my_getnbr(tmp[3]);
        memset(output[x]->director, 0, sizeof(output[x]->director));
        strncpy(output[x]->director, tmp[2], sizeof(output[x]->director) - 1);
        memset(output[x]->type, 0, sizeof(output[x]->type));
        strncpy(output[x]->type, tmp[2], sizeof(output[x]->type) - 1);
        free(tmp);
    }
    output[my_csv->n_rows] = NULL;
    return output;
}

//musst be freed
mydb *init_db(char **av)
{

    mydb *output = malloc(sizeof(mydb));
    csv *my_csv = parse_csv(av[1]);

    if (!output || !my_csv)
        exit(84);
    output->max = my_csv->n_rows;
    output->films = get_films(my_csv);
    free_csv(my_csv);
    return output;
}
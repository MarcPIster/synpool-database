/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** main file
*/


#include "include/mydb.h"

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

//musst be freed
mydb *init_db(char **av)
{

    mydb *output = malloc(sizeof(mydb));
    csv *my_csv = parse_csv(av[1]);
    int count = 0;

    output->command = malloc(sizeof(char)* my_strlen(av[2]) + 1);
    strcpy(output->command, av[2]);
    if (!output || !my_csv || !output->command)
        exit(84);
    for (int x = 0; x < my_csv->n_rows; x++)
        printf("%s\n",my_csv->data[x][0]);

    output->max = my_csv->n_rows;
    free_csv(my_csv);
    return output;
}

int main(int ac, char **av)
{
    int test = 0;
    mydb *database = NULL;

    check_input(ac, av);
    database = init_db(av);

    printf("%s\n", database->command);
    test = find_word("test\0", "dies test ist testein test\n");
    my_put_nbr(test);
    free_structs(database);
    return 0;
}

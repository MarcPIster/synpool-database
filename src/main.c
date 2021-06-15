/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** main file
*/


#include "include/mydb.h"

int main(int ac, char **av)
{
    int test = 0;
    mydb *database = NULL;

    check_input(ac, av);
    database = init_db(av);

    loop(database, av);
    test = find_word("test\0", "dies test ist testein test\n");
    for (int x = 0; x < database->max; x++)
        printf("%s\n",database->films[x]->title);
    free_structs(database);
    return 0;
}

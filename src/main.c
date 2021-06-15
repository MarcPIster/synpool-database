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
    test = find_word("test\n", "dies test ist test ein test");
    my_put_nbr(test);
    return 0;
}

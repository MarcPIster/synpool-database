/*
** EPITECH PROJECT, 2020
** header for lib
** File description:
** lib
*/
#ifndef LIB_LIBRARY_H
#define LIB_LIBRARY_H

#include <stdlib.h>
#include <unistd.h>


int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_strlen(char const *str);
void my_swap(int *a, int *b);
int is_num(char *str);
char *my_revstr(char *str);
char *my_strcat(char *str1, char *str2);
int find_word(char *word, char *string);
char *read_file(char *filepath);
char **my_str_to_word_array(char *str, char sep);
int my_strcmp(char const *s1, char const *s2);
int array_size(char **table);
int find_index(char *word, char *string, int numb);

#endif //LIB_LIBRARY_H
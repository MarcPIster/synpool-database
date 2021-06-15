/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** my_getnbr with errorhandling
*/

#include "../library.h"

int find_word(char *word, char *string)
{
    int len_word = my_strlen(word);
    int len_string = my_strlen(string);
    int tmp = 0;
    int found = 0;

    if (len_word > len_string)
        return 0;
    for (int x = 0; string[x] != '\0' && string[x] != '\n'; x++) {
        if (string[x] == word[0]) {
            for (int y = 0; y < len_word; y++)
                if (word[y] == string[y + x])
                    tmp++;
        }
        if (tmp == len_word) {
            found++;
            tmp = 0;
        }
        else
            tmp = 0;
    }
    return found;
}
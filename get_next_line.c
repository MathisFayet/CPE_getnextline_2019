/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2019
** File description:
** get_next_line.c
*/

#include "get_next_line.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int y = 0;

    while (dest[y] != '\0')
        y++;

    while (src[i] != '\0') {
        dest[y + i] = src[i];
        i++;
    }
    dest[y + i] = '\0';
    return (dest);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
}

char *get_next_line(int fd)
{
    char *buffer = malloc(sizeof(char) * READ_SIZE);

    if (fd < 0 || buffer == NULL)
        return (NULL);
}
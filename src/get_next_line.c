/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2019
** File description:
** get_next_line.c
*/

#include "get_next_line.h"

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

int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    if (ac != 2)
        return (84);
    struct stat get;
    int lenght = get.st_size;
    char *buffer = malloc(sizeof(char) * (lenght + 1));
    int back = read(fd, buffer, lenght);
}
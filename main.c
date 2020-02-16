/*
** EPITECH PROJECT, 2020
** CPE_getnextline_2019
** File description:
** main
*/

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd = open(argv[1], O_RDONLY);
    char *s = get_next_line(fd);

    while (s)
    {
        printf("%s\n", s);
        free(s);
        s = get_next_line(fd);
    }
    return 0;
}
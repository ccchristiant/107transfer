/*
** EPITECH PROJECT, 2021
** manual.c
** File description:
** manual.c
*/

#include <string.h>
#include <stdio.h>

int manual(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        printf("USAGE\n");
        printf("\t./107transfer [num den]*\n\n");
        printf("DESCRIPTION\n");
        printf("\tnum\tpolynomial numerator defined by its coefficients\n");
        printf("\tden\tpolynomial denominator defined by its coefficients\n");
        return 0;
    }
    return 84;
}
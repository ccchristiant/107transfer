/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "transfer.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    num_den_t **tab_num_den = NULL;

    if (manual(ac, av) == 0)
        return 0;
    if (error(ac, av, &tab_num_den) == 84)
        return 84;
    return transfer(tab_num_den, (ac - 1) / 2);
}
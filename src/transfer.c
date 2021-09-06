/*
** EPITECH PROJECT, 2021
** transfer.c
** File description:
** transfer.c
*/

#include "transfer.h"
#include <stdlib.h>
#include <stdio.h>

int transfer(num_den_t **tab_num_den, int nb_pair)
{
    double fin_res = 1;
    double num = 0;
    double den = 0;

    for (double x = 0; x < 1.001; x += 0.001) {
        fin_res = 1;
        for (int i = 0; i < nb_pair; ++i) {
            num = calc_num(tab_num_den, x, i);
            den = calc_den(tab_num_den, x, i);
            if (den == 0)
                return 84;
            fin_res *= f_x(num, den);
        }
        printf("%.3f -> %.5f\n", x, fin_res);
    }
    return 0;
}
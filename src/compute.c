/*
** EPITECH PROJECT, 2021
** compute.c
** File description:
** compute.c
*/

#include "transfer.h"

double calc_num(num_den_t **tab_num_den, double x, int i)
{
    double res = 0;

    for (int j = 0; j < tab_num_den[i]->len_num; ++j)
        res += tab_num_den[i]->num[j] * pow(x, j);
    return res;
}

double calc_den(num_den_t **tab_num_den, double x, int i)
{
    double res = 0;

    for (int j = 0; j < tab_num_den[i]->len_den; ++j)
        res += tab_num_den[i]->den[j] * pow(x, j);
    return res;
}

double f_x(double num, double den)
{
    return num / den;
}
/*
** EPITECH PROJECT, 2021
** transfer.h
** File description:
** transfer header file
*/

#ifndef TRANSFER_H_
#define TRANSFER_H_

#include "my.h"
#include "struct.h"
#include <math.h>

int manual(int ac, char **av);
int error(int ac, char **av, num_den_t ***tab_num_den);
int error_stars_num(int i, int len, char **av, char **tab);
void fill_tab_num_den(int i, num_den_t ***tab_num_den, int len, char **tab);
int transfer(num_den_t **tab_num_den, int nb_pair);
double calc_num(num_den_t **tab_num_den, double x, int i);
double calc_den(num_den_t **tab_num_den, double x, int i);
double f_x(double num, double den);

#endif
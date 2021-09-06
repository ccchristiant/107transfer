/*
** EPITECH PROJECT, 2021
** fill_tab_num_den.c
** File description:
** fill_tab_num_den function
*/

#include "transfer.h"
#include <stdlib.h>

void fill_tab_num_den(int i, num_den_t ***tab_num_den, int len, char **tab)
{
  static int idx = 0;

  if (i % 2 != 0) {
    (*tab_num_den)[idx] = malloc(sizeof(num_den_t));
    (*tab_num_den)[idx]->num = malloc(sizeof(double) * (len + 1));
    (*tab_num_den)[idx]->len_num = len;
    for (int k = 0; k < len; k++)
      (*tab_num_den)[idx]->num[k] = atof(tab[k]);
    (*tab_num_den)[idx]->num[len] = 0;
  } else {
    (*tab_num_den)[idx]->den = malloc(sizeof(double) * (len + 1));
    (*tab_num_den)[idx]->len_den = len;
    for (int k = 0; k < len; k++)
      (*tab_num_den)[idx]->den[k] = atof(tab[k]);
    (*tab_num_den)[idx]->den[len] = 0;
    ++idx;
  }
}
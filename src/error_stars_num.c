/*
** EPITECH PROJECT, 2021
** error_stars_num.c
** File description:
** error_stars_num function
*/

#include "transfer.h"
#include <stdlib.h>

int nb_stars(char *str)
{
  int nb_stars = 0;

  for (int i = 0; str[i]; i++)
    nb_stars += (str[i] == '*');
  return nb_stars;
}

int nb_zeros(char **tab)
{
  int nb_zeros = 0;

  for (int i = 0; tab[i] != NULL; i++)
    nb_zeros += (my_getnbr(tab[i]) == 0);
  return nb_zeros;
}

int error_stars_num(int i, int len, char **av, char **tab)
{
    if (len - 1 != nb_stars(av[i]) || len == nb_zeros(tab))
      return 84;
    for (int j = 0; tab[j] != NULL; j++)
      if (is_num(tab[j]) == 0)
        return 84;
    return 0;
}
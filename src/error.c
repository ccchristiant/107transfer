/*
** EPITECH PROJECT, 2021
** error.c
** File description:
** error function
*/

#include "transfer.h"
#include <stdlib.h>

int arg_format(int ac, char **av, num_den_t ***tab_num_den)
{
  char **tab = 0;
  int len = 0;

  for (int i = 1; i < ac; i++) {
    tab = my_str_to_word_array_delim(av[i], '*');
    len = my_tab_length(tab);
    if (error_stars_num(i, len, av, tab) == 84)
      return 84;
    fill_tab_num_den(i, tab_num_den, len, tab);
    for (int i = 0; i < len; ++i)
      free(tab[i]);
    free(tab);
  }
  return 0;
}

int error(int ac, char **av, num_den_t ***tab_num_den)
{
  if (ac < 3)
    return 84;
  if ((ac - 1) % 2 != 0)
    return 84;
  (*tab_num_den) = malloc(sizeof(num_den_t*) * ((ac - 1) / 2));
  if (arg_format(ac, av, tab_num_den) == 84)
    return 84;
  return 0;
}
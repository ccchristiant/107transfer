/*
** EPITECH PROJECT, 2021
** is_num.c
** File description:
** is_num function
*/

int my_strlen(char const *str);

int is_num(char *n)
{
  int i = my_strlen(n);
  int isnum = (i > 0);
  while (i-- && isnum) {
    if (!(n[i] >= '0' && n[i] <= '9' || n[i] == '-'))
      isnum = 0;
  }
  return isnum;
}
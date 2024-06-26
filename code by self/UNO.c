#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int *, int);
void loco(int *color, int *b, int *t, int *i, int *cnt)
{
  for (int j = 0; j < (*i); j++)
    if (color[j] == (*b))
      (*cnt)++;

  if ((*cnt) < 2)
  {
    color[(*t)] = (*b);
    (*t)++;
  }
  if ((*cnt) > 1)
    (*i)--;
}
int main()
{
  int red[50], yellow[50], green[50], blue[50];
  int t = 0, y = 0, u = 0, o = 0, cd, cnt = 0, i = 0, q;

  printf("Enter no. of cards\n");
  scanf("%d", &cd);

  srand(time(NULL));

  while (i < cd)
  {
    int b = rand() % 9 + 1;
    cnt = 0;
    q = b + i;

    while (q > 3)
      q -= 4;

    if (q == 0)
      loco(red, &b, &t, &i, &cnt);

    else if (q == 1)
      loco(blue, &b, &y, &i, &cnt);

    else if (q == 2)
      loco(green, &b, &u, &i, &cnt);

    else if (q == 3)
      loco(yellow, &b, &o, &i, &cnt);

    i++;
  }

  sort(red, t);
  sort(yellow, o);
  sort(blue, y);
  sort(green, u);

  for (i = 0; i < o; i++)
    printf("\033[33m%d\033[0m\t", yellow[i]);
  printf("\n");

  for (i = 0; i < u; i++)
    printf("\033[32m%d\033[0m\t", green[i]);
  printf("\n");

  for (i = 0; i < t; i++)
    printf("\033[31m%d\033[0m\t", red[i]);
  printf("\n");

  for (i = 0; i < y; i++)
    printf("\033[34m%d\033[0m\t", blue[i]);
  printf("\n");

  return 0;
}
void sort(int *arr, int n)
{
  int j;
  for (int i = 1; i < n; ++i)
  {
    int pue = arr[i];
    for (j = i - 1; j >= 0 && arr[j] > pue; --j)
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = pue;
  }
}
// UNO
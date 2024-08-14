#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int *, int); // sort the assigned number

void print(int *red, int red_size, int *blue, int blue_size, int *yellow, int yellow_size, int *green, int green_size)
{
  int i;
  for (i = 0; i < yellow_size; i++)
    if (yellow[i] >=0)
      printf("\033[33m%d\033[0m\t", yellow[i]);
  printf("\n");
  for (i = 0; i < green_size; i++)
    if (green[i] >=0)
      printf("\033[32m%d\033[0m\t", green[i]);
  printf("\n");
  for (i = 0; i < red_size; i++)
    if (red[i] >=0)
      printf("\033[31m%d\033[0m\t", red[i]);
  printf("\n");
  for (i = 0; i < blue_size; i++)
    if (blue[i] >=0)
      printf("\033[34m%d\033[0m\t", blue[i]);
  printf("\n");
}
// assign number to array by which fun called.
void loco(int *color, int *b, int *color_size, int *i, int *cnt)
{
  for (int j = 0; j < (*i); j++)
    if (color[j] == (*b))
      (*cnt)++;

  if ((*cnt) < 2)
  {
    color[(*color_size)] = (*b);
    (*color_size)++;
  }
  if ((*cnt) > 1)
    (*i)--;
}

int main()
{
  system("cls");
  // variables
  int red[50], yellow[50], green[50], blue[50];
  int red_size =0, blue_size =0, green_size =0, yellow_size =0, no_of_cards, cnt =0, i =0, q;
  char col;
  int no;
  printf("Enter no. of cards\n");
  scanf("%d", &no_of_cards);

  srand(time(NULL));

  while (i < no_of_cards){
    int b = rand() % 9 + 1;
    cnt = 0;
    q = b + i;

    while (q > 3)
      q -= 4;

    if (q == 0)       loco(red,    &b, &red_size,    &i, &cnt);
    else if (q == 1)  loco(blue,   &b, &blue_size,   &i, &cnt);
    else if (q == 2)  loco(green,  &b, &green_size,  &i, &cnt);
    else if (q == 3)  loco(yellow, &b, &yellow_size, &i, &cnt);

    i++;
  }

  sort(red, red_size);
  sort(yellow, yellow_size);
  sort(blue, blue_size);
  sort(green, green_size);

  print(red, red_size, blue, blue_size, yellow, yellow_size, green, green_size);

  
  while (1)
  {

    // while(col != 'y' && col != 'Y'&& col != 'g' && col != 'G'&& col != 'r' && col != 'R'&& col != 'b' && col != 'B')
    scanf(" %c", &col);
    // printf("Enter number ");

    scanf("%d", &no);

    if (col == 'y' || col == 'Y'){
      for (int i = 0; i < yellow_size; i++)
        if (no == yellow[i]){  yellow[i] =-1;  break;  }
    }
    else if (col == 'g' || col == 'G'){
      for (int i = 0; i < green_size; i++)
        if (no == green[i]){   green[i] =-1;   break;  }
    }
    else if (col == 'r' || col == 'R'){
      for (int i = 0; i < red_size; i++)
        if (no == red[i]){     red[i] =-1;   break;  }
    }
    else if (col == 'b' || col == 'B'){
      for (int i = 0; i < blue_size; i++)
        if (no == blue[i]){   blue[i] = -1;   break;  }
    }
    system("cls");
    print(red, red_size, blue, blue_size, yellow, yellow_size, green, green_size);
  }
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
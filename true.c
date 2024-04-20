#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  for (int i = 0; i < (a +1)/2; i++) {

    for (int j = (a +1)/2; j > i + 1; j--)
      printf(" ");
    for (int j = 0; j < 1; j++)
      printf("*");
    for (int j = 2; j <= i; j++)
      printf(" ");
    for (int j = 0; j < 1; j++)
      if (i > 0)
        printf("*");
    for (int j = 2; j <= i; j++)
      printf(" ");
    for (int j = 0; j < 1; j++)
      if (i > 0)
        printf("*");

    printf("\n");
  }

  for (int h = 0; h < a; h++)
    printf("*");

  printf("\n");
  for (int i = 0; i < (a +1)/2 ; i++) {

    for (int j = 1; j <= i; j++)
      printf(" ");
    for (int j = 0; j<1; j++)
      printf("*");
    for (int j = (a +1)/2 ; j > i + 2; j--)
      printf(" ");
    for (int l = 0; l < 1; l++)
    if(i<((a +1)/2)-1)
      printf("*");
    for (int j = (a +1)/2 ; j > i + 2; j--)
      printf(" ");
    for (int j = 0; j < 1; j++)
    if(i<(a +1)/2-1)
      printf("*");

    printf("\n");
  }
}

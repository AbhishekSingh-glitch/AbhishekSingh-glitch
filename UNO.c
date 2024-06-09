/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char blue[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  char red[] = {'5', '1', '7', '6', '0', '2', '4', '9', '8', '3'};
  char yellow[] = {'7', '6', '9', '8', '2', '5', '3', '1', '0', '4'};
  char green[] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'};
  int i = 0, cd, q;
  printf("Enter no. of cards\n");
  scanf("%d", &cd);

  srand(time(NULL));

  while (i < cd) {
    int b = rand() % 9;

    q = i;
    if (i > 3)
      while( q>3) 
        q -= 4;
      

    switch (q) {

    case 2:
      printf("\033[34m%c\033[0m\t", blue[b]);
      break;
    case 3:
      printf("\033[31m%c\033[0m\t", red[b]);
      break;
    case 1:
      printf("\033[33m%c\033[0m\t", yellow[b]);
      break;
    case 0:
      printf("\033[32m%c\033[0m\t", green[b]);
      break;
    }
    i++;
    
  }

  return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char blue[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  char red[] = {'5', '1', '7', '6', '0', '2', '4', '9', '8', '3'};
  char yellow[] = {'7', '6', '9', '8', '2', '5', '3', '1', '0', '4'};
  char green[] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'};
  int i = 0, cd, q,w=1,e=1,t=1,y=1;
  printf("Enter no. of cards\n");
  scanf("%d", &cd);

  srand(time(NULL));

  while (i < cd) {
    int b = rand() % 9;

    q = i;
    if (i > 3)
      while( q>3) 
        q -= 4;

    if(q==0&&w<4){//make array to check that no nu.comes more than 2 times
      printf("\033[34m%c\033[0m\t", blue[b]);
      w++;
    }
    else if(q==1&&e<4){
      printf("\033[31m%c\033[0m\t", red[b]);
      e++;
    }
    else if(q==20&&t<4){
      printf("\033[33m%c\033[0m\t", yellow[b]);
      t++;
    }
    else if(q==3&&y<4){
      printf("\033[32m%c\033[0m\t", green[b]);
      y++;
    }
    
    i++;
    
  }

  return 0;
}
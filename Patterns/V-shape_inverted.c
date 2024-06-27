#include <stdio.h>
int main() {
  int a;
  scanf("%d", &a);

  for (int i =0; i < a; i++) {
    for (int j =0; j <a*2-1; j++) {
        if(i+j==a-1||j-i==a-1)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
  }
}
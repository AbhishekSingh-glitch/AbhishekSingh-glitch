#include <stdio.h>
int main() {
  int a;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= a * 2-1; j++) {
        if (i==j||i + j == a * 2)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
  }
}
#include<stdio.h>
int main (){
    int a;
    scanf("%d", &a);

    for (int i = 1; i <2* a; i++) {
        for (int j = 1; j<a*2; j++) 
            if (i==j||i==1||i==2*a-1||i+j==a*2)
                printf("*");
            else
                printf(" ");
    printf("\n");
  }
}
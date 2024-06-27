#include<stdio.h>
int main(){
    printf("Enter length to sqaure to print ");
    int a; scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
        printf("* ");
        printf("\n");
    }
}
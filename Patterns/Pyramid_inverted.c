#include<stdio.h>
int main (){
    int a;    
    scanf("%d",&a);                   
    for(int i=0;i<a;i++){              
        for(int j=0;j<a+a-1;j++)
            if(i<=j&&i+j<=a*2-2)
                printf("*");
            else
                printf(" ");         
                         
        printf("\n");
    }
}
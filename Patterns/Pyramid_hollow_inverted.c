#include<stdio.h>
int main (){
    int a;    
    scanf("%d",&a);                   
    for(int i=0;i<a;i++){              
        for(int j=0;j<a+a-1;j++)
            if(i==j||a+a-2==j+i||i==0)
                printf("*");
            else
                printf(" ");         
                         
        printf("\n");
    }
}
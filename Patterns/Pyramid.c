#include<stdio.h>
int main (){
    int a;    
    scanf("%d",&a);                   
    for(int i=0;i<a;i++){              
        for(int j=0;j<a+i;j++)
            if(a-1>i+j)
                printf(" ");
            else
                printf("*");         
                         
        printf("\n");
    }
}
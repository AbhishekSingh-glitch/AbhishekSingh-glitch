#include<stdio.h>
int main (){
    int a;    
    scanf("%d",&a);                   
    for(int i=a-1;i>=0;i--){              
        for(int j=0;j<a+i;j++)
            if(a-1>i+j)
                printf(" ");
            else
                printf("*");         
                         
        printf("\n");
    }
}
#include<stdio.h>
int main (){
    int a;    
    scanf("%d",&a);                   
    for(int i=a-1;i>=0;i--){              
        for(int j=0;j<a+i;j++)
            if(a-1==i+j||a-1==j-i||i==a-1)
                printf("*");
            else
                printf(" ");         
                         
        printf("\n");
    }
}
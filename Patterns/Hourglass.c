#include<stdio.h>
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
    for(int i=1;i<a;i++){              
        for(int j=0;j<a+i;j++)
            if(a-1>i+j)
                printf(" ");
            else
                printf("*");         
                         
        printf("\n");
    }

}
// i+j==a+1 a=3
// 1+3==4
// 2+2==4
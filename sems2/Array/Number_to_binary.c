#include<stdio.h>
#include<stdlib.h>
int main(){
    int *rem=calloc(1,4);

    int num,i=0;
    printf("Enter number ");
    scanf("%d",&num);
    while(num>=1){
        rem[i]=num%2;
        num/=2;
        i++;
        rem=realloc(rem,sizeof(int)*(i+1));
    }
    while (i>0){
        i--;
        printf("%d",rem[i]);
    }
    
    return 0;
}
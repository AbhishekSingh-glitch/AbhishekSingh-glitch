#include<stdio.h>

int main(){

    float res=0,temp;
    char operation; 
    scanf("%f",&temp); 
    res = temp;
    while(1){

        scanf("%c",&operation);
        while (operation==' ')
        scanf("%c",&operation);
        if(operation=='\n'){      
            break;
        }
        scanf("%f",&temp); 
        if(operation=='+'){
            res=res+temp;  
        }
    }
        printf("%f",res);
        return 0;
}

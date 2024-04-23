#include<stdio.h>

int main(){

    float res=0,temp,b=1;
    char operation; 
    scanf("%f",&temp); 
    res = temp;
    int avg=temp;
    while(1){

        scanf("%c",&operation);
        while (operation==' ')
        scanf("%c",&operation);
        if(operation=='\n')  break;
        
        scanf("%f",&temp); 
        if     (operation=='+')    res+=temp;  
        else if(operation=='-')    res-=temp;  
        else if(operation=='*')    res*=temp;  
        else if(operation=='/')    res/=temp;  
        avg+=temp;  
        b++;
        
    }
        printf("avg %.2f\n",res/b);
        printf("%f",res);
        return 0;
}

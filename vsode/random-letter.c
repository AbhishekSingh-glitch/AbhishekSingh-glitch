#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
int a,c=0;
srand(time(0));

while(c<6){
a=rand()%26+1;
switch(a){
    case 1:
    printf("a");
    c++;  
    break;
    case 2:
    printf("b");
    c++; 
    break;
    case 3:
    printf("c");
    c++; 
    break;
    case 4:
    printf("d");
    c++; 
    break;
    case 5:
    printf("e");
    c++;  
    break;
    case 6:
    printf("f");
    c++;  
    break;
    case 7:
    printf("g");
    c++;  
    break;
    case 8:
    printf("h");
    c++; 
    break;
    case 9:
    printf("i");
    c++; 
    break;
    case 10:
    printf("j");
    c++; 
    break;
    case 11:
    printf("k");
    c++; 
    break;
    case 12:
    printf("l");
    c++; 
    break;
    case 13:
    printf("m");
    c++;  
    break;
    case 14:
    printf("n");
    c++;  
    break;
    case 15:
    printf("o");
    c++; 
    break;
    case 16:
    printf("p");
    c++; 
    break;
    case 17:
    printf("q");
    c++; 
    break;
    case 18:
    printf("r");
    c++;  
    break;
    case 19:
    printf("s");
    c++;  
    break;
    case 20:
    printf("t");
    c++;  
    break;
    case 21:
    printf("u");
    c++;  
    break;
    case 22:
    printf("v");
    c++;  
    break;
    case 23:
    printf("w");
    c++;
    break;
    case 24:
    printf("x");
    c++; 
    break;
    case 25:
    printf("y");
    c++;  
    break;
    case 26:
    printf("z");
    c++;  
    break;
}
}
// printf("%d",a);
return 0;
}

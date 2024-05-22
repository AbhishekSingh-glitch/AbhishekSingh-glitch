
// Write a program to take two integers as input and perform all arithmetic operations (+,-,*,/,%) on it. Note: The result must also be an integer.
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    printf("%d",a+b-a*b/a%b);
}
 
// Evaluate the following and predict the value of a, b, c and result at the end:
int a = 5, b = 3, c = 2;
int result = ++a * b / c--;
result= 9, a= 6, b= 3, c= 1
 
 
// Write a program to take two integers as input and perform division operation(/) on it. Note: The result must also be a floating point number(example: 7/2 = 3.500000).
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    printf("%f",a/(float)b);
}
 
// Write a program to demonstrate typecasting of a float data type to char data type.
#include<stdio.h>

int main(){
    float a;
    printf("Enter a number : ");
    scanf("%f",&a);
    printf("%c",(char)a);
}
 
// Evaluate the following and predict the value of a, b and result at the end:
int a = 5, b = 3;
int result = ++a * b / --a;

result= 3, a= 5, b=3
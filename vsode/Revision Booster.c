#include<stdio.h>
#include<math.h>
#include<time.h>

#define pi 3.14
int main()

// Write a program to find the sum of two numbers.
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum =a+b;
    printf("%d",sum);
    return 0;
}
// Implement a program to calculate the area of a circle.
{
    int a;
    scanf("%d",&a);
    a=pi*pow(a,2);
    printf("%d",a);
    return 0;
}
// Create a C program to check if a number is even or odd.
{
    int a;
    scanf("%d",&a);
    (a%2==0)?printf("even"):printf("odd");
    return 0;
}
// Write a program to print the Fibonacci series up to a given number.

/*Implement a simple calculator program with basic operations (addition, subtraction, multiplication, division).*/
{
    printf("to use this calculator\nfirst enter number \nthen enter what calculation to do \nenter third number \n");
    int n1,n2,sum;
    char sym;
    scanf("%d",&n1);
    scanf("%c",&sym);
    if(sym=='+'){
        scanf("%d",&n2);
        sum=n1+n2;
        printf("%d",sum);
    }
    if(sym=='-'){
        scanf("%d",&n2);
        sum=n1-n2;
        printf("%d",sum);
    }
    if(sym=='*'){
        scanf("%d",&n2);
        sum=n1*n2;
        printf("%d",sum);
    }
    if(sym=='/'){
        scanf("%d",&n2);
        sum=n1/n2;
        printf("%d",sum);
    }
}
// Create a program to find the largest of N numbers.

// Write a C program to reverse an integer.
{
    int a,n, r;
    scanf("%d", &a);
    while (a != 0) {
        r = a % 10;
        n = n * 10 +r;
        a /= 10;
    }
    printf("%d", n);
    return 0;
}
// Implement a program to check if a given integer is a palindrome.

// Create a function to calculate the power of a number.
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=pow(a,b);
    printf("%d",a);
    return 0;
}
// Write a program to find the factorial of a number without recursion.
{
    int a,b=1;
    printf("enter no. to find factorial");
    scanf("%d",&a);
    while(a>0){
        b*=a;
        a--;
    }
    printf("%d",b);
    return 0;
}
// Implement a program to convert Celsius to Fahrenheit.
{
    int c,f;
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("%d",f);
    return 0;
}
// Write a C program to find LCM of two numbers.

// Create a program to find the GCD (Greatest Common Divisor) of two numbers.

// Implement a program to calculate the square root of a number.
{
    int a;
    scanf("%d",&a);
    a=sqrt(a);
    printf("%d",a);
    return 0;
}
// Write a C program to find the length of the integer.

// Create a program to check 'perfect number' .
{
   int a,n=1,b=0,z=0;
   scanf("%d",&a);
   
   while(a>=n){
      if(a%n==0){
       z+=n;
      }
      ++n;
   }
   z-=a;
   if(z==a)
   printf("perfect");
   else
   printf("not perfect");
   
   return 0;
}
// Write a program to generate a random number within a given range.
{
    int a,b;
    scanf("%d",&b);
    srand(time(0));
    ++b;
    a=rand()%b;
    printf("%d",a);
    return 0;
}
// Write a c program to print all prime number within given range.

// Create a program to check if a year is a leap year.
{
    int a;
    printf("enter a year to check leap year or not\n");
    scanf("%d",&a);

    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                printf("leap year");
            }
            else{
                printf("not a leap year");
            }
        }
        else{printf("leap year");
        }
    }
    else{
        printf("not a leap year");
    }
    return 0;
}
// Write a C program to find the factorial of a number using recursion

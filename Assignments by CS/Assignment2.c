// Write a C program that takes an integer as input and prints "Even" if the number is even and "Odd" if it's odd.  
#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a number to check even or odd ");
    scanf("%d",&num);
    num%2==0?printf("Even"):printf("Odd");
    return 0;
}
 
// Create a C program to find and print the absolute value of an integer.

#include<stdio.h>
int main ()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>=0)
        printf("%d",a);
    else if(a<0)
        printf("%d",-a);
}
 
// Design a C program that calculates and prints whether a transaction results in a profit, loss, or break- even based on the cost price and selling price.  
#include<stdio.h>
int main ()
{
    float cp,sp;
    printf("Enter Cost Price ");
    scanf("%f",&cp);
    printf("Enter Selling Price ");
    scanf("%f",&sp);
    if(sp>cp)
         printf("Profit");
    else if(sp<cp)
         printf("Loss");
    else
         printf("break even");
    return 0;
}
 
// Implement a C program to determine if a given year is a leap year or not. Print "Leap Year" if true, otherwise print "Not a Leap Year."  
#include<stdio.h>
int main ()
{
    int year;
    printf("enter a year to check leap year or not\n");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
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

// Develop a C program to find and print the least of three numbers using nested if-else statements.  

#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter Three number to find the least ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("least %d",a);
        }
        else{
            printf("least %d",c);
        }
    }
    else {
        if(b<c){
            printf("least %d",b);
        }
        else {
            printf("least %d",c);
        }
    }
    return 0;
}
 
// Create a C program that takes three integer parameters representing the sides of a triangle and prints whether it's equilateral, isosceles, or scalene.

#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter 3 no. ");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2) {
        printf("it can be a");
        if (s1 == s2 && s1 == s3 && s3 == s2)
            printf(" Equilateral triangle");
        else if (s1 == s2 || s2 == s3 || s1 == s3)
            printf(" Isosceles triangle");
        else
            printf(" Scalene traingle");
    }
    else {
        printf("not a triangle");
    }
}


// Given a point (x, y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter x and y coordinates to check quadrant\n");
    printf("x= ");
    scanf("%d",&x);
    printf("y= ");
    scanf("%d",&y);

    if(x>0 && y>0)
        printf("1st quadrant");
    else if (x<0 && y<0)
        printf("3rd quadrant");
    else if (x>0 && y<0)
        printf("4th quadrant");
    else if(x<0 && y>0)
        printf("2nd quadrant");
    else if(x==0 && y==0)
        printf("origin");
    else if(x==0 &&( y>0||y<0))
         printf("On x axis");
    else if(y==0 &&( x>0||x<0))
         printf("On y axis");
    return 0;
}
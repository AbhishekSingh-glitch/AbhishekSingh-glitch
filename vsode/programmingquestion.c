// #include<stdio.h>
// int main()

//Input and Output: Write a C program to take two integers as input and display their sum.
/*{
    int x;
    int y;
    scanf("%d%d",&x,&y);
    printf("%d",x+y);
    return 0;
}*/

//Typecasting: Convert a float number to an integer and print the result.
/*{
    float a=188,b=20;
    int c = a/(int)b;    
    printd("c = %d",c);
    return 0;
}*/

//Input Validation: Create a program that reads an integer and ensures it's positive; id not, it asks the user for input again.
/*{
    int a;
    A:
    printf("enter a +ve no.\n");
    scanf("%d",&a);
    if(a<0){
        printf("wrong input");
        goto A;
    }
    printf("right input");
}*/

// OR
// #include <stdio.h>
// int main(){
//     int a;
//     while(1){
//         printf("enter a +ve no.\n");
//         scanf("%d",&a);
//         if(a<0) printf("wrong input\n");
//         else {  printf("right input\n"); break;  }
//     }
// }
// OR
// #include <stdio.h>
// #include<unistd.h>
// #include<stdlib.h>

// int main(){
//     int a;
//     while('x'){
//         printf("enter a +ve no.\n");
//         scanf("%d",&a);
//         if(a<0) {printf("wrong input\n"); 
//         sleep(1);
//         system("cls");}
//         else if(a>=0){  printf("right input\n"); break;  }
//     }
// }

//Simple Arithmetic: Write a program that takes two integers as input, multiplies them, and displays the result.
/*{
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("%d",c=a*b);
    return 0;
}*/

//Character Input: Read a character from the user and display whether it's a vowel (a, e, i, o, u) or a consonant.
/*{
    char ch;
    scanf("%c", &ch);
    (ch != 'a') && (ch != 'e') && (ch != 'i') && (ch != 'o') && (ch != 'u')?printf("Consonants"):printf("Vowels");
    return 0;
}*/

//Type Conversion: Take an integer input and convert it to a double, then display the double value.
/*{
    int i;
    scanf("%d",&i);
    double f = (double)i;
    printf("%.8lf",f);
    return 0;
}*/

//Temperature Conversion: Create a program that converts Celsius to Fahrenheit. Take the temperature in Celsius as input and display the equivalent temperature in Fahrenheit.
/*{
    float Celsius,Fahrenheit;
    scanf("%f",&Celsius);
    Fahrenheit = Celsius*((float)9/5)+32;
    printf("%f",Fahrenheit);
    return 0;
}*/

//Average of Three Numbers: Read three numbers from the user and calculate their average, then display it.
/*{
    float w,x,y,z;
    scanf("%f%f%f",&w,&x,&y);
    z = (w + x + y)/3;
    printf("%f",z);
    return 0;
}

//discount Calculation: Take the original price of an item and a discount percentage as input. Calculate and display the final price after applying the discount.
/*{
    int a; //orignal price
    int b; //final price
    int c; //discount
    scanf("%f%f",&a,&c);
    b=a-(a*(c/100.0));
    printf("%f",b);
    return 0;
}*/

//Simple Interest: Read the principal amount, rate of interest, and time in years. Calculate and display the simple interest
/*{
    float p,r,t;
    scanf(" %f %f %f",&p, &r, &t);
    float s =p*r*t/100;
    printf(" \n%f", s);
    return 0;
    
}*/

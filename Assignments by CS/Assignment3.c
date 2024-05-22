// Write a C program to calculate the sum of natural numbers up to a given positive integer 'n'.
#include <stdio.h>
int main() {
  int a, i = 0, c = 0;
  printf("Enter a natural no. to get the sum upto\n");
  scanf("%d", &a);
  while (a > 0) {
    i += a;
    a--;
    c++;
  }
  printf("sum of all no. till %d is %d", c, i);
  return 0;
}
 
// Write a C program to print a multiplication table for a given number 'n'.

#include <stdio.h>
int main() {
  int n, i=1, a;

  printf("Which table you want\n");
  scanf("%d", &n);

  while(i <= 10){
    printf("%dx%d=%d\n",n,i,i*n);
    i++;}
  return 0;
}
 
// Write a C program to find the GCD (Greatest Common Divisor) of two numbers using a loop.

#include <stdio.h>
int main() {
  int a, b;
  printf("Enter 2 no. to find GCD ");
  scanf("%d%d", &a, &b);

  while (a != b) {
    if (a < b)
      b-=a;
    else
      a-=b;
  }
  printf("%d", b);
}
 
// Write a C program to generate and print the first 'n' terms of the Fibonacci series.
// (Example: Input-> n=8, Output-> 0 1 1 2 3 5 8 13 )

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter the number to get Fibonacci Series:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }

    return 0;
}
 
// Write a C program to reverse a number 'n' and also print the sum of digits.
// (Example: Input-> n=1234, 
// Output-> reverse=4321 
                //  sum of digits=10 )

#include <stdio.h>

int main() {
  int a, b = 0,n,c=0;
  printf("Enter a number ");
  scanf("%d", &a);

  while (a != 0) {
    n=a%10;
    a /= 10;
    c+=n;
    b = b * 10+n;
  }
  printf("%d reverse\n%d sum\n", b,c);

  return 0;
}
 
// Write a C program to find all prime numbers between 1 and 100.

#include <stdio.h>

int main() {
  int a;
  printf("Prime No. between 1 to 100\n");
  for (int i=2; i<=100; i++) {
    a = 0;
    
    for (int j=2; j<=i/2; ++j)
      if (i%j == 0) 
        a = 1;

    if (a == 0)
      printf("%d\n", i);
  }
  return 0;
}
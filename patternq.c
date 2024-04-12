// * * * * 
// * * * *
// * * * *
// * * * *
// #include<stdio.h>
// int main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++)
//         printf("* ");
//         printf("\n");
//     }
// }

// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3  
// 4 4 4 4
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=0;j<4;j++)
//         printf("%d ",i);
//         printf("\n");
//     }
// }

//  1 2 3 4 
//  1 2 3 
//  1 2 
//  1
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++)
//         if(i+j<=5)
//         printf("%d ",j);
//         printf("\n");
//     }
// }

//  A 
//  A B 
//  A B C 
//  A B C D
// #include<stdio.h>
// int main(){
//     for(int i=65;i<69;i++){
//         for(char j='A';j<=i;j++)
//         printf("%c ",j);
//         printf("\n");
//     }
// }

//  1 
//  A B 
//  1 2 3 
//  A B C D 
//  1 2 3 4 5
// #include<stdio.h>
// int main(){
//     char a='A';
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=;j++){

//         }
        
//         printf("\n");
//     }
// }

// * 
// * * 
// * * * 
// * * * * 
// * * * 
// * *  
// * 

// * * * *
// *     *
// *     *
// * * * *

//  1 
//  1 2 
//  1 2 3 
//  1 2 3 4
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++)
//         printf("%d ",j);
//         printf("\n");
//     }
// }


// A
// AB
// ABC
// ABCD
// #include<stdio.h>
// int main(){
//     for(int i=65;i<69;i++){
//         for(char j='A';j<=i;j++)
//         printf("%c",j);
//         printf("\n");
//     }
// }

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// #include <stdio.h>

// int main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=i+1-1;j>0;j--) printf("%d ",j);
//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print the following Pattern.
//    1
//   123
//  12345
// 1234567
// #include<stdio.h>
// int main(){
    
//     for(int i=1;i<9;i+=2){
//         int a=1;
//         for(int j=9;j>i;j-=2)
//         printf(" ");

//         for(int j=1;j<=i;j++){
//         printf("%d",a);
//         a++;
//         }
//         printf("\n");
//     }
// }

// Write a C program to print the following Pattern.
//    A 
//   ABC
//  ABCDE
// ABCDEFG
// #include<stdio.h>
// int main(){
    
//     for(int i=1;i<9;i+=2){
//         char a='A';
//         for(int j=9;j>i;j-=2)
//         printf(" ");

//         for(int j=1;j<=i;j++){
//         printf("%c",a);
//         a++;
//         }
//         printf("\n");
//     }
// }


// Write a C program to print the following Pattern.
//    A 
//   BAB
//  CBABC
// DCBABCD
#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        printf(" ");
        for(j=i+1-1;j>0;j--) printf("%d",j);
        
        printf("\n");
    }
    return 0;
}

// Write a C program to print the following Pattern.
//    1
//   2 2
//  3   3
// 4     4

// Write a C program to print the following Pattern.
// *     *
//  *   *
//   * *
//    *

// 1234321
// 123 321
// 12   21
// 1     1

// Write a C program to print the following Pattern.
// ABCDEFG
// ABC EFG
// AB   FG
// A     G

// Write a C program to print the following Pattern.
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// Write a C program to print the following Pattern.
// *******
// *** ***
// **   **
// *     *
// **   **
// *** ***
// *******

// Write a C program to print the following Pattern.
//      *
//    * * *
//   *  *  *
//  *   *   *
// *    *    *
// ***********
// *    *    *
//  *   *   *
//   *  *  *
//    * * *
//      *
// * * * *            //done
// * * * *
// * * * *
// * * * *

// #include<stdio.h>
// int main(){
//     printf("Enter length to sqaure to print ");
//     int a; scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         for(int j=0;j<a;j++)
//         printf("* ");
//         printf("\n");
//     }
// }

// 1 1 1 1            //done
// 2 2 2 2 
// 3 3 3 3  
// 4 4 4 4

// #include<stdio.h>
// int main(){
//     printf("Enter length to sqaure to print ");
//     int a; scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=0;j<a;j++)
//         printf("%d ",i);
//         printf("\n");
//     }
// }

//  1 2 3 4        //done
//  1 2 3 
//  1 2 
//  1

// #include<stdio.h>
// int main(){
//     printf("Enter length to print ");
//     int a; scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a;j++)
//         if(i+j<=a+1)
//         printf("%d ",j);
//         printf("\n");
//     }
// }

//  A             //done
//  A B 
//  A B C 
//  A B C D

// #include<stdio.h>
// int main(){
//     printf("Enter length to print ");
//     int a; scanf("%d",&a);
//     for(int i=65;i<=64+a;i++){
//         for(char j='A';j<=i;j++)
//         printf("%c ",j);
//         printf("\n");
//     }
// }

//  1             //done
//  A B 
//  1 2 3 
//  A B C D 
//  1 2 3 4 5

// #include<stdio.h>
// int main(){
//     char a='A';
//     int b;
//     printf("Enter length to print ");
//     scanf("%d",&b);
//     for(int i=1;i<=b;i++){
//         a='A';
//         for(int j=1;j<=i;j++){
//             if(i%2==0) {  printf("%c ",a); ++a; }
//             else printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// *               //done
// * * 
// * * * 
// * * * * 
// * * * 
// * *  
// * 

// #include<stdio.h>
// int main (){
//     int a;              
//     printf("Enter length to print ");
//     scanf("%d",&a);       
//     for(int i=0;i<a;i++){       
//         for(int j=0;j<=i;j++){    
//             printf("* ");        
//         }             
//         printf("\n");
//     }
//     for(int i=0;i<a;i++){
//         for(int j=a-1;j>i;j--)   
//             printf("* ");
//         printf("\n");
//     } 
// }

// * * * *
// *     *               //done
// *     *
// * * * *

// #include <stdio.h>
// int main() {
//   int a;
//   scanf("%d", &a);
//   for (int i = 1; i <= a; i++) {
//     for (int j = 1; j <= a; j++)
//       if (i == a - (a - 1) || i == a || j == a - (a - 1) || j == a)
//         printf("* ");
//         else printf("  ");
//     printf("\n");
//   }
// }

//  1            //done
//  1 2 
//  1 2 3 
//  1 2 3 4

// #include<stdio.h>
// int main(){
//     printf("Enter length to print ");
//     int a; scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++)
//         printf("%d ",j);
//         printf("\n");
//     }
// }


// A             //done
// AB
// ABC
// ABCD

// #include<stdio.h>
// int main(){
//     printf("Enter length to print ");
//     int a; scanf("%d",&a);
//     for(int i=65;i<=64+a;i++){
//         for(char j='A';j<=i;j++)
//         printf("%c",j);
//         printf("\n");
//     }
// }

// 1                    //done
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
//         for(j=i;j>0;j--) printf("%d ",j);
//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print the following Pattern.
//    1
//   123                 //done
//  12345
// 1234567

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int b; scanf("%d",&b);
//     for(int i=1;i<=b+b;i+=2){
//         int a=1;
//         for(int j=b+(b-2);j>i;j-=2)
//         printf(" ");

//         for(int j=1;j<=i;j++){
//         printf("%d",a);
//         a++;
//         }
//         printf("\n");
//     }
// }
        //OR
// #include <stdio.h>  
// int main() {
//     printf("Enter a no.");
//     int a,b=1; 
//     scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         for(int j=a-1;j>i;j--)  printf(" ");
//         for(int j=1;j<=i+i+1;j++)  printf("%d",j);
//         printf("\n");} 
// }

// Write a C program to print the following Pattern.
//    A 
//   ABC         //done
//  ABCDE
// ABCDEFG

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int b; scanf("%d",&b);
//     for(int i=1;i<b+b;i+=2){
//         char a='A';
//         for(int j=b+(b-2);j>i;j-=2)
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
// DCBABCD                    // done

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a,b=1; 
//     scanf("%d",&a);
    
//     for(int i=1;i<=a;i++){
//         for(int j=a;j>=i+1;j--) printf(" ");
//         for(int j=i;j>0;j--) printf("%c",j+64);
//         for(int j=1;j<i;j++) if(i>1) printf("%c",j+65);
//         printf("\n");}
//     return 0;
// }

// Write a C program to print the following Pattern.
//    1
//   2 2               
//  3   3
// 4     4                      //done

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a,b=1; 
//     scanf("%d",&a);
    
//     for(int i=0;i<a;i++){
        
//         for(int j=a;j>i+1;j--)      
//             printf(" ");
            
//         if(i>=1)
//             printf("%d",b);
//         for(int j=1;j<i+i;j++) 
//         if(i>0)
//             printf(" "); 
//             if(i==0) printf("1");
//         if(i>=1)
//              printf("%d",b);
//         b++;
//         printf("\n");}
//     return 0;
// }

// Write a C program to print the following Pattern.
// *     *
//  *   *
//   * *                          //done
//    *

// #include <stdio.h>
// int main() {
//   int a;
//   scanf("%d", &a);

//   for (int i = 1; i <= a; i++) {

//     for (int j = 1; j <= (a * 2) - 1; j++) {
//       if (i == j)
//         printf("*");
//       else if (i + j == a * 2)
//         printf("*");
//     else
//         printf(" ");
//      }
//     printf("\n");
//   }
// }


// 1234321              //done
// 123 321
// 12   21
// 1     1

// #include<stdio.h>
// int main(){
//     printf("Enter a no. ");
//     int a,b=1; 
//     scanf("%d",&a);
    
//     while ( b<a ){ printf("%d",b); b++;}
//     while ( b>0){ printf("%d",b); b--;}     
//     printf("\n");

//     for(int i=1;i<a;i++){
//         for(int j=1;j<a;j++) 
//         if(i+j<=a)  printf("%d",j);

//         for(int j=0;j<i;j++) printf(" ");    

//        for(int j=1;j<i;j++) if(i>1) printf(" ");

//          for(int j=a-i;j>0;j--)
//           printf("%d", j); 
//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print the following Pattern.
// ABCDEFG
// ABC EFG
// AB   FG
// A     G               // done

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a,b=1, j;
//     scanf("%d",&a);
    
//     while ( b<2*a){ printf("%c",b+64); b++;}
      
//     printf("\n");

//     for(int i=1;i<a;i++){
//         for( j=1;j<a;j++) 
//         if(i+j<=a)  printf("%c",j+64);

//         for(int l=1;l<i+i;l++) printf(" ");    

//         b=j+i;
//         for(int k=1;k<a;k++){
//         if(b<2*a) printf("%c",b+64); ++b;}

//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print the following Pattern.
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *           //done

// #include <stdio.h>
// int main() {
//   printf("Enter a no.");
//   int a, b = 1;
//   scanf("%d", &a);

//   for (int i = 0; i < a - 1; i++) {
//     for (int j = a; j > i + 1; j--)
//       printf(" ");

//     if (i >= 1) printf("*");
//     for (int j = 1; j < i + i; j++)
//       if (i > 0) printf(" ");
//     if (i == 0) printf("*");
//     if (i >= 1) printf("*");
//     b++;

//     printf("\n");
//   }
//   for (int i = 1; i <= a; i++) {
//     for (int j = 1; j <= (a * 2) - 1; j++)
//       if (i == j) printf("*");
//       else if (i + j == a * 2) printf("*");
//       else printf(" ");

//     printf("\n");
//   }
//   return 0;
// }

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

// #include <stdio.h>
// int main() {
//  printf("Enter a no.");
//  int a;
//  scanf("%d", &a);
//  for (int i = 0; i < a-1 ; i++) {
//    for (int j = a ; j > i + 1; j--) printf(" ");
//  for (int j = 0; j < 1; j++) printf("*");
//  for (int j = 1; j < i; j++) printf(" ");
//  for (int j = 0; j < 1; j++)
//  if (i > 0) printf("*");
//  for (int j = 1; j < i; j++) printf(" ");
//  for (int j = 0; j < 1; j++)
//  if (i > 0) printf("*");
//  printf("\n");
// } for (int h = 0; h < a+(a-1); h++)
//  printf("*"); 
//  printf("\n");
//  for (int i = 1; i < a ; i++) {
//  for (int j = 0; j < i; j++) printf(" "); 
//  for (int j = 0; j<1; j++) printf("*");
//  for (int j = a ; j > i+2 ; j--) printf(" ");
//  for (int l = 0; l < 1; l++)
//  if(i<a -1) printf("*");
//  for (int j = a ; j > i+2 ; j--) printf(" "); 
//  for (int j = 0; j<1; j++)
//  if(i<a -1) printf("*"); 
//  printf("\n");
//  }
// }
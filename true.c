#include<stdio.h>

int main (){
  int a; scanf("%d",&a);
  for(int i=0;i<a;i++){
    for(int j=a;j>i+1;j--)           
      printf("*");         

    for(int j=1;j<i+i;j++)       
      printf(".");  

    for(int j=a;j>i+1;j--)
      printf("*"); 
                    
      printf("\n");             
  }            
  for(int i=0;i<=a;i++){       
    for(int j=0;j<i+1;j++)           
      printf("^");           
        
    for(int j=a+i;j>=i;j--) 
      printf("-");

    for(int j=0;j<i;j++)
      printf("*");

    printf("\n");
  }                  
}







// #include<stdio.h>

// int main (){
//     int a=4;                
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)      //  * * * * *
//         printf(" ");              //   * * * * 
//         for(int j=a;j>=i;j--){    //    * * * 
//             printf("# ");         //     * * 
//         }                         //      * 
//         printf("\n");             //     * *
//     }                             //    * * *  
//     for(int i=0;i<=a;i++){        //   * * * *
//         for(int j=a;j>i;j--)      //  * * * * *
//         printf(" ");              
//         for(int j=0;j<=i;j++){    
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main() {
//   int i = 0, j = 0;
//   int a;
//   printf("Enter the no. ");
//   scanf("%d", &a);
//   for (int i = 1; i < 2 * a; i++) {
//     for (int j = 1; j <= a; j++) {
//       if (i + j == a + 1)
//         printf("*");
//       else
//         printf("#");
        
//     }
//     for (int j = 1; j < 2*a; j++)
//     if(i+j>=2*a-1) if(i>1&&i<=a &&j>a) printf("*");
//     printf("\n");
//   }
//   return 0;
// }



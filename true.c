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
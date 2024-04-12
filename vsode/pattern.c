// #include<stdio.h>

// int main (){
//     int a=5;                      // * * * * * 
//     for(int i=0;i<a;i++){         // * * * * * 
//         for(int j=0;j<a;j++){     // * * * * * 
//             printf("* ");         // * * * * * 
//         }                         // * * * * * 
//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<=i;j++)     // * * * * *
//         printf(" ");              //  * * * * *
//         for(int j=0;j<a;j++){     //   * * * * * 
//             printf("* ");         //    * * * * *
//         }                         //     * * * * *
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<=i;j++)     //  *
//         printf(" ");              //   * * 
//         for(int j=0;j<=i;j++){    //    * * * 
//             printf("* ");         //     * * * *
//         }                         //      * * * * *
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=a;j>i;j--)      //      * 
//         printf(" ");              //     * * 
//         for(int j=0;j<=i;j++){    //    * * * 
//             printf("* ");         //   * * * * 
//         }                         //  * * * * *
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=a;j>i;j--)      //          *
//         printf("  ");             //        * *
//         for(int j=0;j<=i;j++){    //      * * *
//             printf("* ");         //    * * * *
//         }                         //  * * * * *
//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main (){
//     int a=5;                       //  * * * * *
//     for(int i=0;i<a;i++){          //  * * * *
//           for(int j=a;j>i;j--){    //  * * * 
//             printf("* ");          //  * * 
//         }                          //  * 
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)      //  * * * * *
//         printf(" ");              //   * * * * 
//         for(int j=a;j>i;j--){     //    * * * 
//             printf("* ");         //     * * 
//         }                         //      * 
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)      //  * * * * *
//         printf("  ");             //    * * * * 
//         for(int j=a;j>i;j--){     //      * * * 
//             printf("* ");         //        * * 
//         }                         //          * 
//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main (){
//     int a=5;                      // infinite *
//     for(int i=0;i<a;i++){         
//         for(int j=0;j=i;j++){     //because j=i 
//             printf("* ");         
//         }                          
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main (){
//     int a=4;                
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)      //  * * * * *
//         printf(" ");              //   * * * * 
//         for(int j=a;j>=i;j--){    //    * * * 
//             printf("* ");         //     * * 
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

// #include<stdio.h>

// int main (){
//     int a=5;                      // *
//     for(int i=0;i<a;i++){         // * *
//         for(int j=0;j<=i;j++){    // * * * 
//             printf("* ");         // * * * *
//         }                         // * * * * * 
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main(){
//     int a=5,b=1;                  // 1
//     for(int i=0;i<a;i++){         // 2 3
//         for(int j=0;j<=i;j++){    // 4 5 6
//             printf("%d ",b++);    // 7 8 9 10
//         }                         // 11 12 13 14 15
//         printf("\n");
//     }
// }

// #include<stdio.h>

// int main(){
//     int a=5;                      // 1
//     for(int i=0;i<=a;i++){        // 1 2 
//         for(int j=1;j<=i;j++){    // 1 2 3 
//             printf("%d ",j);      // 1 2 3 4 
//         }                         // 1 2 3 4 5 
//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main (){
//     int a=4; 
//       for(int i=0;i<=a;i++){
//         for(int j=a;j>i;j--)      //      * 
//         printf(" ");              //     * * 
//         for(int j=0;j<=i;j++){    //    * * * 
//             printf("* ");         //   * * * * 
//         }                         //  * * * * *
//         printf("\n");             //   * * * *
//     }                             //    * * *
//     for(int i=0;i<a;i++){         //     * *
//         for(int j=0;j<=i;j++)     //      *
//         printf(" ");              
//         for(int j=a;j>i;j--){    
//             printf("* ");       
//         }                         
//         printf("\n");
//     }                  
// }

#include <stdio.h>

int main() {
    int n;
    printf("odd no. ");
    scanf("%d",&n);
    int k=0;
    for(int i=1;i<=n;++i){
        if(i<=n/2+1) ++k;
        else --k;
    
        for(int j=1;j<=n;++j){
            if(j>=n/2+k+1 || j<=n/2-k+1) printf("  ");
            else printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for( k=n;k>i;k--) printf("  ");
        
//         for( j=1;j<=i;j++) printf("%d ",j);

//         for(j=i-1;j>0;j--) printf("%d ",j);

//         printf("\n");
//     }
//       return 0;
// }

// #include<stdio.h>
// int main ()
// {
//     int a=0,i=0;
//     char s[10];
//     gets(s);
//     while(s[i]!='\n'){
//         if(s[i]=='a')
//         ++a;
//     ++i;
//     }
//     puts(s);
//     printf("\n%d times 'a' is used",a);
//     return 0;

// }


// #include<stdio.h>
// int main ()
// {
//     int a=0,i=0;
//     char s[100];
//     gets(s);
//     while(s[i]!='\n'){
//         if(s[i]==' ')
//         a++;
//     ++i;
//     }
//     puts(s);
//     printf("\n%d times 'space' is used",a);
//     return 0;
// }


// #include<stdio.h>
// int main ()
// {
//     int a=0,i=0;
//     char s[10];
//     gets(s);
//     while(s[i]!='\n'){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
//          ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
//         a++;
//     ++i;
//     }
//     puts(s);
//     printf("\n%d times 'vowel' is used",a);
// return 0;
// }


// #include<stdio.h>
// int main ()
// {
//     int a=0,i=0;
//     char s[10];
//     for(char i='\n';i!=s[a-1];){
//         scanf("%c",&s[a]);++a;
//     }
    
//     puts(s);
//     return 0;
// }


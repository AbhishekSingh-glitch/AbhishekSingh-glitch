//Square
// * *
// * *

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


// 1 1          
// 2 2 
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


// * * *
// *   *               //done 
// * * * 

// #include <stdio.h>
// int main() {
//   int a;
//   scanf("%d", &a);
//   for (int i = 1; i <= a; i++) {
//     for (int j = 1; j <= a; j++)
//       if (i == 1|| i == a || j ==1 || j == a)
//         printf("* ");
//         else printf("  ");
//     printf("\n");
//   }
// }


// * * * 
//  * * * 
//   * * *
// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<=i;j++)  
//         printf(" ");            
//         for(int j=0;j<a;j++){     
//             printf("* ");     
//         }                       
//         printf("\n");
//     }
// }
//                
// *
// * *
// * * *  
// #include<stdio.h>
// int main (){
//     int a=5;                      
//     for(int i=0;i<a;i++){         
//         for(int j=0;j<=i;j++){    
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }


//  1            //done
//  1 2 
//  1 2 3 

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

// 1 
// 2 3 
// 4 5 6 

// #include<stdio.h>
// int main(){
//     int a=5,b=1;    
//     for(int i=0;i<a;i++){   
//         for(int j=0;j<=i;j++)
//             printf("%d ",b++); 
//         printf("\n");
//     }
// }

// 1 
// 2 2 
// 3 3 3 

// #include<stdio.h>
// int main(){
//     int a=5,b=1;    
//     for(int i=1;i<=a;i++){   
//         for(int j=0;j<i;j++)
//             printf("%d ",i); 
//         printf("\n");
//     }
// }

// A             //done
// AB

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

//  A             
//  A B 
//  A B C 

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

// OR

// #include<stdio.h>
// int main(){
//     printf("Enter length to print ");
//     int a; scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         for(int j=65;j<=i+65;j++)
//         printf("%c ",j);
//         printf("\n");
//     }
// }


//  1         
//  A B 
//  1 2 3 
//  A B C D 

// #include<stdio.h>
// int main(){
//     char a='A';
//     int b;
//     printf("Enter length to print ");
//     scanf("%d",&b);
//     for(int i=1;i<=b;i++){
//         for(int j=0;j<i;j++)
//             if(i%2==0)   printf("%c ",a+j); 
//             else printf("%d ",j+1);
        
//         printf("\n");
//     }
// }

//                  OR

// #include<stdio.h>
// int main(){
//     int b;
//     printf("Enter length to print ");
//     scanf("%d",&b);
//     for(int i=1;i<=b;i++){
      
//         for(int j=1;j<=i;j++)
//             if(i%2==0)   printf("%c ",j+64);  
//             else printf("%d ",j);
        
//         printf("\n");
//     }
// }

//      *
//    * *
//  * * *
// #include<stdio.h>
// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=a;j>i;j--)      
//         printf("  ");             
//         for(int j=0;j<=i;j++){    
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }
// OR
// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=n;j++)
// 			if(i+j>=n+1)
// 				printf("*");
// 			else  printf(" ");
// 		printf("\n");
// 	}
// 	return 0;
// }
//  * * * 
//  * * 
//  * 
// #include<stdio.h>
// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){          
//           for(int j=a;j>i;j--){    
//             printf("* ");          
//         }                          
//         printf("\n");
//     }


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

//    OR

// #include<stdio.h>
// int main(){
//     printf("Enter length to print ");
//     int a; scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a-i+1;j++)
//         printf("%d ",j);
//         printf("\n");
//     }
// }

// * * *
//   * *
//     *
// #include<stdio.h>

// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)     
//         printf("  ");             
//         for(int j=a;j>i;j--){     
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }
// OR
// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=n;j++)
// 			if(j>=i)
// 				printf("*");
// 			else  printf(" ");
// 		printf("\n");
// 	}
// 	return 0;
// }

// *               //done
// * * 
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

//   OR
// #include<stdio.h>
// int main (){
//     int a;              
//     printf("Enter length to print ");
//     scanf("%d",&a);       
//     for(int i=0;i<2*a-1;i++){     
//         if(i<a)
//         for(int j=0;j<=i;j++)    
//             printf("* ");        
//         else if(i>a-1)
//         for(int j=a-1;j>i-a;j--)   
//             printf("* ");
//         printf("\n");
//     } 
// }


//      * 
//     * * 
//    * * * 
// #include<stdio.h>
// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=a;j>i;j--)      
//         printf(" ");              
//         for(int j=0;j<=i;j++){    
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }

// Write a C program to print the following Pattern.
//    1
//   123                 //done
//  12345

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

//         1 
//       1 2 1 
//     1 2 3 2 1

// #include <stdio.h>

// int main()
// {
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for( k=n;k>i;k--) printf("  ");
//         for( j=1;j<=i;j++) printf("%d ",j);
//         for(j=i-1;j>0;j--) printf("%d ",j);
//         printf("\n");
//     }
//     return 0;
// }

// Write a C program to print the following Pattern.
//    A 
//   ABC         //done
//  ABCDE
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

// OR

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int b; scanf("%d",&b);
//     for(int i=1;i<=b;i++){
      
//         for(int j=b;j>i;j--)
//         printf(" ");

//         for(int j=1;j<i+i;j++)
//         printf("%c",j+64);

//         printf("\n");
//     }
// }


// Write a C program to print the following Pattern.
//    A 
//   BAB         
//  CBABC               // done

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a,b=1; 
//     scanf("%d",&a);
    
//     for(int i=1;i<=a;i++){
//         for(int j=a;j>i;j--) printf(" ");
//         for(int j=i;j>0;j--) printf("%c",j+64);
//         for(int j=1;j<i;j++) printf("%c",j+65);
//         printf("\n");}
//     return 0;
// }

// Write a C program to print the following Pattern.
//    1
//   2 2               
//  3   3                     //done

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a,b=1; 
//     scanf("%d",&a);
    
//     for(int i=0;i<a;i++){
        
//         for(int j=a;j>i+1;j--)      
//             printf(" ");
            
//         if(i>=0)
//             printf("%d",b);
            
//         for(int j=1;j<i+i;j++) 
//         if(i>0)
//             printf(" "); 
            
//         if(i>0)
//              printf("%d",b);
             
//         b++;
//         printf("\n");}
//     return 0;
// }

// OR

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a; 
//     scanf("%d",&a);
    
//     for(int i=1;i<=a;i++){
        
//         for(int j=1;j<=a;j++) 
//         if(i+j==a+1)  printf("%d ",a-j+1);
//         else    printf("  ");

//         for(int j=1;j<i-1;j++) 
//         printf("  "); 

//         if(i>1)   printf("%d ",i);     
        
//         printf("\n");}
//     return 0;
// }
// OR
// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=2*n-1;j++)
// 			if(i+j==n+1||j==n+i-1)
// 				printf("%d",i);
// 			else  printf(" ");
// 		printf("\n");
// 	}
// 	return 0;
// }

//    * * * 
//     * * 
//      * 
// #include<stdio.h>
// int main (){
//     int a=5;                       
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)      
//         printf(" ");              
//         for(int j=a;j>i;j--){     
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }

//  *   *
//   * *                          //done
//    *

// #include <stdio.h>
// int main() {
//   int a;
//   scanf("%d", &a);

//   for (int i = 1; i <= a; i++) {

//     for (int j = 1; j <= a * 2-1; j++) {
//      if (i==j||i + j == a * 2)
//         printf("*");
//     else
//         printf(" ");
//      }
//     printf("\n");
//   }
// }



// 12321              //done
// 12 21
// 1   1

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

//         for(int j=1;j<i+i;j++) printf(" ");    
//     //  for(int j=1;j<i;j++) if(i>1) printf(" ");

//          for(int j=a-i;j>0;j--)
//           printf("%d", j); 
//         printf("\n");
//     }
//     return 0;
// }

// ABCDE
// AB DE
// A   E              // done

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

// OR

// #include<stdio.h>
// int main(){
//     printf("Enter a no.");
//     int a, j=1;
//     scanf("%d",&a);
    
//     while ( j<2*a){ printf("%c",j+64); j++;}
      
//     printf("\n");

//     for(int i=1;i<a;i++){
//         for( j=1;j<a;j++) 
//         if(i+j<=a)  printf("%c",j+64);

//         for(int l=1;l<i+i;l++) printf(" ");    

//         for(int k=j+i;k<a*2;k++)
//         printf("%c",k+64);

//         printf("\n");
//     }
//     return 0;
// }

//     *     
//   * * *   
// * * * * * 
//   * * *   
//     *  
// #include <stdio.h>

// int main() {
//     int n;
//     printf("odd no. ");
//     scanf("%d",&n);
//     int k=0;
//     for(int i=1;i<=n;++i){
//         if(i<=n/2+1) ++k;
//         else --k;
    
//         for(int j=1;j<=n;++j){
//             if(j>=n/2+k+1 || j<=n/2-k+1) printf("  ");
//             else printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//      * 
//     * *
//    * * *
//   * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
// #include<stdio.h>

// int main (){
//     int a=4; 
//       for(int i=0;i<=a;i++){
//         for(int j=a;j>i;j--)    
//         printf(" ");              
//         for(int j=0;j<=i;j++){    
//             printf("* ");       
//         }                         
//         printf("\n");          
//     }                           
//     for(int i=0;i<a;i++){         
//         for(int j=0;j<=i;j++)    
//         printf(" ");              
//         for(int j=a;j>i;j--){    
//             printf("* ");       
//         }                         
//         printf("\n");
//     }                  
// }
// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=2*n-1;i++){
// 		for(j=1;j<=2*n-1;j++)
// 			if(i+j<n+1||j>n+i-1||i-j>n-1||i+j>2*n+n-1)
// 				printf(" ");
// 			else
// 				printf("*");
// 		printf("\n");
// 	}

// 	return 0;
// }

//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *           //done

// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=2*n-1;i++){
// 		for(j=1;j<=2*n-1;j++)
// 			if(i+j==n+1||j==n+i-1||i-j==n-1||i+j==2*n+n-1)
// 				printf("#");
// 			else  printf(" ");
// 		printf("\n");
// 	}
// 	return 0;
// }
// OR
// #include <stdio.h>
// int main() {
//   printf("Enter a no.");
//   int a;
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

// OR 

// #include <stdio.h>
// int main() {
//   int a;
//   scanf("%d", &a);
// for (int i = a; i >1; i--) {

//     for (int j = 1; j <= a * 2-1; j++) {
//      if (i==j||i + j == a * 2)
//         printf("*");
//     else
//         printf(" ");
//      }
//     printf("\n");
//   }
//   for (int i = 1; i <= a; i++) {

//     for (int j = 1; j <= a * 2-1; j++) {
//      if (i==j||i + j == a * 2)
//         printf("*");
//     else
//         printf(" ");
//      }
//     printf("\n");
//   }
// }

// OR  by function

// #include <stdio.h>
// void fu(int i,int a){

//     for (int j = 1; j <= a * 2-1; j++) {
//      if (i==j||i + j == a * 2)
//         printf("*");
//     else
//         printf(" ");
//      }
//     printf("\n");
//   }
// int main() {
//   int a;
//   scanf("%d", &a);
// for (int i = a; i >1; i--) 
// fu(i,a);
//   for (int i = 1; i <= a; i++) 
// fu(i,a);
// }


// *******
// *** ***
// **   **
// *     *
// **   **
// *** ***
// *******


// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=2*n-1;i++){
// 		for(j=1;j<=2*n-1;j++)
// 			if(i+j<=n+1||j>=n+i-1||i-j>=n-1||i+j>=2*n+n-1)
// 				printf("*");
// 			else
// 				printf(" ");
// 		printf("\n");
// 	}

// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0,j = 0;
//     int  a;
//     printf("Enter the no. ");
//     scanf("%d",&a);

//     for(i=1; i<=a ;++i){
//         for(j=a; j >=i; --j)    printf("*");
//         for(j=2; j<=(2*i)-1; ++j)    printf(" ");
//         for(j=i; j <= a; ++j)    printf("*");
        
//         printf("\n");
//     }
//     for(i=1; i <=a ; ++i){
//         for(j=1; j <=i; ++j)    printf("*");
//         for(j=(2*i)-1; j<=(2*a)-2; ++j)    printf(" ");
//         for(j=1; j <= i; ++j)    printf("*");
        
//         printf("\n");
//     }

//     return 0;
// }

//  OR


// #include <stdio.h>
// int main() {
//   int i, j, a;
//   printf("Enter the no. ");
//   scanf("%d", &a);

//   while (i < a) { printf("*"); i++;  }
//   while (i > 1) {  printf("*");  i--;  }
//   printf("\n");
//   for (i = 1; i < a; ++i) {
//     for (int g = 0; g < 1; g++) printf("*");
//     for (j = a-1; j > i; --j)   printf("*");
//     for (j = 2; j <= (2 * i); ++j)  printf(" ");
//     for (j = i+1; j < a; ++j)   printf("*");
//     for (int g = 0; g < 1; g++)  printf("*");
//     printf("\n");
//   }
  
//   for (i = 2; i < a; ++i) {
//     for (int g = 0; g < 1; g++)  printf("*");
//     for (j = 1; j < i; ++j)if(i<a)  printf("*");
//     for (j = (2 * i)+1; j < (2 * a); ++j) printf(" ");
//     for (j = 1; j <= i-1; ++j)  if(i<a) printf("*");
//     for (int g = 0; g < 1; g++)  printf("*");
//     printf("\n");
//   }
//   i = 0;
//   while (i < a) { printf("*"); i++; }
//   while (i > 1){ printf("*"); i--;}
//   return 0;
// }




//      *
//     ***
//    * * *
//   *  *  *
//  *   *   *
// ***********
//  *   *   *
//   *  *  *
//    * * *
//     ***
//      *

// #include<stdio.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=2*n-1;i++){
// 		for(j=1;j<=2*n-1;j++)
// 			if(i+j==n+1||j==n+i-1||j==n||i==n||i-j==n-1||i+j==2*n+n-1)
// 				printf("*");
// 			else
// 				printf(" ");
// 		printf("\n");
// 	}
// 	return 0;
// }

// OR by function

// #include <stdio.h>
// void pi(int i,int n) {
//   for (int j=0;j<n-i;j++)             printf(" ");
//   if (i<=n)  for(int j=1;j<2*i;j++)
//      if (j==1||j==2*i-1||i==n||j==i)  printf("*");
//      else                             printf(" ");
//                                       printf("\n");
// }
// int main() {
// 	int n;  scanf("%d",&n);
//   for (int i=1;i<n;i++) pi(i,n);
//   for (int i=n;i>0;i--) pi(i,n);
//   return 0;
// }


//    * * * 
//     * * 
//      * 
//     * *
//    * * *  

// #include<stdio.h>

// int main (){
//     int a;
//     scanf("%d", &a);

//     for (int i = 1; i <2* a; i++) {
//         for (int j = 1; j<a*2; j++) 
//             if (i==j||i==1||i==2*a-1||i+j==a*2)
//                 printf("*");
//             else
//                 printf(" ");
//     printf("\n");
//   }
// }

//  *   * 
//   * *  
//    *   
//   * *  
//  *   * 

// #include <stdio.h>
// int main() {
//   int a;
//   scanf("%d", &a);

//     for (int i = 1; i <2* a; i++) {
//         for (int j = 1; j<a*2; j++) 
//             if (i==j||i+j==a*2)
//                 printf("*");
//             else
//                 printf(" ");
//     printf("\n");
//   }
// }
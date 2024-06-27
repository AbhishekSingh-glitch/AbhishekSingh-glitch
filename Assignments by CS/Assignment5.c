// 1 WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
// #include<stdio.h>
// int main(){
//     int a[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             a[i][j]=10;
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// 2 WAP to add two matrices and save the result in one of the given matrices. 
// (Do not use extra array)
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],b[r][c];
    
//     printf("enter the elements of 1st matrix\n");
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//             scanf("%d",&a[i][j]);
            
//     printf("enter the elements of 2nd matrix\n");
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//             scanf("%d",&b[i][j]);

//     for(int i=0;i<r;i++){
//         printf("\n");
//         for(int j=0;j<c;j++){
//             a[i][j]+=b[i][j];
//             printf("%d ",a[i][j]);}
//         }
// }

// 3 Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).
// Below is a given matrix which sample input & output:-
// Sample input 1: l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: -4
// Sample input 2: 2: l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
// Output 2:  2   
//  1  2 -3 4
//  0  0 -4 2
//  1 -1  2 3
// -4 -5 -7 0

// #include<stdio.h>
// int main(){

// // row and col
//     int row,col;
//     printf("Enter row and columun\n"); 
//     scanf("%d%d",&row,&col);

// // matrix input
//     int array[row][col];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             scanf("%d",&array[i][j]);
//         }
//     }
// // taking coordinates
//     int r1,c1,  r2,c2, sum=0;
//     printf("Enter r1,c1\n"); 
//     scanf("%d%d",&r1,&c1);
//     printf("Enter r2,c2\n"); 
//     scanf("%d%d",&r2,&c2);

// // main logic
//     int maxofr= r1>r2?r1:r2; 
//     int maxofc= c1>c2?c1:c2;
//     int minofr= r1>r2?r2:r1; 
//     int minofc= c1>c2?c2:c1;

//     for(int i=minofr;i<=maxofr;i++ ){
//         for(int j=minofc;j<=maxofc;j++ ){
//                 sum+=array[i][j];
//         }
//     }
// // printing 
//     printf("\n%d",sum);
// }

//OR
// #include<stdio.h>

// int max(int a,int b){
//     return (a>b?a:b);
// }
// int min(int a,int b){
//     return (a<b?a:b);
// }

// int main(){

// // row and col
//     int row,col;
//     printf("Enter row and columun\n"); 
//     scanf("%d%d",&row,&col);

// // matrix input
//     int array[row][col];
//     printf("Enter the elements of array\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             scanf("%d",&array[i][j]);
//         }
//     }
// // taking coordinates
//     int r1,c1,  r2,c2, sum=0;
//     printf("Enter r1,c1\n"); 
//     scanf("%d%d",&r1,&c1);
//     printf("Enter r2,c2\n"); 
//     scanf("%d%d",&r2,&c2);
// // main logic

//     for(int i=min(r1,r2);i<=max(r1,r2);i++ ){
//         for(int j=min(c1,c2);j<=max(c1,c2);j++ ){
//                 sum+=array[i][j];
//         }
//     }
// // printing 
//     printf("\n%d",sum);
// }

// 4 Write a program to find the largest element of a given 2D array of integers.
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],l=INT_MIN;
//     printf("enter the elements of 1st matrix\n");
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++){
//            scanf("%d",&a[i][j]);
//     // l=a[0][0];
//     // for(int i=0;i<r;i++)
//     //     for(int j=0;j<c;j++)
//            if(l<a[i][j]) l=a[i][j];}
//     printf("largest element %d",l);
// }

// 5 WAP to print the row number having the maximum sum in a given matrix.
// Example:
// input: 
// 1 3 5 7
// 3 4 7 8 
// 1 4 12 3 
// output:   2
// Explanation : The 2nd row has the maximum sum i.e.1+4+12+3 = 20
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],l[r],s=0,h;
//     printf("enter the elements of matrix\n");
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//            scanf("%d",&a[i][j]);

//     for(int i=0;i<r;i++){
//         l[i]=0;
//         for(int j=0;j<c;j++)
//             l[i]+=a[i][j];
//     }
//     for(int i=0;i<r;i++)
//         if(s<l[i]){ h=i; s=l[i];}
//     printf("%d",h);
    
// }

// OR

// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],l,s=0;
//     printf("enter the elements of matrix\n");
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//            scanf("%d",&a[i][j]);

//     for(int i=0;i<r;i++){
//         l=0;
//         for(int j=0;j<c;j++){
//             l+=a[i][j];
//             if(i==0)
//             s=l;}
//         if(s<=l){ 
//             s=l;
//             printf("%d ",i);
//         }  
//     }
// }
//OR
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],l[r],s=0;
//     printf("enter the elements of matrix\n");
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//            scanf("%d",&a[i][j]);
           

//     for(int i=0;i<r;i++){
//         l[i]=0;
//         for(int j=0;j<c;j++){
//             l[i]+=a[i][j];
//             if(s<l[i]) s=l[i];
//     }
//     }
//     for(int i=0;i<r;i++) 
//         if(s==l[i]){ 
//            printf("%d ",i);
            
//         }  

// }

// 6 Write a program to print the elements of both the diagonals in a square matrix.
// Example:
// Input:
// 1 2 3 
// 4 5 6
// 7 8 9
// Output:
// 1   3
//   5
// 7   9
// #include<stdio.h>
// int main(){
//     int s;
//     printf("enter the size of the matrix\n");
//     scanf("%d",&s);
//     int a[s][s];
//     for(int i=0;i<s;i++)
//         for(int j=0;j<s;j++)
//            scanf("%d",&a[i][j]);
//     for(int i=0;i<s;i++){
//         for(int j=0;j<s;j++)
//             if(i==j||i+j==s-1) 
//                 printf("%d ",a[i][j]);
//             else printf("  ");
//         printf("\n");
//     }
// }

// OR

// #include<stdio.h>
// int main(){
//     int s;
//     printf("enter the size of the matrix\n");
//     scanf("%d",&s);
//     int a[s][s];
//     for(int i=0;i<s;i++)
//         for(int j=0;j<s;j++)
//            scanf("%d",&a[i][j]);
           
//           printf("left diagonal");
//     for(int i=0;i<s;i++)
//         for(int j=0;j<s;j++)
//             if(i==j)
//                 printf(" %d",a[i][j]);

//       printf("\nright diagonal");
//     for(int i=0;i<s;i++)
//         for(int j=0;j<s;j++)
//             if(i+j==s-1) 
//                 printf(" %d",a[i][j]);   
    
// }


// 7 Write a program to rotate the matrix by 90 degrees anti-clockwise.
// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the size of the matrix\n");
//     scanf("%d",&r);
//     int a[r][r];
//     for(int i=0;i<r;i++)
//         for(int j=0;j<r;j++)
//             scanf("%d",&a[i][j]);

//     for(int i=0;i<r;i++)
//         for(int j=i;j<r;j++){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
    
//     for(int i=0,j=r-1;i<=j;i++,j--)
//         for(int l=0;l<r;l++){
//         int temp =a[i][l];
//         a[i][l]=a[j][l];
//         a[j][l]=temp;
//     }
//     printf("\n");
//     for(int i=0;i<r;i++){       
//         for(int j=0;j<r;j++)
//         printf("%d ",a[i][j]);
//         printf("\n");
//     }
// }

// 8 Given an m x n integer matrix, if an element is 0, set its entire row and column to 0's. 
// Suppose there exists only one zero in the entire matrix. Do not use extra array.
// Example:
// Input : matrix = [
//     [1,1,1],
//     [1,0,1],
//     [1,1,1]]
// Output : [
//     [1,0,1],
//     [0,0,0],
//     [1,0,1]]


// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],t,t2;

//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//             if(a[i][j]==0)
//                 t=i;
//                 t2=j;
//             }
    
//     for(int i=0;i<r;i++)  {
//         for(int j=0;j<c;j++){   
//             a[t][j]=0; 
//             a[i][t2]=0; 
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }  
// }

// 9 WAP to displays the elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter odd no.\n");
//     scanf("%d",&r);
//     int a[r][r];

//     for(int i=0;i<r;i++)
//         for(int j=0;j<r;j++)
//            scanf("%d",&a[i][j]);
//     printf("\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<r;j++)
//             if(i==r/2||j==r/2)
//             printf("%d ",a[i][j]);
//             else printf("  ");
//         printf("\n");}
// }

// 10 Given a matrix, WAP to arrange column elements in ascending order using C program.
// Example:
// Matrix: 
//  9 8 7 
//  5 4 6 
//  1 2 3 
// Matrix after sorting column elements: 
//  1 2 3 
//  5 4 6 
//  9 8 7
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter row and col of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c];

//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//            scanf("%d",&a[i][j]);

//     for(int i=0;i<c;i++)
//         for(int j=0;j<=r/2;j++)       //for(int j=0; j<r-1;j++)
//             for(int k=r-1; k>=j;k--)  //for(int k=j+1; k<r;k++)
//                 if(a[j][i]>a[k][i]){
//                     int temp=a[j][i];
//                     a[j][i]=a[k][i];
//                     a[k][i]=temp;
//                 }
//     printf("\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++)
//            printf("%d ",a[i][j]);
//         printf("\n");
//     }
// }
// Write a program that interchanges the odd and even elements of an array.

// Write a program to copy the contents of one array into another in the reverse order.
// #include<stdio.h>
// int main(){
//     int a[5],b[5];
//     for(int i=0,j=4;i<5;i++,j--){
//     scanf("%d",&a[i]);
//     b[j]=a[i];}
//     for(int i=0;i<5;i++)
//         printf("%d ",b[i]);
// }

// Twenty-five numbers are entered from the keyboard into an array 
// The number to be searched is entered through the keyboard by the user.
// Write a program to find if the number to be searched is present in the array and 
// if it is present, display the number of times it appears in the array.
// #include<stdio.h>
// int main(){
//     int a[10],s,c=0;

//     for(int i=0;i<10;i++)
//         scanf("%d",&a[i]);
//     printf("enetr element to search ");
//     scanf("%d",&s);
//     for(int i=0;i<10;i++)
//         if(a[i]==s) c++;
//     printf("%d is present %d times ",s,c);
// }
// Twenty-five numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are positive, 
// how many are negative, how many are even and how many odd.
// #include<stdio.h>
// int main(){
//     int a[10],p=0,n=0,e=0,o=0;

//     for(int i=0;i<10;i++){
//         scanf("%d",&a[i]);
//         if(a[i]>=0) p++; 
//         else n++; 
//         if(a[i]%2==0) e++;
//         else o++;
//     }
//     printf("+ve %d\n-ve %d\neven %d\nodd %d\n",p,n,e,o);
// }

// If an array arr contains n elements, then write a program to check if 
// arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.
// #include<stdio.h>
// int main(){
//     int a[5],s=sizeof(a)/sizeof(int),i;

//     for(int i=0;i<s;i++)
//         scanf("%d",&a[i]);
//     for(int i=0,j=s-1;i<s;i++,j--)
//         if(a[i]!=a[j]) break;
    
//     if(i!=s) printf("not a ");
//     printf("palindrome");
// }
// Write a program using pointers to find the smallest number in an array of 25 integers.

// Write a program which performs the following tasks:
// Initialize an integer array of 10 elements in main()
// Pass the entire array to a function modify()
// In modify() multiply each element of array by 3
// Return the control to main() and print the new array elements in main()

// insertion sort algorithm code

// How will you initialize a three-dimensional array threed[3][2][3]?
// How will you refer the first and last element in this array?

// Write a program to pick up the largest number from any 5 row by 5 column matrix.
// #include<stdio.h>
// int main(){
//     int a[5][5];
//     int c=sizeof(a[0])/sizeof(int);
//     int r=sizeof(a)/sizeof(int)/c;
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//     scanf("%d",&a[i][j]);
//     int l=a[0][0];
//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//             if(l<a[i][j]) l=a[i][j];
//     printf("%d",l);
// }

// Write a program to obtain transpose of a 4 x 4 matrix.
// The transpose of a matrix is obtained by exchanging the elements 
// of each row with the elements of the corresponding column.
// #include<stdio.h>
// int main(){
//     int a[4][4];
//     for(int i=0;i<4;i++)
//         for(int j=0;j<4;j++)
//             scanf("%d",&a[i][j]);
//         printf("\ntransposed of matrix\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++)
//             printf("%d ",a[j][i]);
//         printf("\n");
//     }
// }
// Match the following with reference to the program segment given below:

// Write a program to find if a square matrix is symmetric.
// #include<stdio.h>
// int main(){
//     int a[4][4],b[4][4],fl=0;
//     for(int i=0;i<4;i++)
//         for(int j=0;j<4;j++)
//             scanf("%d",&a[i][j]);
//         printf("\ntransposed of matrix\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             b[i][j]=a[j][i];
//             printf("%d ",b[i][j]);
//     }
//     printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++)
//         if(b[i][j]!=a[j][i]) fl=1;
//     }
//     if(fl==1)  printf("not ");
//     printf("symmetric matrix");
// }
// Write a program to add two 6 x 6 matrices.

// Write a program to multiply any two 3 x 3 matrices.

// Given an array p[5], write a function to shift it circularly left by two positions. 
// Thus, if p[0]= 15, p[1]= 30, p[2] = 28, p[3]= 19 and p[4] = 61 then after the 
//    shift p[0]= 28, p[1]= 19, p[2] = 61, p[3]= 15 and p[4] = 30 
//    Call this function for a(4 * 5) matrix and get its rows left shifted.

// A 6 * 6 matrix is entered through the keyboard. Write a program to obtain the Determinant value of this matrix.

// For the following set of sample data, compute the standard deviation and the mean.
// -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
// The formula for standard deviation is 
// √(xi-x̄)²/n
// where x, is the data item and x̄ is the mean

// The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known.
// Area=(1/2) ab sin (angle)
// Given the following 6 triangular pieces of land, write a program to find their area and determine which is largest.
//WAP to Calculate the product of all the elements in the given array.

// #include<stdio.h>
// int main(){
//     int a[5];
//     int n=sizeof(a)/sizeof(int);

//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
    
//     for(int i=1;i<n;i++)
//         a[0]*=a[i];

//     printf("product of all the elements %d",a[0]);
// }

//WAP to find the second largest element in the given Array in one pass. (one pass means using only 1 loop)
// #include<stdio.h>
// #include <limits.h>
// int main(){
//     int a[]={1,9,5,2,7,8},m,n=sizeof(a)/sizeof(int),l=INT_MIN,l2=INT_MIN;

//     for(int i=0;i<n;i++)
//     if(l<a[i]) l=a[i];
    

//     for(int i=0;i<n;i++)
//     if(l2<a[i]&&a[i]!=l)  l2=a[i];
    
    
//     printf("%d %d",l,l2);
// }


//WAP to find the minimum value out of all elements in the array.
//(Example: arr[5] = {2, 60, 11, 4, 42};
//output-> 2

// #include<stdio.h>
// int main(){
//     int a[5],m,
//     n=sizeof(a)/sizeof(int);

//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     m=a[0];
//     for(int i=0;i<n;i++)
//       if(m>a[i]) m=a[i];

//     printf("minimum value %d",m);
// }

//WAP to find the largest three elements in the array.
//(Example: arr[5] = {2, 60, 11, 4, 42};
//output-> 60 42 11

// #include<stdio.h>
// int main(){
//     int a[5],m,
//     n=sizeof(a)/sizeof(int);

//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
    
//     for(int i=0;i<n;i++)
//     for(int j=i+1;j<n;j++)
//       if(a[i]<a[j]) {
//         int temp=a[j];
//         a[j]=a[i];
//         a[i]=temp;
//     }
//     for(int i=0;i<3;i++)
//     printf("%d ",a[i]);
// }

//WAP to check if the given array is sorted(in ascending order)or not.

// #include<stdio.h>
// int main(){
//   int flag=0,a[5];
//   int n=sizeof(a)/sizeof(int);

//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);

//     for(int i=0;i<n-1;i++)
//         if(a[i]<a[i+1]) flag++;

//     if(flag==n-1) printf("sorted");
//     else printf("unsorted");
// }

//WAP to find the difference between the product of elements at even indices to the sum of elements at odd indices.

// #include<stdio.h>
// int main(){
//     int a[5],soo=0,poe=1,
//     n=sizeof(a)/sizeof(int);

//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);

//     for(int i=0;i<n;i++)
//     if(i%2==0) poe*=a[i];
//     else if(i%2!=0) soo+=a[i];

//     printf("%d-%d=%d",poe,soo,poe-soo);
// }

//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

// #include<stdio.h>
// int main(){
//     int a[5],soo=0,poe=1,
//     n=sizeof(a)/sizeof(int);

//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);

//     for(int i=0;i<n;i++)
//     if(i%2==0) a[i]+=10;
//     else if(i%2!=0) a[i]*=2;  

//     for(int i=0;i<n;i++)
//     printf("%d ",a[i]);
// }

//If an array arr contains n elements, then check if the given array is a palindrome or not.
//(Example: int arr[5] = {1, 2, 3, 2, 1};
//output-> Palindrome
//int arr[5] = {1, 2, 3, 4, 2, 1};
//output-> Not Palindrome

// #include <stdio.h>
// int main() 
// {
//      int a[5] ;
//      int n=sizeof(a)/sizeof(int);
     
//      printf("enter element\n");
     
//      for(int h=0;h<5;h++)
//       scanf("%d",&a[h]);
      
//      int i=0,j=n-1;
//      while(i<=j)
//       if(a[i]==a[j]){
//       ++i;
//       --j;}
//       else break;
//    if(i>j){printf("palindrome ");}
//    else printf("not a palindrome");
// }

//WAP to Merge two arrays nums1 and nums2 (both in descending order) into a single array sorted in decreasing order.

// #include <stdio.h>
// int main() 
// {
//     int a[]={5,4,3,2,1},b[]={9,8,7,6,4};
//     int n=sizeof(a)/sizeof(int),m=sizeof(b)/sizeof(int);
//     int c[n+m];

//     for(int i=0;i<n+m;i++)
//         if(i<n)  c[i]=a[i];
//         else     c[i]=b[i-n];

//     for(int i=0;i<n+m;i++)
//     for(int j=i+1;j<n+m;j++)
//       if(c[i]<c[j]) {
//         int temp=c[j];
//         c[j]=c[i];
//         c[i]=temp;
//     }
//     for(int i=0;i<n+m;i++)
//     printf("%d ",c[i]);
// }

//WAP to find the smallest missing positive element in the sorted Array. (Take array as user input)
//(Example: //input-> 1, 2, 3, 5, 6, 7
//output-> 4
//input-> -5,-1,1, 2, 3, 4, 6
//output-> 5
// 1,2,3,4,5,8 = 6
#include<stdio.h>
int main(){
    int a[]= {1, 2, 3, 5, 6, 7};
    int n=sizeof(a)/sizeof(int);
    int s=0,k;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(k=a[0];k<a[n-1];k++){
        if(k>0)
        if(a[s]!=k) break;
        s++;
    }

 printf("%d ",k);
}


//WAP to find the first non-repeating element in the array.
//(Example: int arr[n] = {1, 1, 2, 56, 89, 56, 2, 31, 2, 89, 45, 34};
//output-> 31
// #include<stdio.h>
// int main(){
//     int a[]= {1, 1, 2, 56, 89, 56, 2, 31, 2, 89, 45, 34};
//     int n=sizeof(a)/sizeof(int),d=0;
// int j;
//     for(int i=0;i<n;i++){
//         for(j=n-1;j>=0;j--)
//             if(a[i]==a[j]) {d=0; break;}
//             else if(j==0){d=a[i]; }
//         if(d>0&& j==0) break;}
//     if(d>0) printf("%d ",d);
// }

//WAP to find and display all the common elements of two arrays 'nums1' and 'nums2'. Print -1 if there are no common elements.

// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int a[]={1,2,3,4,5,6,7},b[]={1,6,3,8},f=-1;
//     int n=sizeof(a)/sizeof(int),m=sizeof(b)/sizeof(int),v=INT_MAX;

//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             if(a[i]==b[j]&&v!=a[i]){
//                 printf("%d ",a[i]);
//                 v=a[i];
//                 f=1;
//                 }
                
//     if(f==-1) printf("%d",f);
// }
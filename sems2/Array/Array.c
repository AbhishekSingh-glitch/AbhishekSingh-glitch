// collection of similar type of data type
/*
#include<stdio.h>
int main(){
int a[5]={5,6},i=0;
int b[5]={};
// printf("%d %d %d %d %d",a[0], a[1] ,a[2] ,a[3], a[4]);
while(i<5){ printf("%d ",a[i]); i++; } 
printf("\n");i=0;
while(i<5){ printf("%d ",b[i]); i++; } 
}
*/

/*
#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++) scanf("%d",&a[i]);
    for(int i=0;i<10;i++) printf("%d ",a[i]);
}
*/

// #include<stdio.h>
// int main()
// {
//     // int a[5]={1,2,3,4,5,6,5}; // warning: excess elements in array initializer
//     // for(int i=0;i<5;i++)
//     // printf("%d ",a[i]); //1 2 3 4 5

//     int a[5];
//     for(int i=0;i<6;i++)  // access storage without chrcking its size
//         scanf("%d",&a[i]);
//     for(int i=0;i<6;i++)
//         printf("%d ",a[i]); 
// }

// print i at which a[i]<35
// #include<stdio.h>
// int main(){
//     int b;
//     scanf("%d",&b);
//     int a[b];
//     for(int i=1;i<=b;i++)
//    scanf("%d",&a[i]);

//    for(int i=1;i<=b;i++)
//    if(a[i]<35)
//    printf("%d ",i);
// }

// #include<stdio.h>
// int main(){
//     // array size should be <= 10^6 and some times it depend on 
//     int a[5],sum=0;
//     for(int i=1;i<=5;i++)
//         scanf("%d",&a[i]);

//    for(int i=1;i<=5;i++)
//         sum+=a[i];
//    printf("%d",sum);
// }


// #include<stdio.h>
// int main(){
   
//     int a[5];
//     for(int i=0;i<5;i++)
//         scanf("%d",&a[i]);

//    for(int i=0;i<4;i++)
//         a[0]+=a[i+1];
//    printf("%d",a[0]);
// }

// #include<stdio.h>
// int main(){
//     int a[5],x,f=0;
    
//     for(int i=1;i<=5;i++)
//         scanf("%d",&a[i]);

//     printf("Enter element");
//     scanf("%d",&x);

//     for(int i=1;i<=5;i++)
//         if(a[i]==x){
//     printf("%d ",i);f=1;}

//     if(f==0) printf("-1");

// }

// #include<stdio.h>
// int main(){
//     int a[5],b,cnt=0;
    
//     for(int i=0;i<5;i++)
//         scanf("%d",&a[i]);

//     scanf("%d",&b);
    
//     for(int i=0;i<5;i++)
//         if(a[i]>b)
//             cnt++;
    
//     printf("%d",cnt);
// }


// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int a[10],m=0,u=0,l=INT_MIN,k=INT_MIN;

//     for(int i=0;i<5;i++)
//         scanf("%d",&a[i]);

//     A:
//     for(int i=0;i<5;i++){
//         if(l<a[i])
//             l=a[i];
//         u++;

//         if(k<a[i]&&a[i]!=l)
//             k=a[i];
//     }
//     if(u==5&&m==0){goto A; m++;}

//     printf("%d ",k);
// }

// #include<stdio.h>
// void fun(int *a){
//     printf("%d ",a);
// }
// int main (){
//     int a[]={1,3,2,4,5,6};
//     fun(a);
// }


// #include<stdio.h>
// int main(){

// int b,a[]={1,2,3,4,5,6};

// scanf("%d",&b);
// int n=sizeof(a)/sizeof(int);
// for(int j=0;j<n;j++)
// for(int i=j+1;i<n;i++){
//     if(b==a[j]+a[i]) printf("%d=%d+%d\n",b,a[j],a[i]);
// }

// }

// duplicate elements
// #include<stdio.h>
// int main(){
// int a[]={1,2,3,4,5,6,6};

// int n=sizeof(a)/sizeof(int);
// for(int j=0;j<n;j++)
// for(int i=j+1;i<n;i++)
//     if(a[j]==a[i]) printf("%d\n",a[j]);
// }


// sum of (even -odd) index
// #include<stdio.h>
// int main(){

// int e=0,o=0,a[]={1,2,3,4,5,6};

// int n=sizeof(a)/sizeof(int);

// for(int j=0;j<n;j++)
//     if(j%2==0)  e+=a[j];  
//     else o+=a[j];

// printf("%d",e-=o);
// }


// printing reverse of array

// #include <stdio.h>
// void p(int arr[],int n){
//   int i = 0;
//   int j = n - 1;
//   while (i <= j) {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     ++i;
//     --j;
//   }
// }

// int main() {

//   int arr[] = {3, -1, 8, 5, 4, 9, 2};
//   int n = sizeof(arr) / sizeof(int);
//   for (int i = 0; i < n; ++i)  
//     scanf("%d ", &arr[i]);
//   for (int i = 0; i < n; ++i) // actual array
//     printf("%d ", arr[i]);
  
//   printf("\n");
//   p(arr,n);
//   for (int i = 0; i < n; ++i) { // after reversing
//     printf("%d ", arr[i]);
//   }
//   return 0;
// }

// duplicate element
// #include <stdio.h>
// int main() {
//   int b = 0, a[10] ;
//   for(int i=0;i<10;i++) scanf("%d",&a[i]);
//   int n = sizeof(a) / sizeof(int);
//   printf("duplicate elements\n");
//   for (int j = 0; j < n; j++){
 
//     for (int i = j + 1; i < n; i++)
    
//       if (a[j] == a[i] && b != a[j]) {
//         printf("%d\n", a[i]);
//         b = a[j];
//       }
 
// }
// }


#include <stdio.h>
int main() {
  int b = 0, a[10],k ;
  for(int i=0;i<5;i++) scanf("%d",&a[i]);
  for(int i=0;i<5;i++) printf("%d ",a[i]);
  int n = sizeof(a) / sizeof(int);
  scanf("%d",&k);

  for (int j = 0; j < n; j++){
 
    for (int i = j + 1; i < n; i++)
    
    
      }
  for(int i=0;i<5;i++) printf("%d ",a[i]);
}



// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the size of the matrix\n");
//     scanf("%d%d",&r,&c);
//     int a[r][c],i,j,t,t2;

//     for(int i=0;i<r;i++)
//         for(int j=0;j<c;j++)
//             scanf("%d",&a[i][j]);

//     for( i=0;i<r*c;i++){
//         if(a[0][i]==0)
//         t=i;
//         for(int j=0;j<c;j++){
//             a[j][i]=0;
//             a[t][j]=9;
//         }
//     }

//         printf("\n");
//     for(i=0;i<r;i++) { 
//         for(j=0;j<c;j++) 
//             printf("%d ",a[i][j]);
//         printf("\n");}   
// }


// #include <stdio.h>
// int main() {
//     int a[5]={1,2,3,4,5};
//     int s=0,e=5-1,m,x;
//     scanf("%d",&x);
    
//     while(s<=e){
//         m=(s+e)/2;
//         if(x<a[m])
//             e=m-1;
//         else if(x>a[m])
//             s=m+1;
//         else {
//             printf("element found at index=%d",m);
//             break;
//         }
//         }
//         if(s>e) printf("element not found");
//     }

// #include <stdio.h>
// int main() {
// 	int c,d;
// 	printf("enter matrix size\n");
// 	scanf("%d%d",&c,&d);
//   int a[c][d] ;
// printf("Enter elements of matrix\n");
//   for (int i = 0; i < c; i++) {
//     for (int j = 0; j < d; j++)
//      scanf("%d",&a[i][j]);
 
//   }

//   for (int i = 0; i < c; i++)
//     for (int j = 0; j < i; j++) {
//       int temp = a[i][j];
//       a[i][j] = a[j][i];
//       a[j][i] = temp;
//     }
    

//   for (int i = 0; i < c; i++)
//     for (int j = 0; j <=(d-1)/2; j++) {
    	
//       int temp = a[i][d-1-j];
//       a[i][d-1-j] = a[i][j];
//       a[i][j] = temp;
      
     
//     }

//   printf("\n");
//   for (int i = 0; i < c; i++) {
//     for (int j = 0; j < d; j++)
//       printf("%d ", a[i][j]);
//     printf("\n");
//   }
// }


#include <stdio.h>

int main() 
{
    
  int  a[2] = {1,3},b[1] = {2};
  int n=sizeof(a)/sizeof(int);
  int m=sizeof(b)/sizeof(int);
  int c[n+m],k=0,i=0,j=0;
  float q,w;
    while(i<n&&j<m){
        if(a[i]<b[j]) {
            c[k]=a[i];
            i++;}
        else{
            c[k]=b[j];
            j++;}
        ++k;
    }

    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        ++k;
    }
    i=0,j=n+m-1;
    while(i<=j){
        q=c[i];
        w=c[j];
        i++;
        j--;
    }
    q=(q+w)/2;
    printf("%f",q);
}
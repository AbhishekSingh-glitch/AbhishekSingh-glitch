// of 0,1
// #include<stdio.h>
// int main(){
//     int n,a[]={1,1,0,1,1,0,1,0,0,0,0};
//     n=sizeof(a)/sizeof(int);
//     int b=0,ar[n];
//     for(int j=0;j<n;j++)
//         if(a[j]==0)
//         b++;
        
//     for(int i=0;i<n;i++) 
//         if(i<b) ar[i]=0;
//         else    ar[i]=1;
//     for(int i=0;i<n;i++)
//     printf("%d ",ar[i]);
// }

//OR
// #include<stdio.h>
// int main(){
//     int n,a[]={1,0,0,0,1,1,0,1,1};
//     n=sizeof(a)/sizeof(int);
//     int i=0,j=n-1;
//     while(i<=j){
//         if(a[i]==1&&a[j]==0) {
//             a[i]=0;
//             a[j]=1;
//             ++i;--j;}
//         else if(a[i]==0&&a[j]==1){ ++i; --j;}
//         else if(a[i]==1&&a[j]==1) --j;
//         else if(a[i]==0&&a[j]==0) ++i;
       
//     }
//     for(int i=0;i<n;++i)
//         printf("%d ",a[i]);
// }

//0,1,2
// #include<stdio.h>
// int main(){
//     int n,a[]={1,2,1,2,1,0,1,0,2,0,0,1};
//     n=sizeof(a)/sizeof(int);
//     int b=0,c=0,ar[n];
    
//     for(int j=0;j<n;j++)
//         if(a[j]==0)      b++;
//         else if(a[j]==1) c++;
        
//     for(int i=0;i<n;i++) 
//         if(i<b)        ar[i]=0;  //a[i]=0;
//         else if(i<c+b) ar[i]=1;  //a[i]=1;
//         else           ar[i]=2;  //a[i]=2;
        
//     for(int i=0;i<n;i++)
//     printf("%d ",ar[i]);   //a[i];
// }
// OR

// #include<stdio.h>
// int main(){
//    int arr[] = {2,2,0,1,2,1,2,0,2,2,1,2,1,0,1};
//    int n =sizeof(arr)/sizeof(int);
//    int l=0,m=0,h=n-1;
//    while(m<=h){
//        if(arr[m]==2){
//            arr[m]=arr[h];
//            arr[h]=2;
//            --h;
//        }
//        else if(arr[m]==0){
//            arr[m]=1;arr[l]=0; 
//            ++m;
//            ++l;
//        }
//        else if(arr[m]==1)  ++m;
//    }
//    for(int i=0; i<n; ++i)
//        printf("%d ",arr[i]);
//    return 0;
// }

//asscending 
// #include<stdio.h>
// int main(){
//     int a[]={8,4,3,6,8,3,9,4,45};
//     int n=sizeof(a)/sizeof(int);
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n-1;j++)
//             if(a[j]>a[j+1]){
//                 int temp =a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//     for(int i=0;i<n;i++)
//     printf("%d ",a[i]);
// }

// descending 
// #include<stdio.h>
// int main(){
//     int a[]={8,4,3,6,8,3,9,4,45};
//     int n=sizeof(a)/sizeof(int);
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n-1;j++)
//             if(a[j]<a[j+1]){
//                 int temp =a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//     for(int i=0;i<n;i++)
//     printf("%d ",a[i]);
// }

// #include<stdio.h>
// int main(){
//     int a[]={1,3,5,7},b[]={2,4,6,8};
//     int i=0,j=0,o=0;
//     int n=sizeof(a)/sizeof(int);
//     int m=sizeof(b)/sizeof(int);
// int k[n+m];
//     while(i<n&&j<m){
//         if(a[i]<b[j])
//     }
//     while(i<n)
//     while(j<m)
// for(int i=0;i<s;i++) printf("%d ",k[i]);
// }

// #include<stdio.h>
// int main(){
//     int a[]={12,8,41,60,2,49,16,28,21};
//     int s=sizeof(a)/sizeof(int);
//     int ar[s];
//     for(int i=0;i<s-1;i++){
//         for(int j=i+1;j<s;j++){
//             if(a[i]<a[j]&&a[j-1]<a[j])
//             ar[j-1]=a[j];
//         }
//     }
//     ar[s]=-1;
//     for(int i=0;i<s-1;i++)  printf("%d ",ar[i]);
// }





// next least element 


// 

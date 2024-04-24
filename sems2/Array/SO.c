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

// #include<stdio.h>
// int main(){
//     int n,a[]={1,0,0,0,1,1,0,1,1};
//     n=sizeof(a)/sizeof(int);
//     int i=0,j=n-1;
//     while(i<=j){
//         if(a[i]==1&&a[j]==0) {
//            a[i]=0;
//            a[j]=1;
//            ++i;--j;}
//         if(a[i]==0&&a[j]==1){ ++i; --j;}
//         // if(a[i]==1&&a[j]==1)
//         --j;
//         if(a[i]==0&&a[j]==0) 
//         ++i;
       
//     }
// for(int i=0;i<n;++i)
//     printf("%d ",a[i]);
// }

//0,1,2
// #include<stdio.h>
// int main(){
//     int n,a[]={1,2,1,2,1,0,1,0,2,0,0,1};
//     n=sizeof(a)/sizeof(int);
//     int b=0,c=0,ar[n];
    
//     for(int j=0;j<n;j++)
//         if(a[j]==0)
//         b++;
//     else if(a[j]==1) c++;
        
//     for(int i=0;i<n;i++) 
//         if(i<b) ar[i]=0;
//         else if(i<c+b) ar[i]=1;
//         else    ar[i]=2;
        
//     for(int i=0;i<n;i++)
//     printf("%d ",ar[i]);
// }
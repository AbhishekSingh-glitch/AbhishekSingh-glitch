#include<stdio.h>
int main(){
    int n,a[]={1,2,1,2,1,0,1,0,2,0,0,1};
    n=sizeof(a)/sizeof(int);
    int b=0,c=0,ar[n];
    
    for(int j=0;j<n;j++)
        if(a[j]==0)
        b++;
    else if(a[j]==1) c++;
        
    for(int i=0;i<n;i++) 
        if(i<b) ar[i]=0;
        else if(i<c+b) ar[i]=1;
        else    ar[i]=2;
        
    for(int i=0;i<n;i++)
    printf("%d ",ar[i]);
}
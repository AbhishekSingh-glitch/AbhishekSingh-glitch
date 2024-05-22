#include<stdio.h>
int main(){
    int n,a[]={1,1,0,1,1,0,1,0,0};
    n=sizeof(a)/sizeof(int);
    int b=0,ar[n];
    for(int j=0;j<n;j++)
        if(a[j]==0)
        b++;
        
    for(int i=0;i<n;i++) {
    if(i<b) ar[i]=0;
    else if(i>=b )ar[i]=1;
    // for(int i=0;i<n;i++)
    printf("%d ",ar[i]);}
}
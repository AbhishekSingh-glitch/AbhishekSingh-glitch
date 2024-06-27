#include<stdio.h>
int main(){
    int a[10],i;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    int l=a[0];
    for(i=0;i<5;i++)
        if(l>a[i])
            l=a[i];

    printf("%d ",l);
}
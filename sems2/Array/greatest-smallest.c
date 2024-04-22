// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int a[10],l=INT_MIN,i;

//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for(i=0;i<10;i++)
//     if(l<a[i])
//     l=a[i];

//     printf("%d ",l);
       
// }

// smallest 
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
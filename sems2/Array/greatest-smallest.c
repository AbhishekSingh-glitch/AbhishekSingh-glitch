// #include<stdio.h>
// int main(){
//     int a[10],l=0,i=0;

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
    int a[10],l=a[0],i;

    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<10;i++)
    if(l>a[i])
    l=a[i];

    printf("%d ",l);

}
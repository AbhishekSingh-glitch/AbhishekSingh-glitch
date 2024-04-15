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

#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++) scanf("%d",&a[i]);
    for(int i=0;i<10;i++) printf("%d ",a[i]);
}
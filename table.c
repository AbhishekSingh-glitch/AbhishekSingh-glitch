#include<stdio.h>
int main ()
{
    int n;
    int i;
    printf("Which table you want\n");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n)  //increase the zeroes you want
    {
        printf("%d\n",i);
    }
    return 0;
}
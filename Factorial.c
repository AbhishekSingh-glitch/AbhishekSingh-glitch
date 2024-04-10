#include<stdio.h>
int main()
{
    int a,b=1;
    printf("enter no. to find factorial ");
    scanf("%d",&a);
    while(a>0){
        b*=a;
        a--;
    }
    printf("%d",b);
    return 0;
}

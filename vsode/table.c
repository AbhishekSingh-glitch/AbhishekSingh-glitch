#include<stdio.h>
int main ()
{
    int n;
    int i;
    printf("Which table you want\n");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n)  //increase the zeroes you want
        printf("%d\n",i);
    return 0;
}

// OR
#include<stdio.h>
int main(){
    int a,b,c=1;
    printf("enter the no. of which you want table ");
    scanf("%d",&a);
    printf("upto how much ");
    scanf("%d",&b);

    while(b>=c){
        int d=a;
        d*=c;
        ++c;
        printf("%d\n",d);
    }
    return 0;
}
// factor of any no. gets sum except that no. and = to that no. is perfect number

#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    for(b=1;b<a;b++) 
        if(a%b==0)
            sum+=b;
    
    if (sum==a) printf("perfect no.");
    else printf("not a perfect no.");
    return 0;
}

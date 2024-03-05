#include<stdio.h>
int main ()
{
    int a,n, r;
    scanf("%d", &a);
    while (a != 0) {
        r = a % 10;
        n = n * 10 +r;
        a /= 10;
    }
    printf("%d", n);
    return 0;
}

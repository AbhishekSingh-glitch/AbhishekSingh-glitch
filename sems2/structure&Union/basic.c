#include<stdio.h>
int main(){
    struct rnc{
        int r;
        char n[20];
    } a;
    scanf("%d ",&a.r);
    scanf("%[^\n]s",a.n);    //%[^\n]s ,so string can take spaces too
    printf("%d\n%s",a.r,a.n);
}
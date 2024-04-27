#include<stdio.h>
int main(){
    struct rnc{
        int r;
        char n[20];
    } a;
    scanf("%d %s",&a.r,a.n);  // 1 Abhishek Singh
    printf("%d %s",a.r,a.n);  // 1 Abhishek
}
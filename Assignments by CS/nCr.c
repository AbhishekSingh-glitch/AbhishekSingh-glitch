#include <stdio.h>

int f(int n) {
    int b=1;
    while(n>0){
        b*=n;
        n--;
    }
    return b;
}

int main() {
    int n, r;
    printf("enter 'n' and 'r'\n");
    scanf("%d%d", &n, &r);
    printf("%d ",f(n) / (f(r) * f(n - r)));
}
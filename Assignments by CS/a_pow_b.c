#include <stdio.h>

int pow(int a, int b) {
    if (b < 1) return 1;
    return a * pow(a, --b);
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", pow(a, b));
}
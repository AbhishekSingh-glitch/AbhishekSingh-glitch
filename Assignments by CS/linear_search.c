#include <stdio.h>
int main() {
    int a[5], x, f = 0;

    for (int i = 0; i <5; i++)
        scanf("%d", &a[i]);

    printf("Enter element to find ");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++)
        if (a[i] == x) {
            printf("Element no. %d on which data in found\n", i);
            f = 1;
        }

    if (f == 0)
        printf("-1");
}
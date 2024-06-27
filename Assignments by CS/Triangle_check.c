#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter 3 no. ");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2) {
        printf("it can be a");
        if (s1 == s2 && s1 == s3 && s3 == s2)
            printf(" Equilateral triangle");
        else if (s1 == s2 || s2 == s3 || s1 == s3)
            printf(" Isosceles triangle");
        else
            printf(" Scalene traingle");
    }
    else {
        printf("not a triangle");
    }
}
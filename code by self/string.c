#include <stdio.h>

int main() {
    int i = 0;
    char a[100];

    while (i < 100) {
        scanf("%c", &a[i]); 
        if (a[i] == '\n') {
            break;
        }
        i++;
    }

    i = 0;
    while (i < 100) {
    if (a[i] != '\n') {
        printf("%c", a[i]); 
    }
    else {
        break;
    }
    i++;
    }
    return 0;
}
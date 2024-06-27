#include <stdio.h>
#include <unistd.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
void customSleep(int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000; // Convert milliseconds to seconds
    ts.tv_nsec = (milliseconds % 1000) * 1000000; // Convert remaining milliseconds to nanoseconds

    // customSleep for the specified time
    nanosleep(&ts, NULL);
}
int main() {
    int b;
    scanf("%d", &b);

    for (int i = 1; i < b; i++) {
        customSleep(1);
        printf("|");
        for (int z = 1; z < b; z++)
            if (z < i)
                printf(" ");  

            customSleep(1);
        printf("\\");
       
        printf("\n");
    }
    printf("|");
  
    for (int i = 1; i < b; i++){
        customSleep(1);
        printf("_");}
        
    customSleep(1);
    printf("\\");
  
    printf("\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include<string.h>

int main() {
  while (1) {
    time_t t;
    struct tm *tm;

    t = time(0);
    tm = localtime(&t);
    
    int hour = tm->tm_hour;
    char period[3]="AM";
    if (hour >= 12) {
        if (hour > 12)
            hour -= 12;
        strcpy(period, "PM");
    }
    printf("%d:%02d:%02d %s\n", hour, tm->tm_min, tm->tm_sec, period);
    sleep(1);
    system("cls");
  }
  return 0;
}
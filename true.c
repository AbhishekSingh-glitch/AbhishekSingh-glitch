// #include<stdio.h>

// int main (){
//   int a; scanf("%d",&a);
//   for(int i=0;i<a;i++){
//     for(int j=a;j>i+1;j--)           
//       printf("*");         

//     for(int j=1;j<i+i;j++)       
//       printf(".");  

//     for(int j=a;j>i+1;j--)
//       printf("*"); 
                    
//       printf("\n");             
//   }            
//   for(int i=0;i<=a;i++){       
//     for(int j=0;j<i+1;j++)           
//       printf("^");           
        
//     for(int j=a+i;j>=i;j--) 
//       printf("-");

//     for(int j=0;j<i;j++)
//       printf("*");

//     printf("\n");
//   }                  
// }







// #include<stdio.h>

// int main (){
//     int a=4;                
//     for(int i=0;i<a;i++){
//         for(int j=0;j<i;j++)      //  * * * * *
//         printf(" ");              //   * * * * 
//         for(int j=a;j>=i;j--){    //    * * * 
//             printf("# ");         //     * * 
//         }                         //      * 
//         printf("\n");             //     * *
//     }                             //    * * *  
//     for(int i=0;i<=a;i++){        //   * * * *
//         for(int j=a;j>i;j--)      //  * * * * *
//         printf(" ");              
//         for(int j=0;j<=i;j++){    
//             printf("* ");         
//         }                         
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main() {
//   int i = 0, j = 0;
//   int a;
//   printf("Enter the no. ");
//   scanf("%d", &a);
//   for (int i = 1; i < 2 * a; i++) {
//     for (int j = 1; j <= a; j++) {
//       if (i + j == a + 1)
//         printf("*");
//       else
//         printf("#");
        
//     }
//     for (int j = 1; j < 2*a; j++)
//     if(i+j>=2*a-1) if(i>1&&i<=a &&j>a) printf("*");
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// #include<string.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>

// int main() {

//   while (1) {

//     time_t t;
//     struct tm *tm;

//     t = time(0);
//     tm = localtime(&t);
//     sleep(0);
    
//     int hour = tm->tm_hour;
//     char period[3]="AM";

//     if (hour >= 12) {
//         if (hour > 12)
//             hour -= 12;
//         strcpy(period, "PM");
    
//     }

//     printf("%d:%02d:%02d %s\n", hour, tm->tm_min, tm->tm_sec, period);
//     sleep(1);
//     system("cls");
//   }

//   return 0;
// }

#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
void customSleep(int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000; // Convert milliseconds to seconds
    ts.tv_nsec = (milliseconds % 1000) * 1000000; // Convert remaining milliseconds to nanoseconds

    // Sleep for the specified time
    nanosleep(&ts, NULL);
}

int main() {
char a[]="Selecting colors not simply for play, but to infuse the world with their presence, speaks to a profound understanding of the human psyche and the intricate interplay between perception and emotion. It signifies a conscious endeavor to enrich our environments with the nuanced tapestry of feelings and associations that colors evoke, transcending mere aesthetics to touch upon the very essence of our shared human experience. It is an expression of the universal longing to imbue our surroundings with depth, meaning, and soulful resonance, inviting contemplation, connection, and transformation in the vibrant hues that adorn our lives.";
  int n=sizeof(a)-1;
  for(int i=0;i<n;i++) {

    customSleep(80);
    printf("%c",a[i]);
  }
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char a;
    int b;
    srand(time(NULL));
    b=rand()%3;
    printf("rock=R,paper=P,scissor=S\nchosse your option\n");
    scanf("%c",&a);
    // printf("%c\n",a);
    
    
    if (b==0) printf("Rock\n");
    else if (b==1) printf("Paper\n");
    else printf("Scissor\n");

    
    if((a=='R' && b==0)||(a=='P' && b==1)||(a=='S' && b==2))
        printf("draw");
    else if((a=='R' && b==1)||(a=='P' && b==2)||(a=='S' && b==0))
        printf("Computer wins");
    else   printf("You won");
    
    return 0;
}

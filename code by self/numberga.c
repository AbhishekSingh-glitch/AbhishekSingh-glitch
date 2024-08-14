#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int s;

void game_rule();

void swpS(int *bin,int f){        
    int e = bin[f];
    bin[f]=bin[f+s];
    bin[f+s]=e;
}

void swpW(int *bin,int f){
    int e = bin[f];
    bin[f]=bin[f-s];
    bin[f-s]=e;
}

void swpA(int *bin,int f){         
    int e = bin[f];
    bin[f]=bin[f-1];
    bin[f-1]=e;
}

void swpD(int *bin,int f){
    int e = bin[f];
    bin[f]=bin[f+1];
    bin[f+1]=e;
}

int rtside(int f,int s1){
    for(int i=1;i<=s1;i++){
        if(f==(s1*i)-1){
            return 1;
        }
    }
    return 0;
}
int find(int *bin){
    for(int j=0;j<s*s;j++)
        if(bin[j]==s*s) return j;

}

int main(){
    printf("Enter size "); 
    scanf("%d",&s);
    srand(time(NULL));
    
    int bin[s*s];
    char aeke;
    
    for (int i=0;i<s*s;i++){
        int ran=rand()%(s*s)+1;
        int cnt=0;
        for(int j=0;j<i;j++)
            if(bin[j]==ran) cnt++;
        if (cnt < 1)
            bin[i] = ran;
        if (cnt > 0)    i--;
    }
    game_rule();
    //scanf(" %c",&aeke);
    aeke=getch();
    int f=-1,e,q=100*s;
    while(q){
        system("cls");
        printf("remaining moves %d\n",q);
        for(int i=0;i<s;i++)
        printf("--------");
        printf("-\n");
        for(int i=0;i<s*s;i++){
            if(i%s==0&&i>0) printf("|\n"); 
            if(bin[i]!=s*s)
                printf("|  %d\t",bin[i]);
            else printf("|  \t");
        }
        printf("|\n");
        for(int i=0;i<s;i++)
        printf("--------");
        printf("-\n");
        int y=0;
        for (int i=0; i<s*s-1;i++){
            if (bin[i]<bin[i + 1]){
                y++;
            }
        }
        if (y == s * s - 1){
            printf("\nU won");
            break;
        }
        // printf("\nenter arrow ");
        //scanf("%c",&aeke);
        aeke=getch();
        // system("cls");
        
            // for up line 
            if(aeke=='w'||aeke=='W'){
                f=find(bin);
                if(!(f>=0&&f<=s-1)){
                swpW(bin,f);
                q--;}
            }

            // for down line
            else if(aeke=='s'||aeke=='S'){
                f=find(bin);
                if(!(f>=(s*(s-1))&&f<=(s*s)-1)) {
                swpS(bin,f);
                q--;}
            }

            // for left line
            else if(aeke=='a'||aeke=='A'){
                f=find(bin);
                if(!(f%s==0)) {
                swpA(bin,f);
                q--;}
            }

            // for right line
            else if(aeke=='d'||aeke=='D'){
                f=find(bin);
                if(!(rtside(f,s))){
                swpD(bin,f);
                q--;}
            }
            else if(aeke=='e'||aeke=='E') return 0;
        
    }

}

void game_rule(){
    int i,j;
    printf("\t\tRULE OF THIS GAME:\n\n");
    printf("1.You can move only 1 step at a time by arrow key\n");
    printf("Move Up    : w or W\n");
    printf("Move Down  : s or S\n");
    printf("Move Left  : a or A\n");
    printf("Move Right : d or D\n\n");
    printf("2.You can move number at empty position only\n\n");
    printf("3.For each valid move : your total number of move will decreased by 1\n\n");
    printf("4.Wining situation : number in %d*%d matrix should be in order from 1 to %d\n\n",s,s,s*s-1);
    printf("\tWinning situation:\n");
    for(int i=0;i<s;i++)
    printf("-----");
    printf("-\n");
    for(i=0;i<s;++i)
    {
        printf("|");
        for(j=0;j<s;++j)
        {
            if(i!=s-1||j!=s-1)
            {
                printf(" %-2d |",s*i+j+1);
            }
            else
            {
               printf("    |"); 
            }
        }
        printf("\n");
    }
    for(int i=0;i<s;i++)
    printf("-----");
    printf("-\n\n");
    printf("5.you can exit the game at any time by pressing 'e' or 'E'\nSo try to win the game in minimum numbers of move\n\n");
    printf("\tHappy gaming , Good Luck\n\n");
    printf("Press any key to start...\n");
    
}
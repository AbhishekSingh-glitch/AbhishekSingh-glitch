// make input 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void game_rule();

void swpS(int *bin,int f){        
    int e = bin[f];
    bin[f]=bin[f+4];
    bin[f+4]=e;
}

void swpW(int *bin,int f){
    int e = bin[f];
    bin[f]=bin[f-4];
    bin[f-4]=e;
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

int find(int *bin){
    for(int j=0;j<16;j++)
        if(bin[j]==16) return j;

}

int main(){
    srand(time(NULL));

    int bin[16]={0};
    char aeke;
    printf("Enter your name ");
    char name[20];
    scanf("%[^\n]s",name);

    game_rule();
    for (int i=0;i<=15;i++){
        int ran=rand()%16+1;
        int cnt=0;
        for(int j=0;j<i;j++)
            if(bin[j]==ran) cnt++;
        if (cnt < 1){ 
            bin[i] = ran;
        }
        if (cnt > 0)    i--;
    }
    scanf(" %c",&aeke);

    int f=-1,e,q=400;
    while(q){
        system("cls");
        printf("remaining moves %d\n",q);
        for(int i=0;i<=15;i++){
            if(i%4==0&&i>0) printf("\n"); 
            if(bin[i]!=16)
                printf("%d\t",bin[i]);
            else printf("  \t");
        }
        printf("\nenter a no. ");
        scanf("%c",&aeke);

           if(aeke=='s'||aeke=='S'){
                f=find(bin);
                if(!(f>=12)) {
                swpS(bin,f);
                q--;}
            }

            if(aeke=='a'||aeke=='A'){
                f=find(bin);
                if(!(f%4==0)) {
                swpA(bin,f);
                q--;}
            }
        
            if(aeke=='d'||aeke=='D'){
                f=find(bin);
                if(f!=3&&f!=7&&f!=11&&f!=15){
                swpD(bin,f);
                q--;}
            }
            
            if(aeke=='w'||aeke=='W'){
                f=find(bin);
                if(!(f>=0&&f<=4)){
                swpW(bin,f);
                q--;}
            }

            if(aeke=='e'||aeke=='E') return 0;
       
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
    printf("4.Wining situation : number in 4*4 matrix should be in order from 1 to 15\n\n");
    printf("\tWinning situation:\n");
    printf("---------------------\n");
    for(i=0;i<4;++i)
    {
        printf("|");
        for(j=0;j<4;++j)
        {
            if(i!=3||j!=3)
            {
                printf(" %-2d |",4*i+j+1);
            }
            else
            {
               printf("    |"); 
            }
        }
        printf("\n");
    }
    printf("---------------------\n\n");
    printf("5.you can exit the game at any time by pressing 'e' or 'E'\nSo try to win the game in minimum numbers of move\n\n");
    printf("\tHappy gaming , Good Luck\n\n");
    printf("Press any key to start...");
    
}
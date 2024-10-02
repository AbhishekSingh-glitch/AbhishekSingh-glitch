#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int s;

void game_rule();
// assign 1 to s in bin
void assign(int *bin);
// print the bin with formatting
void print(int * bin);
void printBorder();

// swap
void swap(int *bin,int f,int dir);

int canMove(int f, char side);

int rtside(int f,int s1);
int find(int *bin);
// checks that bin in sorted or not
int solved(int *bin);

char getDirection(char aeke);

int main(){
    printf("Enter size "); 
    scanf("%d",&s);
    srand(time(NULL));
    
    int bin[s*s];
    char aeke;
    assign(bin);
    
    game_rule();
    aeke=getch();
    int f=-1,e,q=100*s;
    while(q){

        // clear screen 
        printf("\033[H\033[J"); 
        printf("remaining moves %d\n",q);

        print(bin);

        e=solved(bin);
        if(e==1) return 0;

        aeke=getch();

        f=find(bin);
        char side=getDirection(aeke);
        // for up line 
        if(side == 'w'){
            if(canMove(f,'w')){
                swap(bin,f,-s);
                q--;
            }
        }
        // for down line
        else if(side == 's'){
            if(canMove(f,'s')) {
                swap(bin,f,s);
                q--;
            }
        }
        // for left line
        else if(side == 'a'){
            if(canMove(f,'a')) {
                swap(bin,f,-1);
                q--;
            }
        }
        // for right line
        else if(side == 'd'){
            if(canMove(f,'d')){
                swap(bin,f,1);
                q--;
            }
        }
        // to end game
        else if(aeke=='e'||aeke=='E') 
            return 0;
    }
}

void assign(int *bin){

    int i,index,last_index=(s*s)-1;

    int arr[s*s];
    for(i=0;i<s*s;++i){
        arr[i]=i+1;
    }

    for(int i=0;i<s*s;++i){
        index=rand()%(last_index+1);
        bin[i]=arr[index];
        arr[index]=arr[last_index--];
    }
}

int solved(int *bin){
    int y=0;
    for (int i=0; i<s*s-1;i++){
        if (bin[i]<bin[i + 1]){
            y++;
        }
    }
    if (y == s * s - 1){
        printf("\nU won");
        return 1;
    }
}

void swap(int *bin, int f, int dir) {
    int e = bin[f];
    bin[f] = bin[f + dir];
    bin[f + dir] = e;
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

int canMove(int f, char side) {
    switch(side) {
        case 'w': return !(f >= 0 && f <= s - 1);
        case 's': return !(f >= (s * (s - 1)) && f <= (s * s) - 1);
        case 'a': return !(f % s == 0);
        case 'd': return !(rtside(f, s));
        default: return 0;
    }
}
char getDirection(char aeke) {
    
    switch(aeke) {
        case 'w': case 'W': case '8': case 72: // 'w', 'W', '8', up arrow (72)
            return 'w';
        case 's': case 'S': case '2': case 80: // 's', 'S', '2', down arrow (80)
            return 's';
        case 'a': case 'A': case '4': case 75: // 'a', 'A', '4', left arrow (75)
            return 'a';
        case 'd': case 'D': case '6': case 77: // 'd', 'D', '6', right arrow (77)
            return 'd';
        default:
            return '\0'; // Invalid input
    }
}

void game_rule(){
    int i,j;
    printf("\t\tRULE OF THIS GAME:\n\n");
    printf("1.You can move only 1 step at a time by arrow key\n");
    printf("Move Up    : w or W or 8 or %c\n",24);
    printf("Move Down  : s or S or 2 or %c\n",25);
    printf("Move Left  : a or A or 4 or %s\n","<-");
    printf("Move Right : d or D or 6 or %c\n\n",26);
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
    printf("5.You can exit the game at any time by pressing 'e' or 'E'\nSo try to win the game in minimum numbers of move\n\n");
    printf("\tHappy gaming , Good Luck\n\n");
    printf("Press any key to start...\n");
    
}

void print(int * bin){
    printBorder();
    
    for(int i=0;i<s*s;i++){
        if(i%s==0&&i>0) printf("|\n"); 
        if(bin[i]!=s*s)
            printf("|  %d\t",bin[i]);
        else printf("|  \t");
    }
    printf("|\n");
    
    printBorder();
}

void printBorder() {
    for(int i = 0; i < s; i++)
        printf("--------");
    printf("-\n");
}

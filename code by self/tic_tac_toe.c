#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void restart(char *bin,int *t ,int *r,int *q,int *ele,int *x,int *y,int *ar,int *lst_idx);
void assign(char* bin,int x,int y,int *t);
void printbin(char *bin,int x,int y,int *t);
void swap(int* a,int i,int j);
void ask(int *choice);

int prir(char *bin,char sign);
int pril(char *bin,char sign);
int prih(char *bin,char sign,int pos);
int priv(char *bin,char sign,int pos);
int check(char* bin,char sign,int pos);
int che(int n,int *t);
int randomNum(int lst_idx,int *ar);

int main(){
    char bin[9]={'\0'},c='e';
    int r=0,ele=0;
    int q=0,x=-1,t[9],y=-2;
    int ar[9]={0},lst_idx=9;
    int choice=0;
    srand(time(0));

    for (int i = 0; i < 9; i++)
        ar[i]=i+1;

    do{
        if(c=='e'||c=='E') 
            ask(&choice);
        restart(bin,t,&r,&q,&ele,&x,&y,ar,&lst_idx);
        printf("\033[H\033[J"); 
        printbin(bin,x,y,t);

        while (q<9){
            while(1){
                printf("\nenter no for X ");
                scanf("%d",&x);
                
                printf("\033[H\033[J"); 
                int go=che(x,t);
                printbin(bin,x,y,t);
                if(go&&(x>0&&x<=9)){  break;}
            }
            r=check(bin,'X',x-1);
            q++;
            if(choice==2){
                swap(ar,x-1, lst_idx-1);
                lst_idx--;
            }
            if(r==1||q>=8) break;


            while(1){
                if(choice==1){
                    printf("\nenter no for O ");
                    scanf("%d",&y);
                    ele=y-1;
                }
                else if(choice==2){
                    y=randomNum(lst_idx,ar);
                    ele=y;
                }
                printf("\033[H\033[J");
                int go=che(y,t);
                printbin(bin,x,y,t);
                if(go&&(y>0&&y<=9)){  break;}
            }
            r= check(bin,'O',y-1);
            if(r==1) break;

            q++;

            if(choice==2)   lst_idx--;
            
        }
        if(r!=1) printf("\t\nDraw\n");
        printf("\n\nWant to play again? Y / N\nE to change opponent\n");
        scanf(" %c",&c);
        
    }while(c=='y'||c=='Y'||c=='e'||c=='E');
}
int check(char* bin,char sign,int pos){
    int a=0;
    
    a = prih(bin, sign, pos);
    if (a==1){
        printf("\n\t%c wins", sign);
        return 1;
    }

    a = priv(bin, sign, pos);
    if (a==1){
        printf("\n\t%c wins", sign);
        return 1;
    }

    switch (pos){
    // left top
        case 0:
            a = pril(bin, sign);
            break;

        // right top
        case 2:
            a = prir(bin, sign);
            break;

        // center
        case 4:
            a = pril(bin, sign);
            if (a==1){
                printf("\n\t%c wins", sign);
                return 1;
            }
            a = prir(bin, sign);
            break;

        // left bottom
        case 6:
            a = prir(bin, sign);
            break;

        // right bottom
        case 8:
            a = pril(bin, sign);
            break;
    }
    if (a==1){
        printf("\n\t%c wins", sign);
        return 1;
    }
}
// function that checks right diagonal
int prir(char *bin,char sign){
    int cnt=0;
    for (int i = 2; i < 7; i+=2)
        if(bin[i]==sign) 
            cnt++;

    return (cnt==3?1:0);
}
// function that checks left diagonal
int pril(char *bin,char sign){
    int cnt=0;
    for (int i = 0; i < 9; i+=4)
        if(bin[i]==sign) 
            cnt++;

    return (cnt==3?1:0);
}
// function that checks for horizontal
int prih(char *bin,char sign,int pos){
    int cnt=0;
    if(pos<=2) pos= 0;
    else if(pos<=5) pos=3;
    else if(pos<=8) pos =6;

    for (int i = pos; i < pos+3; i++)
        if (bin[i] == sign)
            cnt++;

    return (cnt==3?1:0);
}
// function that checks for vertical
int priv(char *bin,char sign,int pos){
    int cnt=0;
    pos = pos % 3;

    for (int i = pos; i < pos+7; i += 3) 
        if (bin[i] == sign) 
            cnt++;

    return (cnt==3?1:0);
}
// print 
void printbin(char *bin,int x,int y,int *t){
    for (int i=0; i<9;i++){
        if (i%3==0 && i>1)  printf("\n");
        if(bin[i]=='X'||x==i+1&&y!=i+1){
            assign(bin,x,y,t);
            printf("\033[4m %c \033[0m", bin[i]);
        }
        else if(bin[i]=='O'||y==i+1&&x!=i+1){
            assign(bin,x,y,t);
            printf("\033[4m %c \033[0m", bin[i]);
        }
        else if(i<6) printf("\033[4m\033[2m %d \033[0m\033[0m",i+1);
        else printf("\033[2m %d \033[0m",i+1);
        if(i==0||i==1||i==3||i==4||i==6||i==7) printf("|");  
    }
}

// assign value with check that it is a valid positon or not
void assign(char* bin,int x,int y,int *t){

    if (x > 0&&t[x-1]<0){
        bin[x-1] ='X';
        t[x-1] = x;
    }
    else if (y > 0&&t[y-1]<0){
        bin[y-1] ='O';
        t[y - 1] = y;
    }
}
// checks that the entered position is free or not
int che(int n,int *t){
    return t[n - 1] == -1 ? 1 : 0;  // If position is -1, it's free
}

// reinitialization for next match
void restart(char *bin,int *t ,int *r,int *q,int *ele,int *x,int *y,int *ar,int *lst_idx){
    
    for(int i=0;i<9;i++){
        bin[i]='\0';
        t[i]=-1;
        ar[i]=i+1;
    }
    *r=0;
    *q=0;
    *ele=0;
    *x=-1;
    *y=-2;
    *lst_idx=9;
}

// ask oppponent type
void ask(int *choice){
    do{
        printf("\033[H\033[J"); 
        printf("1. for Vs Human   \n");
        printf("2. for Vs Computer\n");
        scanf("%d",&(*choice));
    }while((*choice)<1||(*choice)>2);
}
// swaps the gentrated number so it not come again 
void swap(int *a, int i,int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
// genrate no repeating random number
int randomNum(int lst_idx, int *ar){
    int num = 0;
    num = rand() % lst_idx;
    swap(ar, num, lst_idx - 1);  
    return ar[lst_idx - 1];
}
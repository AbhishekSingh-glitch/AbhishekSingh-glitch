#include <stdio.h>
#include <stdlib.h>

void assign(char* bin,int x,int y,int *t);
void printbin(char *bin,int x,int y,int *t);
int prir(char *bin,char sign);
int pril(char *bin,char sign);
int prih(char *bin,char sign,int pos);
int priv(char *bin,char sign,int pos);
int check(char* bin,char sign,int pos);
int che(int n,int *t);

int main(){
    char bin[9]={'\0'};
    int r=0,ele;
    int q=0,x=-1,t[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1},y=-2;
    system("cls");
    printbin(bin,x,y,t);
    while (q<9){
        while(1){
            printf("\nenter no for X ");
            scanf("%d",&x);
            ele=x-1;
            system("cls");
            int go=che(x,t);
            printbin(bin,x,y,t);
            if(go&&(x>0&&x<=9)){ x=0; break;}
        }
        r=check(bin,'X',ele);
        q++;
        if(r==1||q>=8) break;
        
        while(1){
            printf("\nenter no for O ");
            scanf("%d",&y);
            ele=x-1;
            system("cls");
            int go=che(y,t);
            printbin(bin,x,y,t);
            if(go&&(y>0&&y<=9)){ y=0; break;}
        }
        r= check(bin,'O',ele);
        if(r==1) break;
        q++;
        
    }
    if(r!=1) printf("\t\nDraw\n");
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

int prir(char *bin,char sign){
    int cnt=0;
    for (int i = 2; i < 7; i+=2)
        if(bin[i]==sign) 
            cnt++;

    if (cnt == 3) return 1;
    else return 0;
}
int pril(char *bin,char sign){
    int cnt=0;
    for (int i = 0; i < 9; i+=4)
        if(bin[i]==sign) 
            cnt++;

    if (cnt == 3) return 1;
    else return 0;
}
int prih(char *bin,char sign,int pos){
    int cnt=0;
    if(pos<=2) pos= 0;
    else if(pos<=5) pos=3;
    else if(pos<=8) pos =6;

    for (int i = pos; i < pos+3; i++)
        if (bin[i] == sign)
            cnt++;

    if (cnt == 3) return 1;
    else return 0;
}
int priv(char *bin,char sign,int pos){
    int cnt=0;
    pos = pos % 3;

    for (int i = pos; i < pos+7; i += 3) 
        if (bin[i] == sign) 
            cnt++;

    if (cnt == 3) return 1;
    else return 0;
}

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
    int yes=0;
    for(int i=0;i<9;i++){
        if(n==t[i])
        yes++;
    }
    if(yes)
    return 0;
    else return 1;
}

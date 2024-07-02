#include <stdio.h>
#include <stdlib.h>

void printbin(char *bin,int x,int y,int *t,int *t1);
int prir(char *bin,char s,char s2);
int pril(char *bin,char s,char s2);
int prih(char *bin,char s,char s2);
int priv(char *bin,char s,char s2);
int check(char* bin);
int main(){
    char bin[9]={'\0'};
    int r=0;
    int q=0,x=-1,t[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1},y=-2,t1[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
    system("cls");
    printbin(bin,x,y,t,t1);
    while (q<9){
        while(1){
        printf("\nenter no for X ");
        scanf("%d",&x);
        system("cls");
        printbin(bin,x,y,t,t1);
        if(y!=x) break;
        }
        r=check(bin);
        if(r==1) return 0;
        while(1){
        printf("\nenter no for O ");
        scanf("%d",&y);
        system("cls");
        printbin(bin,x,y,t,t1);
        if(y!=x) break;
        }
        r= check(bin);
        if(r==1) return 0;
        q++;
    }
}
int check(char* bin){
    int a=0;
    // for right side diagonal
    a= (prir(bin,'X','O'));
    if(a==1) return 1;
    // //for left side diagonal
        a=(pril(bin,'X','O'));
    if(a==1) return 1;
    // for horizontal // 1st line
    a= (prih(bin,'X','O')); 
    if(a==1) return 1;
    // 2nd line
    a=(prih(bin,'X','O'));
    if(a==1) return 1;
    // 3rd line
    a=(prih(bin,'X','O'));
    if(a==1) return 1;
    // for vertical // 1st line
    a= (priv(bin,'X','O'));
    if(a==1) return 1;
    // 2nd line
    a= (priv(bin,'X','O'));
    if(a==1) return 1;
    // 3rd line
    a=(priv(bin,'X','O'));
    if(a==1) return 1;
}

int prir(char *bin,char s,char s2){
    int rtd=0,rtd2=0;
    for (int i = 2; i < 7; i += 2){
            if(bin[i]=='X')  rtd++;
            if(rtd==3){
                printf("\n\tX wins");
                return 1;
            }
            if(bin[i]=='O') rtd2++;
            if(rtd2==3){
                printf("\n\tO wins");
                return 1;
            }
        }    rtd = 0; rtd2=0;
}
int pril(char *bin,char s,char s2){
    int lfd=0,lfd2 = 0;
    for (int i = 0; i < 9; i += 4){
            if(bin[i]==s)  lfd++;
            if(lfd==3){
                printf("\n\tX wins");
                return 1;
            }   
            if(bin[i]==s2)  lfd2++;
            if(lfd2==3){
                printf("\n\tO wins");
                return 1;
            }             
        }  lfd = 0; lfd2 = 0;
}
int prih(char *bin,char s,char s2){
    int hrz=0,hrz2=0,j=0,j2=0;
    for(int i=0;i<8;i+=3)
        if(bin[i]=='X'){
            j=i;
            break;
        }
    for (int i = j; i < j+3; i++){
        if (bin[i] == s)    hrz++;
        if (hrz == 3){
            printf("\n\tX wins");
            return 1;
        }
    }
    for(int i=0;i<8;i+=3)
        if(bin[i]=='O'){
            j2=i;
            break;
        }
    for (int i = j2; i < j2+3; i++){
        if (bin[i] == s2)    hrz2++;
        if (hrz2 == 3){
            printf("\n\tO wins");
            return 1;
        }
    }   hrz =0;  hrz2 = 0;
}
int priv(char *bin,char s,char s2){
    int vrt=0,vrt2=0,j=0,j2=0;
    for(int i=0;i<3;i++)
        if(bin[i]==s){
            j=i;
            break;
        }
    for (int i = j; i < j+7; i += 3) {
        if (bin[i] == s) vrt++;
        if (vrt== 3) {
            printf("\n\tX wins");
            return 1;
        }
    }
    for(int i=0;i<3;i++)
        if(bin[i]==s2){
            j2=i;
            break;
        }
    for (int i = j2; i < j2+7; i += 3) {
        if (bin[i] == s2) vrt2++;
        if (vrt2== 3) {
            printf("\n\tO wins");
            return 1;
        }
    } vrt = 0; vrt2 = 0;
}

void printbin(char *bin,int x,int y,int *t,int *t1){
    for (int i=0; i<9;i++){
        if (i%3==0 && i>1)  printf("\n");
        if(bin[i]=='X'||x==i+1&&y!=i+1){
            bin[i]='X';
            printf("\033[4m %c \033[0m", bin[i]);
            t[i]=i;
        }
        else if(bin[i]=='O'||y==i+1&&x!=i+1){
            bin[i]='O';
            printf("\033[4m %c \033[0m", bin[i]);
            t1[i]=i;
        }
        else if(i<7) printf("\033[4m\033[2m %d \033[0m\033[0m",i+1);
        else if(t1[i]<0) printf("\033[2m %d \033[0m",i+1);
        if(i==0||i==1||i==3||i==4||i==6||i==7) printf("|");  
    }
}
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include<conio.h>

void customSleep(int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000; // Convert milliseconds to seconds
    ts.tv_nsec = (milliseconds % 1000) * 1000000; // Convert remaining milliseconds to nanoseconds

    // customSleep for the specified time
    nanosleep(&ts, NULL);
}
int s=10;

void swpS(char *bin,int f){    
    if(bin[f+s]=='.'||bin[f+s]==0){    
    bin[f+s]=bin[f];
    bin[f]=0;}
}

void swpW(char *bin,int f){
    bin[f-s]=bin[f];
    bin[f]=0;
}

void swpA(char *bin,int f){         
    bin[f-1]=bin[f];
    bin[f]=0;
}

void swpD(char *bin,int f){
    bin[f+1]=bin[f];
    bin[f]=0;
}

int rtside(int f,int s1){
    for(int i=1;i<=s1;i++){
        if(f==(s1*i)-1){
            return 1;
        }
    }
    return 0;
}
int find(char *bin){
    for(int j=0;j<s*s;j++)
        if(bin[j]=='O') return j;

}
void print(char *bin){
    for(int i=0;i<s*s;i++){
            if(i%s==0&&i>0) printf("\n"); 
            if(bin[i]!=s*s)
                printf("  %c\t",bin[i]);
            else printf("  \t");
        }
}

int main(){
    // printf("Enter size "); 
    // scanf("%d",&s);
    srand(time(NULL));
    
    char bin[s*s];
        for(int h=0;h<s*s;h++)
            bin[h]='.';

        for(int i=80;i<90;i++)
        bin[i]='_';
    bin[s*s-s]='O';
    char aeke;

    int f=-1;
    while(1){
        system("cls");
        
        print(bin);
        
        aeke=_getch();
        // system("cls");
            INPUT:        
            // for up line 
            if(aeke=='w'||aeke=='W'){
                while(1){
                    customSleep(90);
                    system("cls");
                    f=find(bin);
                    if(!(f>=0&&f<=s-1)){
                        swpW(bin,f);
                    }
                    print(bin);
                    while (kbhit()){ 
                        aeke= _getch();
                        goto INPUT;
                    }   
                }
            }

            // for down line
            if(aeke=='s'||aeke=='S'){
                while(1){
                    customSleep(90);
                    system("cls");
                    f=find(bin);
                    if(!(f>=(s*(s-1))&&f<=(s*s)-1)){
                        swpS(bin,f);
                    }
                    print(bin);
                    while (kbhit()){ 
                        aeke=_getch();
                        goto INPUT;
                    }   
                }
            }

            // for left line
            if(aeke=='a'||aeke=='A'){
                while(1){
                    customSleep(90);
                    system("cls");
                    f=find(bin);
                    if(!(f%s==0)){
                        swpA(bin,f);
                    }
                    print(bin);
                    while (kbhit()){ 
                        aeke=_getch();
                        goto INPUT;
                    }
                }
            }

            // for right line
            if(aeke=='d'||aeke=='D'){
                while(1){
                    customSleep(90);
                    system("cls");
                    f=find(bin);
                    if(!(rtside(f,s))){
                        swpD(bin,f);
                    }
                    print(bin);
                    while (kbhit()){ 
                        aeke=_getch();
                        goto INPUT;
                    }
                }
            }

            if(aeke=='e'||aeke=='E') return 0;
        
    }

}



#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void printbin(int *bin,int *t,int *bindup,int *cnt,int *p);
char assigbingo(char *str,int r);
int main(){
    srand(time(NULL));

    int lfd=0,rtd=0,y=0,r=-1,cnt=0,p=-1,q=0;
    int bin[25],t[25]={0},no[25],bing[5][5],bindup[25],w[12]={0},vrt[5]={0},hrz[5]={0};
    char str[6]={'\0'};

    for (int i=0;i<25;i++){
        int ran=rand()%25+1;
        cnt=0;
        for(int j=0;j<i;j++)
            if(bin[j]==ran) cnt++;
        if (cnt < 1) bin[i] = ran;
        if (cnt > 0)    i--;
    }
    cnt = 0;

    for (int i=0;i<25;i++)
        bindup[i]=bin[i];

    while (q<25){
        system("cls");
        printbin(bin, t, bindup, &cnt, &p);
        
    // bingo print
        // for right side diagonal
        for (int i = 4; i < 21; i += 4){
            if(bindup[i]==0)  rtd++;
            if(rtd==5&&w[0]==0){
                r++;
                assigbingo(str, r);
                w[0] = 1;
            }
        }    rtd = 0;

        // //for left side diagonal
        for (int i = 0; i < 25; i += 6){
            if (bindup[i] == 0)    lfd++;
            if (lfd == 5&&w[1]==0){
                r++;
                assigbingo(str, r);
                w[1] = 1;
            }
        }    lfd = 0;

        // for horizontal
        // 1st line
        for (int i = 0; i < 5; i++){
            if (bindup[i] == 0)    hrz[0]++;
            if (hrz[0] == 5&&w[2]==0){
                r++;
                assigbingo(str, r);
                w[2] = 1;
            }
        }   hrz[0] = 0;

        // 2nd line
        for (int i = 5; i < 10; i++){
            if (bindup[i] == 0)   hrz[1]++;
            if (hrz[1] == 5&&w[3]==0){
                r++;
                assigbingo(str, r);
                w[3] = 1;
            }
        } hrz[1] = 0;

        // 3rd line
        for (int i = 10; i < 15; i++) {
            if (bindup[i] == 0) hrz[2]++;
            if (hrz[2] == 5&&w[4]==0){
                r++;
                assigbingo(str, r);
                w[4] = 1;
            }
        } hrz[2] = 0;

        // 4th line
        for (int i = 15; i < 20; i++){
            if (bindup[i] == 0)  hrz[3]++;
            if (hrz[3] == 5&&w[5]==0) {
                r++;
                assigbingo(str, r);
                w[5] = 1;
            }
        }  hrz[3] = 0;

        // 5th line
        for (int i = 20; i < 25; i++) {
            if (bindup[i] == 0)  hrz[4]++;
            if (hrz[4] == 5&&w[6]==0) {
                r++;
                assigbingo(str, r);
                w[6] = 1;
            }
        } hrz[4] = 0;

        // for vertical
        // 1st line
        for (int i = 0; i < 21; i += 5) {
            if (bindup[i] == 0) vrt[0]++;
            if (vrt[0]== 5&&w[7]==0) {
                r++;
                assigbingo(str, r);
                w[7] = 1;
            }
        } vrt[0] = 0;

        // 2nd line
        for (int i=1;i<22;i+=5){
            if (bindup[i]==0)    vrt[2]++;
            if (vrt[2]==5&&w[8]==0){
                r++;
                assigbingo(str, r);
                w[8] = 1;
            }
        }  vrt[2] = 0;

        // 3rd line
        for (int i = 2; i < 23; i += 5){
            if(bindup[i]==0)    vrt[1]++;
            if(vrt[1]==5&&w[9]==0){
                r++;
                assigbingo(str, r);
                w[9] = 1;
            }
        } vrt[1] = 0;

        // 4th line
        for (int i=3;i<24;i+=5){
            if(bindup[i]==0) vrt[3]++;
            if(vrt[3]==5&&w[10]==0){
                r++;
                assigbingo(str, r);
                w[10] = 1;
            }
        } vrt[3] = 0;

        // 5th line
        for (int i = 4; i < 25; i += 5){
            if (bindup[i] == 0) vrt[4]++;
            if (vrt[4] == 5&&w[11]==0){
                r++;
                assigbingo(str, r);
                w[11] = 1;
            }
        } vrt[4]=0;
        
        puts(str);

        if(str[0]=='B'&&str[1]=='I'&&str[2]=='N'&&str[3]=='G'&&str[4]=='O')
            break;
        
        printf("\nenter no. ");
        scanf("%d",&no[q]);
        cnt=no[q];
        for(int i=0;i<25;i++)
            if(no[q]==bin[i])
                p = i;
        q++;
    }
    return 0;
}

void printbin(int *bin, int *t, int *bindup, int *cnt, int *p){
    for (int i = 0; i < 25; i++){
        if (i % 5 == 0 && i > 0)  printf("\n");
        if ((t[i] >= 1 && t[i] <= 25) || (*p) == i){
            bindup[i] = 0;
            printf("\033[2m\033[9m %d \033[0m\t", bin[i]);
            t[i] = (*cnt);
        }
        else printf(" %d \t", bin[i]);
    }
}

char assigbingo(char *str, int r){
    if(str[0]=='\0'&&r==0)                                       str[0]='B';
    if(str[0]=='B'&&r==1)                                        str[1]='I';
    if(str[0]=='B'&&str[1]=='I'&&r==2)                           str[2]='N';
    if(str[0]=='B'&&str[1]=='I'&&str[2]=='N'&&r==3)              str[3]='G';
    if(str[0]=='B'&&str[1]=='I'&&str[2]=='N'&&str[3]=='G'&&r==4) str[4]='O';
}
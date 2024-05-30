#include<stdio.h>
int main(){
    int f=0,md[]={31,29,31,30,31,30,31,31,30,31,30,31};
    char mn[][10]={"January","February","March","April","May","June",
                 "July","August","September","October","November","December"};
    char w[]="SMTWtFs";

    for(int m=0;m<12;m++){
        printf("%s\n",mn[m]);

        for(int i=0;i<7;i++)
            printf("%c\t",w[i]);

        printf("\n");

        for(int d=1;d<=md[m];d++){
            printf("%d\t",d,md[d]);

            if(d%7==0)
                printf("\n");
        }

        printf("\n");
    }
}
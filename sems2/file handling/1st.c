#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *fp=0;
    fp=fopen("filename.txt","w");
    int i=0;
    char a[100];

    while (i < 100) {
        scanf("%c", &a[i]); 
        fputc(a[i],fp);
        if (a[i] == '\n') {
            break;
        }
        i++;
    }
    fclose(fp);
}
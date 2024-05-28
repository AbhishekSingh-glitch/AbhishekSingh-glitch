// This function compare two strings letter by letter and returns integer value
#include<stdio.h>
int strncmpr(char *str,char *str1){
    int i=0;
    while(str[i]!='\0'||str1[i]!='\0'){
        if(str[i]!=str1[i]){
            return str[i]-str1[i];
        }
        i++;
    }
}

int main(){
    char a[]="abcdef";
    char b[]="abcde";
    printf("%d",strncmpr(a,b));
}
// This function compare two strings letter by letter and returns integer value
#include<stdio.h>
#include<string.h>
int strncmpr(char *str,char *str1){
    int i=0;
    while(str[i]!='\0'||str1[i]!='\0'){
        if(str[i]!=str1[i]){
            return str[i]-str1[i];
        }
        i++;
    }
    if(i==0) return i;
}

int main(){
    char a[]="abcde";
    char b[]="abcdeb";
    printf("%d\n",strncmpr(a,b));
    printf("%d",strcmp(a,b));
}
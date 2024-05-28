// This function paste the whole string into targeted string
#include<stdio.h>
void strcopy(char *str,char *str1){
    int i=0;
    while(str1[i]!='\0'){
        str[i]=str1[i];
        i++;
    }
    str[i]='\0';
}

int main(){
    char a[]="abcde";
    char b[]="fghijk";
    strcopy(a,b);
    puts(a);
}
// This function finds length of a string exluding '\0' and returns integer value
#include <stdio.h>
int stringlen(char * st){
    int len=0,i=0;
    while(st[i]!='\0'){
        ++len;
        i++;
    }
    return len;
}
int main() {
    char str[]="01234 6789";
    int l=stringlen(str);
    printf("%d",l);
    return 0;
}
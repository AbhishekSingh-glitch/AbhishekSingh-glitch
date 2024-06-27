// This function reverse the whole string
#include <stdio.h>
void strrv(char *st){

    int i=0,n=0;
    while(st[i]!='\0'){  // this finds sizeof string in function
        n++;
        i++;
    }
    i=0;
    int j=n-1;

    while(i<=j){
        char p=st[i];
        st[i]=st[j];
        st[j]=p;
        ++i;
        --j;
    }
}
int main() {
    char str[]="012a345";
    int n=sizeof(str)-1;
    strrv(str);
    printf("%s",str);
    return 0;
}
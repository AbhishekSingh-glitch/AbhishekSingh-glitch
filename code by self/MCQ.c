#include <stdio.h>

int main() {
    char ques[][100]={"what is the zeroth element",
                     "what is the first element",
                     "what is the second element"};
    int rian[]={1,4,2},
    n=sizeof(rian)/sizeof(int),
    ans[n],i=0;
    while(i<n){
    printf("%s\n",ques[i]);
    scanf("%d",&ans[i]);
    i++;
    } 
    i=0;
    while(i<n){
        if(rian[i]!=ans[i]){
            printf("\n%s\n%d right answer\n",ques[i],rian[i]);
        }
        
        i++;
    }
    return 0;
}

// if all right ,marks calculator
// 
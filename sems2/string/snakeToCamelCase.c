#include<string.h>
#include<stdio.h>

void to_camel_case(char *string, char *camelCase) {
    int len = strlen(string);
    if(len<=1){
        camelCase[0] = string[0];
    }
    for (int i = 0, k = 0; i < len; i++, k++) {
        if(string[k]!= '-' && string[k] != '_') {
        
            if (string[k] >= 'a' && string[k] <= 'z' &&( string[k - 1] == '_'||string[k-1]=='-'))
                camelCase[i] = string[k] - 32;
      
            else camelCase[i] = string[k];
        }
        else  i--;     
    }
}

void main(){
    char string[100]="this_sentence_is_In_camelCase";
    char camelCase[100]={'\0'};
    to_camel_case(string,camelCase);
    printf("%s",camelCase);
    return;
}
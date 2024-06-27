#include <stdio.h>

int main() {
   char a[]="this is a sentence with some extra spaces    in between  even the the answer is true";
   int i=0,s=0;
   while(a[i]!='\0'){
       if(a[i]==' '&&a[i+1]!=' ')
       s++;
       i++;
   }
   printf("%d",s+1);
    return 0;
}
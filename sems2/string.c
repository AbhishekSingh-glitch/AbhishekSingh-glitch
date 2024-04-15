// collection of only char dat type
/*
#include <stdio.h>
#include <string.h>

int main() {
    char a[11]={'a','b','d','y','s','h','e','w','v','k','\0'};
    char b[9]="12345678\0";
    char e[9]="knowledge"; //isko chaiye \0
    // char f[]={'a','uhds'}; // '' iske andar ek hi char ho skta hai
    // char g[]; // size missing
    char h[]={'a','t','*'};
    char c[]="education";
    // char d[]={"ridflgg","duiiudgg"};
    // fgets(a, sizeof(a), stdin); // Reads input from the user
    puts(a); // Prints the input string
    puts(b);
    puts(c);
    puts(e);
    scanf("%s %c",a,&e);
    printf("%s\n%s\n",a,e);
    // puts(f);
    puts(h);
    // puts(d);
    return 0;
}
*/

#include<stdio.h>
int main(){
    char a[10];
    for(int i=0;i<10;i++) scanf("%c",&a[i]);
    for(int i=0;i<10;i++) printf("%c",a[i]);
}

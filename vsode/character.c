#include<stdio.h>
int main(){
    printf("\033[1mThis is a bold text \033[0m\n");
    printf("\033[2mThis is a dim text \033[0m\n");
    printf("\033[3mThis is a italic text \033[0m\n");
    printf("\033[4mThis is a underlined text \033[0m\n");
    printf("\033[7mThis is a highlighted text \033[0m\n");
    printf("\033[8mThis is a text \033[0m\n");
    printf("\033[9mThis is a crossed text \033[0m\n");
    printf("\033[30mThis is a black text \033[0m\n");
    printf("\033[31mThis is a red text \033[0m\n");
    printf("\033[32mThis is a green text \033[0m\n");
    printf("\033[33mThis is a yellow text \033[0m\n");
    printf("\033[34mThis is a blue text \033[0m\n");
    printf("\033[35mThis is a pueple text\033[0m\n");
    printf("\033[36mThis is a cyan text \033[0m\n");
    printf("%100s","This is a right aligned text\n");

   
}
//Created by Abhishek Singh
//24/10/2024

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node* next;
};

struct node* adTop(struct node *ptr ,int num){

    struct node* new1;
    new1=(struct node*) malloc(sizeof(struct node));

    new1->data=num;
    new1->next=ptr;
    return new1;
}

struct node* delTop(struct node *ptr){
    if(ptr->next==NULL) ptr=NULL;
    else
    ptr=ptr->next;
    return ptr;
}

void print(struct node *ptr){
    printf("\033[H\033[J");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    
    struct node *top=NULL;
    int num=0,i=0;
    char c=0;
    while(c!='e'&&c!='E'){
        i++;
        print(top);

        printf("enter number to add in stack ");
        scanf("%d",&num);

        top=adTop(top,num);

        print(top);

        printf("Want to add press y else e");
        c=getch();
    }

    c=0;
    while(i>0&&(c!='e'&&c!='E')){
        i--;
        print(top);

        printf("Want to remove 'y' or'Y'\nelse press 'e' or'E'");
        c=getch();
        
        if(c=='y'||c=='Y') top=delTop(top);

        print(top);
    }
    if(top==NULL) printf("No element in stack left\n");
    else printf("element left in stack \n");
    return 0;
}

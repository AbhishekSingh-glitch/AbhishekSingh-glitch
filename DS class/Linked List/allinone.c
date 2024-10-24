#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node* next;
};

void chartoNum(int * num,char choice);

// to insert 
struct node* addTop(struct node *ptr ,int num);

void addMid(struct node *ptr ,int num,int ele);

struct node* addEnd(struct node *ptr ,int num);

// to delete
struct node* delTop(struct node *ptr);

void delMid(struct node *ptr ,int ele);

struct node* delEnd(struct node *ptr );

void printrules();
void print(struct node* ptr);


int main(){
    printrules();

    struct node*head=NULL;
    struct node*temp=NULL;
    struct node*new =NULL;

    temp=(struct node*) malloc(sizeof(struct node));

    int num=0;
    scanf("%d",&num);

    temp->data =num;
    temp->next =NULL;
    if(head==NULL) head=temp;
    else new->next=temp;
    new=temp;

    fflush(stdin);

    char choice=0;

    while((choice!='e' && choice!='E')&& (head!=NULL)){
        
        print(head);
        printf("\n1.Insert\n2.Delete\n");
        choice=getch();

        switch (choice)
        {
            case '1':
                print(head);
                printf("\n1.head\n2.mid\n3.end ");
                do{
                    choice=getch();
                }while(choice!='1'&&choice!='2'&&choice!='3');

                if(choice=='e' && choice=='E') break;

                printf("\nEnter number to insert\n");
                scanf("%d",&num);

                switch (choice)
                {
                    case '1':
                        head=addTop(head,num);
                        break;

                    case '2':
                        print(head);
                        printf("Enter number to insert after ");
                        int ele=0;
                        scanf("%d",&ele);
                        addMid(head,num,ele);
                        break;

                    case '3':
                        new=addEnd(new,num);
                        break;

                    default: break;
                }
                break;

            case '2':
                print(head);
                printf("\n1.head\n2.mid\n3.end ");
                do{
                    choice=getch();
                }while(choice!='1'&&choice!='2'&&choice!='3');

                if(choice=='e' && choice=='E') break;

                switch (choice)
                {
                    case '1':
                        head=delTop(head);
                        break;

                    case '2':
                        print(head);
                        printf("\nEnter number to delete ");
                        int ele=0;
                        scanf("%d",&ele);
                        delMid(head,ele);
                        break;

                    case '3':
                        new=delEnd(head);
                        break;

                    default: break;
                }
                break;
            
            default : break;
        }

    }
    if(head==NULL)  printf("all elements deleted\n");
    else    print(head);
    return 0;
}

// functions

void chartoNum(int * num,/*this char is for this code only*/char choice){
    char n=0;
    *num=0;

    // this part is for this code only
    if (choice >= '0' && choice <= '9') {  
            *num *= 10;                   
            *num += choice - '0';         
            printf("%d",choice - '0');    
    } 
    //till here

    while(n!='\n'){
        
        n=getch();
        // scanf("%c",&number);
        
        if (n >= '0' && n <= '9') {  // Check if the key is a digit
            *num *= 10;              // Shift the number left by multiplying by 10
            *num += n - '0';         // Add the new digit
            printf("%d",n - '0');          // Print the entered digit
        } 
        else if (n == 8 || n == 127) {  // Backspace key handling
            if (*num > 0) {
                *num /= 10;             // Remove the last digit by dividing by 10
                printf("\b \b");        // Move cursor back, overwrite, and move back again
            }
        }
        else if (n == 13) {  // Enter key (ASCII 13) to stop input
            printf("\n");
            break;
        }
    }
}

// to insert
struct node* addTop(struct node *ptr ,int num){

    struct node* new1;
    new1=(struct node*) malloc(sizeof(struct node));

    new1->data=num;
    new1->next=ptr;
    return new1;
}

void addMid(struct node *ptr ,int num,int ele){

    struct node* new1;
    new1=(struct node*) malloc(sizeof(struct node));

    while(ptr != NULL && ptr->data != ele){
        ptr=ptr->next;
    }

    if (ptr->next==NULL) return;
    
    new1->next=ptr->next;
    ptr->next=new1;
    new1->data=num;
}

struct node* addEnd(struct node *ptr ,int num){

    struct node* new1;
    new1=(struct node*) malloc(sizeof(struct node));
    
    ptr->next=new1;
    new1->data=num;
    new1->next=NULL;

    // (*ptr)->next=new1;
    // *ptr=new1;
    
    return new1;
}

// to delete
struct node* delTop(struct node *ptr){

    ptr=ptr->next;
    return ptr;
}

void delMid(struct node *ptr ,int ele){
    struct node *prev = NULL;

    // If the head itself holds the key to be deleted
    // if (ptr != NULL && ptr->data == ele) {
    //     *head = ptr->next; // Change head to the next node
    //     free(ptr);         // Free the old head
    //     return;
    // }

    // Search for the node to be deleted and keep track of the previous node
    while (ptr != NULL && ptr->data != ele) {
        prev = ptr;
        ptr = ptr->next;
    }

    // If element was not found in the list
    if (ptr == NULL) {
        printf("Element %d not found in the list.\n", ele);
        return;
    }

    // Unlink the node from the linked list
    prev->next = ptr->next;

    // Free memory of the node being deleted
    free(ptr);
    // printf("Element %d deleted.\n", ele);

}

struct node* delEnd(struct node *ptr) {
    if (ptr == NULL) {
        return NULL;  // If the list is empty, return NULL
    }

    if (ptr->next == NULL) {
        free(ptr);  // Free the only node
        return NULL;  // Return NULL as the list is now empty
    }

    struct node *temp = ptr;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);  // Free the last node
    temp->next = NULL;  // Set the second-last node's next to NULL

    return ptr;  // Return the head of the list
}


void printrules(){
    printf("\033[H\033[J"); 
    // printf("RULES TO MANAGE LINKED LISTS\n");
    printf("Enter number to add\n");
    // printf("Don't press enter until done\n");
    // printf("Move Left  :  %s\n","<-");
    // printf("Move Right :  %s\n","->");
    
}

void print(struct node* ptr){
    printf("\033[H\033[J");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
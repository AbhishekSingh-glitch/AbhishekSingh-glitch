#include<stdio.h>
#include<stdlib.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}

void print(){
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

void scan(int *a,int *b){
    printf("Enter Values ");
    scanf("%d%d",*(&a),*(&b));
}

int main(){
    int choice,a,b;
    char m;
    do{
        system("cls");
        print();

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch (choice){
            
            case 1:
                scan(&a,&b);
                printf("%d ",add(a,b));
                break;
            case 2:
                scan(&a,&b);
                printf("%d ",sub(a,b));
                break;
            case 3:
                scan(&a,&b);
                printf("%d ",mul(a,b));
                break;
            case 4:
                scan(&a,&b);
                printf("%d ",divi(a,b));
                break;
            case 5:
                return 0;
            
            default:
                printf("Invalid entery\n");
        }

        printf("\nWant More then press (Y or y) else any key ");
        scanf(" %c",&m);
        
    }while(m=='y'||m=='Y');

    return 0;
}

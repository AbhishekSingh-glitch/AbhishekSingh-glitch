#include<stdio.h>

int main(){
    int ar[100]={0};
    int i,x,pos,n=10;

    for(i=0;i<n;i++){
        ar[i]=i+1;
    }

    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    printf("\nEnter value to insert ");
    scanf("%d",&x);

    printf("Enter Position ");
    scanf("%d",&pos);
    n++;

    for (i = 0; i >=pos; i++){
        ar[i]=ar[i-1];
    }
    
    ar[pos -1]=x;

    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
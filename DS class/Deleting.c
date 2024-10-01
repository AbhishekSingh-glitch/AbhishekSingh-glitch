#include<stdio.h>

int main(){
    int ar[100]={0};
    int i,x,n=10;

    for(i=0;i<n;i++){
        ar[i]=i+1;
    }

    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    printf("\nEnter value to delete ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if (x==ar[i]){
            for (int j = i+1; j < n; j++){
                ar[j-1]=ar[j];
            }
            n--;
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int si,s=0,e=si-1,m,x;
    
    printf("enter size of array\n");
    scanf("%d",&si);
    int a[si];

    printf("enter elements of array\n");
    for(int i=0;i<si;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter element to find\n");
    scanf("%d",&x);
    
    while(s<=e){

        m=(s+e)/2;

        if(x<a[m])
            e=m-1;

        else if(x>a[m])
            s=m+1;

        else {
            printf("element found at index=%d",m);
            break;
        }
    }
    if(s>e) printf("element not found");
}

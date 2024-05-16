
#include<stdio.h>
int main(){
    int r,c;
    printf("enter the size of the matrix\n");
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,t,t2;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for( i=0;i<r*c;i++){
        if(a[0][i]==0)
        t=i;
        for(int j=0;j<c;j++){
            a[j][i]=0;
            a[t][j]=9;
        }
    }

        printf("\n");
    for(i=0;i<r;i++) { 
        for(j=0;j<c;j++) 
            printf("%d ",a[i][j]);
        printf("\n");}   
}

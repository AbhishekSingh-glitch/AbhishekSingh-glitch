// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c,c1;
    printf("Enter size of 1st matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter column of 2nd matrix\n");
    scanf("%d",&c1);
    int a[r][c],b[c][c1],mul[r][c1];

        printf("Enter elements of 1st matrix\n");
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                scanf("%d",&a[i][j]);

        printf("Enter elements of 2nd matrix\n");   
        for(int i=0;i<c;i++)
            for(int j=0;j<c1;j++)
                scanf("%d",&b[i][j]);    
            
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                mul[i][j]=0;
                for(int k=0;k<c;k++){
                    mul[i][j]+= a[i][k]*b[k][j];
                }
            }
        }
        printf("multiplication of matrix\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++)
                printf("%d ",mul[i][j]);
            printf("\n");
        }

    return 0;
}
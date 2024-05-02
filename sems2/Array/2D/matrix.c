// #include <stdio.h>
// int main() {
//     int a[3][3],ar[3][3];
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             scanf("%d",&a[i][j]);

//     printf("\n");
     
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             ar[j][i]=a[i][j];
 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//             printf("%d ",ar[i][j]);
//         printf("\n");}
    
//     return 0;
// }

//tranpose of 
#include <stdio.h>
int main() {
    int a[3][3],ar[3][3];
    int temp;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    scanf("%d",&a[i][j]);
     printf("\n");
     
    for(int i=0;i<3;i++)
    for(int j=0;j<i;j++){
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;}
    
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    printf("%d ",a[i][j]);
    printf("\n");}
    
    
   
    return 0;
}



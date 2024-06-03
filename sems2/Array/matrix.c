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
// #include <stdio.h>
// int main() {
//     int a[3][3],ar[3][3];
//     int temp;
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             scanf("%d",&a[i][j]);

//     printf("\n");
     
//     for(int i=0;i<3;i++)
//         for(int j=0;j<i;j++){
//             temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
    
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//             printf("%d ",a[i][j]);
//         printf("\n");
//     }
    
    
   
//     return 0;
// }


// spiral print of matrix
#include <stdio.h>
int main() {
    // input 
    int q,w;
    printf("enter q ,w\n");
    scanf("%d%d",&q,&w);
    char a[q][w],i=0,j=0,o=0;
    printf("Enter elements of matrix\n");
    for (int i = 0; i < q; i++) 
        for (int j = 0; j < w; j++)
            scanf(" %c",&a[i][j]);  
    printf("\n");

    int c=q<w?q:w;
    int t=w>q?w:q;
    //printing
    while(o<4){
        for(int k=0;k<w-o-o;k++,j++)
            printf("%c! ",a[i][j]);
            
        i++;
        if(q>w)
            for(int k=0;k<t-1-o-o;k++, i++)
                printf("%c~ ",a[i][c-1-o]);
        else  
            for(int k=0;k<c-1-o-o;k++, i++)
                printf("%c~ ",a[i][t-1-o]);

        j-=2; i--;
        for(int k=0;k<w-1-o-o;k++,--j)
            printf("%c+ ",a[i][j]);

        j++; i--;
        for(int k=0;k<q-2-o-o;k++,i--)
            printf("%c* ",a[i][j]);
            
    i++;j++;
        o++;
        }
    return 0;
}
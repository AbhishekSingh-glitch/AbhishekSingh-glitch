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
            a[j][i]=temp;
        }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    
    
   
    return 0;
}

  0 1 2 3 4
0 a b c d e
1 f g h i j
2 k l m n o
3 p q r s t
4 u v w x y



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
    
    //printing
  while(o<3){  
      if(o==1) { i++,j++;}
      //1st row
    if(i==o && j==o)
        for(int k=0;k<w-o-o;k++,j++)
            printf("%c@ ",a[i][j]);
            
           // last col
    if(i==o && j==w-o){
        i++;
        for(int k=0;k<q-1-o-o;k++, i++)
            printf("%c# ",a[i][q-1-o]);
    }
      // last row
    if(i==q-o &&j==w-o){
        j-=2; i--;
        for(int k=0;k<(w-1)-o;k++,--j)
            printf("%c$ ",a[i][j]);
    }
    ///1st col
    if(i==q-1-o && j==-1){
        j++; i--;
        for(int k=0;k<q-2-o;k++,i--)
            printf("%c& ",a[i][j]);
        }
    
    // i++;j++;
    // if(i==j)
    //     printf("%c ",a[i][j]);
        o++;
        printf("\n");
}
    return 0;
}



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
    
    //printing
  while(o<5){  
      if(o==1) { i++,j++;}
      //1st row
    if(i==o && j==o)
        for(int k=0;k<w-o-o;k++,j++)
            printf("%c ",a[i][j]);
            
           // last col
    if(i==o && j==w-o){
        i++;
        for(int k=0;k<q-1-o-o;k++, i++)
            printf("%c ",a[i][q-1-o]);
    }
      // last row
    if(i==q-o &&j==w-o){
        j-=2; i--;
        for(int k=0;k<(w-1)-o-o;k++,--j)
            printf("%c ",a[i][j]);
    }
    ///1st col
    if(i==q-1-o && j==-1+o){
        j++; i--;
        for(int k=0;k<q-2-o-o;k++,i--)
            printf("%c ",a[i][j]);
        }
    if(o==4){
    i++;j++;
    if(i==j)
        printf("%c ",a[i][j]);}
        
        o++;
        // printf("\n");
}
    return 0;
}
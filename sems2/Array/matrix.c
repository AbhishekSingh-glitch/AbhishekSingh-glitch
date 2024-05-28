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



// #include <stdio.h>
// int main() {
//     // input 
//     int q,w;
//     printf("enter q ,w\n");
//     scanf("%d%d",&q,&w);
//     char a[q][w],i=0,j=0,o=0;
//     printf("Enter elements of matrix\n");
//     for (int i = 0; i < q; i++) 
//         for (int j = 0; j < w; j++)
//             scanf(" %c",&a[i][j]);  
//     printf("\n");
    
//     //printing
//   while(o<3){  
//       if(o==1) { i++,j++;}
//       //1st row
//     if(i==o && j==o)
//         for(int k=0;k<w-o-o;k++,j++)
//             printf("%c@ ",a[i][j]);
            
//            // last col
//     if(i==o && j==w-o){
//         i++;
//         for(int k=0;k<q-1-o-o;k++, i++)
//             printf("%c# ",a[i][q-1-o]);
//     }
//       // last row
//     if(i==q-o &&j==w-o){
//         j-=2; i--;
//         for(int k=0;k<(w-1)-o;k++,--j)
//             printf("%c$ ",a[i][j]);
//     }
//     ///1st col
//     if(i==q-1-o && j==-1){
//         j++; i--;
//         for(int k=0;k<q-2-o;k++,i--)
//             printf("%c& ",a[i][j]);
//         }
    
//     // i++;j++;
//     // if(i==j)
//     //     printf("%c ",a[i][j]);
//         o++;
//         printf("\n");
// }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     // input 
//     int q,w;
//     printf("enter q ,w\n");
//     scanf("%d%d",&q,&w);
//     char a[q][w],i=0,j=0,o=0;
//     printf("Enter elements of matrix\n");
//     for (int i = 0; i < q; i++) 
//         for (int j = 0; j < w; j++)
//             scanf(" %c",&a[i][j]);  
    
//     //printing
//   while(o<q/2){  
    
//       if(o==1) { i++,j++;}
//       //1st row
//     if(i==o && j==o)
//         for(int k=0;k<w-o-o;k++,j++)
//             printf("%c ",a[i][j]);
            
//            // last col
//     if(i==o && j==w-o){
//         i++;
//         for(int k=0;k<q-1-o-o;k++, i++)
//             printf("%c ",a[i][w-1-o]);
//     }
//       // last row
//     if(i==q-o &&j==w-o){
//         j-=2; i--;
//         for(int k=0;k<(w-1)-o-o;k++,--j)
//             printf("%c ",a[i][j]);
        
//     }
//     ///1st col
//     if(i==q-1-o && j==-1+o){
//         j++; i--;
//         for(int k=0;k<q-2-o-o;k++,i--)
//             printf("%c ",a[i][j]);
//         }
//     // if(o==3){
//     // i++;j++;
//     // if(i==j)
//     //     printf("%c ",a[i][j]);
//     // break;}
        
//         o++;
//         printf("\n");
// }

//     return 0;
// }

// right for square
// #include <stdio.h>
// int main() {
//     // input 
//     int q,w;
//     printf("enter q ,w\n");
//     scanf("%d%d",&q,&w);
//     char a[q][w],i=0,j=0,o=0;
//     printf("Enter elements of matrix\n");
//     for (int i = 0; i < q; i++) 
//         for (int j = 0; j < w; j++)
//             scanf(" %c",&a[i][j]);  
//     printf("\n");

//     //printing
//   while(o<5){  
     
//       //1st row
//     if(i==o && j==o)
//         for(int k=0;k<w-o-o;k++,j++)
//             printf("%c ",a[i][j]);

//            // last col
//     if(i==o && j==w-o){
//         i++;
//         for(int k=0;k<q-1-o-o;k++, i++)
//            printf("%c ",a[i][q-1-o]);
//     }
//       // last row
//     if(i==q-o &&j==w-o){
//         j-=2; i--;
//         for(int k=0;k<w-1-o-o;k++,--j)
//             printf("%c ",a[i][j]);
//     }
//     ///1st col
//         j++; i--;
//         for(int k=0;k<q-2-o-o;k++,i--)
//             printf("%c ",a[i][j]);
//     i++;j++;
//         o++;
//         }
//     return 0;
// }
// 3  
// 1 2 3
// 4 5 6
// 7 8 9

// 4
// a b c d
// e f g h
// i j k l
// m n o p

// 5
//   0 1 2 3 4
// 0 a b c d e
// 1 f g h i j
// 2 k l m n o
// 3 p q r s t
// 4 u v w x y

// all done before

// 6
//   0 1 2 3 4 5
// 0 1 2 3 4 5 6
// 1 7 8 9 0 a b
// 2 c d e f g h
// 3 i j k l m n
// 4 o p q r s t
// 5 u v w x y z

// 7

// a b c d e f g
// h i j k l m n
// o p q r s t u
// v w x y z 1 2
// 3 4 5 6 7 8 9
// 0 ! @ # $ % ^
// & * ( ) - + =

// 7X11  
// 1 2 3 4 5 6 7 8 9 0 a
// b c d e f g h i j k l
// m n o p q r s t u v w
// x y z A B C D E F G H
// I J K L M N O P Q R S
// T U V W X Y Z ! @ # $
// + * & ( ) - \ < > { }


// 8   J
// a b c d e f g h
// i j k l m n o p
// q r s t u v w x
// y z A B C D E F 
// G H I J K L M N 
// O P Q R S T U V 
// W X Y Z 1 2 3 4
// 5 6 7 8 9 0 # @

// 9  E
// 1 2 3 4 5 6 7 8 9
// a b c d e f g h i
// j k l m n o p q r
// s t u v w x y z 0
// A B C D E F G H I
// J K L M N O P Q R 
// S T U V W X Y Z +
// ! @ # $ & ^ * ( )
// < > { } [ ] - _ ?

// #include <stdio.h>
// int main() {
//     // input 
//     int q,w;
//     printf("enter q ,w\n");
//     scanf("%d%d",&q,&w);
//     char a[q][w],i=0,j=0,o=0;
//     printf("Enter elements of matrix\n");
//     for (int i = 0; i < q; i++) 
//         for (int j = 0; j < w; j++)
//             scanf(" %c",&a[i][j]);  
//     printf("\n");
// int c=q<w?q:w;
// int t=w>q?w:q;
//     //printing
//   while(o<5){  
     
//       //1st row
//     if(i==o && j==o)
//         for(int k=0;k<w-o-o;k++,j++)
//             printf("%c! ",a[i][j]);

//            // last col
//     if(i==o && j==w-o){
//         i++;
//          if(q>w){
//         for(int k=0;k<t-1-o-o;k++, i++)
//            printf("%c~ ",a[i][c-1-o]);}
//         else{   
//         for(int k=0;k<c-1-o-o;k++, i++)
//            printf("%c~ ",a[i][t-1-o]);
//     }}
//       // last row
//     if(i==q-o &&j==w-o){
//         j-=2; i--;
//         for(int k=0;k<w-1-o-o;k++,--j)
//             printf("%c+ ",a[i][j]);
//     }
//     ///1st col
//         j++; i--;
//         for(int k=0;k<q-2-o-o;k++,i--)
//             printf("%c* ",a[i][j]);
//     i++;j++;
//         o++;
//         }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     // input 
//     int q,w;
//     printf("enter q ,w\n");
//     scanf("%d%d",&q,&w);
//     char a[q][w],i=0,j=0,o=0;
//     printf("Enter elements of matrix\n");
//     for (int i = 0; i < q; i++) 
//         for (int j = 0; j < w; j++)
//             scanf(" %c",&a[i][j]);  
//     printf("\n");
// int c=q<w?q:w;
// int t=w>q?w:q;
//     //printing
//   while(o<c){  
     
//       //1st row
//     if(i==o && j==o)
//         for(int k=0;k<w-o-o;k++,j++)
//             printf("%c! ",a[i][j]);

//            // last col
//     if(i==o && j==w-o){
//         i++;
//          if(q>w){
//         for(int k=0;k<t-1-o-o;k++, i++)
//            printf("%c~ ",a[i][c-1-o]);}
//         else{   
//         for(int k=0;k<c-1-o-o;k++, i++)
//            printf("%c~ ",a[i][t-1-o]);
//     }}
//       // last row
//     if(i==q &&j==w-o){
//         j-=2; i--;
        
//         for(int k=0;k<w-1-o-o;k++,--j)
//             printf("%c+ ",a[i][j]);
//     }
//     ///1st col
//     // if(o<c/2){
//         j++;i--;
//         for(int k=0;k<t-2-o-o;k++,--i)
//             printf("%c* ",a[i][j]);
// //   }
//     i++;j++;
//         o++;
//         }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     // input 
//     int q,w;
//     printf("enter q ,w\n");
//     scanf("%d%d",&q,&w);
//     char a[q][w],i=0,j=0,o=0;
//     printf("Enter elements of matrix\n");
//     for (int i = 0; i < q; i++) 
//         for (int j = 0; j < w; j++)
//             scanf(" %c",&a[i][j]);  
//     printf("\n");
// int c=q<w?q:w;
// int t=w>q?w:q;
//     //printing
//   while(o<5){  
     
//       //1st row
//     if(i==o && j==o)
//         for(int k=0;k<w-o-o;k++,j++)
//             printf("%c! ",a[i][j]);

//            // last col
//     if(i==o && j==w-o){
//         i++;
//          if(q>w){
//         for(int k=0;k<t-1-o-o;k++, i++)
//            printf("%c~ ",a[i][c-1-o]);}
//         else{   
//         for(int k=0;k<c-1-o-o;k++, i++)
//            printf("%c~ ",a[i][t-1-o]);
//     }}
//       // last row
//     if(i==q-o &&j==w-o){
//         j-=2; i--;
//         for(int k=0;k<w-1-o-o;k++,--j)
//             printf("%c+ ",a[i][j]);
//     }
//     ///1st col
//     // if(q==w||o<c/2)
//         j++; i--;
//         for(int k=0;k<q-2-o-o;k++,i--)
//             printf("%c* ",a[i][j]);
//     i++;j++;
//         o++;
//         }
//     return 0;
// }



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



// mul of 2 matrix
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],c1[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
            
     for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);    
            
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            c1[i][j]=0;
            for(int k=0;k<c;k++){
                c1[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        printf("%d ",c1[i][j]);
        printf("\n");
    }
    
    return 0;
}
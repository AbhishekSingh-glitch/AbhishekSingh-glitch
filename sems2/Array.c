// collection of similar type of data type
/*
#include<stdio.h>
int main(){
int a[5]={5,6},i=0;
int b[5]={};
// printf("%d %d %d %d %d",a[0], a[1] ,a[2] ,a[3], a[4]);
while(i<5){ printf("%d ",a[i]); i++; } 
printf("\n");i=0;
while(i<5){ printf("%d ",b[i]); i++; } 
}
*/

/*
#include<stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++) scanf("%d",&a[i]);
    for(int i=0;i<10;i++) printf("%d ",a[i]);
}
*/

// #include<stdio.h>
// int main()
// {
//     // int a[5]={1,2,3,4,5,6,5}; // warning: excess elements in array initializer
//     // for(int i=0;i<5;i++)
//     // printf("%d ",a[i]); //1 2 3 4 5

//     int a[5];
//     for(int i=0;i<6;i++)  // access storage without chrcking its size
//         scanf("%d",&a[i]);
//     for(int i=0;i<6;i++)
//         printf("%d ",a[i]); 
// }

// print i at which a[i]<35
// #include<stdio.h>
// int main(){
//     int b;
//     scanf("%d",&b);
//     int a[b];
//     for(int i=1;i<=b;i++)
//    scanf("%d",&a[i]);

//    for(int i=1;i<=b;i++)
//    if(a[i]<35)
//    printf("%d ",i);
// }

// #include<stdio.h>
// int main(){
//     // array size should be <= 10^6 and some times it depend on 
//     int a[5],sum=0;
//     for(int i=1;i<=5;i++)
//         scanf("%d",&a[i]);

//    for(int i=1;i<=5;i++)
//         sum+=a[i];
//    printf("%d",sum);
// }


// #include<stdio.h>
// int main(){
   
//     int a[5];
//     for(int i=0;i<5;i++)
//         scanf("%d",&a[i]);

//    for(int i=0;i<4;i++)
//         a[0]+=a[i+1];
//    printf("%d",a[0]);
// }

#include<stdio.h>
int main(){
    int a[5],x,i,f=0;
    
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter element");
    scanf("%d",&x);

    for(i=0;i<5;i++)
        if(a[i]==x){
    printf("a[%d] ",i);f=1;}

    if(f==0) printf("-1");

}
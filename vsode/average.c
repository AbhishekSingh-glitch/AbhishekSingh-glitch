// #include<stdio.h>
// int main ()
// {
//     int n,count;
//     float sum =0,x,avg;
//     printf("enter how many number\n");
//     scanf("%d",&n);
//     for (count=1; count<=n; count++)
//     {
//         printf("x= ");
//         scanf("%f",&x);
//         sum += x;
//     }
//     avg = sum/n;
//     printf("\naverage %f",avg);
    
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a,b=0,c,s=0;
//     scanf("%d",&a);
//     while(b<a)
//     {
//         scanf("%d",&c);
//         s+=c;
//         ++b;
//     }
//     b=s/a;
//     printf("%d",b);
//     return 0;
// }

#include<stdio.h>

int main(){

    float res=0,temp,b=1;
    char operation; 
    scanf("%f",&temp); 
    res = temp;
    while(1){
        scanf("%c",&operation);
        if(operation=='\n')  break;
        
        scanf("%f",&temp); 
        res+=temp;  
        b++;
    }
    printf("%.2f",res/b);
    return 0;
}
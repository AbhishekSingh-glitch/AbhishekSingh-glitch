#include<stdio.h>
int main ()


//  can't use only else 


/*{
    int t;
    scanf("%d",&t);

    if(t >=4)
    {
        printf("good morning");
    }

    else
    {
        printf("good evening");
    }
    return 0;
}*/

/*{
    int a;
    scanf("%d",&a);

}*/

/*{
    int a,b;
    if (a>b)
    {
        printf("%d",a);
    }

    else 
    {
        printf("%d",b);
    }
    return 0;
}*/

// check wheater the given year is leap year is not using if else


// largest of 3 no.
/*{
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        printf("%d",a);
    }

    if(b>c)
    {
        printf("%d",b);
    }
    
    else
    {
        printf("%d",c);
    }

    return 0;
}*/

/*{
    int year;
    scanf("%d",&year);

    if(year%4==0) {
        if(year%100==0){
            if(year%400==0){
                printf("leap year");
            }
            else{
                printf("not a leap year");
            }
        }
        else{
            printf("leap year");
        }
    }
    else{
        printf("not a leap year");
    }
    return 0;
}*/

{
   int a,n=1,b=0;
   scanf("%d",&a);
   
   while(a>=n){
      if(a%n==0){
        printf("%d ",n);
        ++b;
      }
      ++n;
   }
   if(b<=2)
   printf("prime");
   return 0;
}
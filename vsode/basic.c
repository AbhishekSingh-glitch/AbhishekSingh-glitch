#include<stdio.h>
int main()   //() is important   //main

/*{
    int a,b;   //printf("%d,",5+2)
    a=5;
    b=2;
    printf("%d",a+b);
    return 0;
}*/ //correct

/*{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;  //a=3 ,b=4,
    int sub=a-b;  //
    int add=sum-sub;
    printf("%d",add);
    return 0;
}*/ //correct

/*{
    int a=5,b=3;
    printf("%d",5/3);
    return 0;
}*/   //correct

/*{
    float a=5,b=2;
    float f=5.0/2;
    printf("%.1f",f);
}*/  //correct

/*{
    int a,b;
    //(a-b)^2 = a^2 + b^2 -2ab
    scanf("%d%d",&a,&b);
    int c=a*a+b*b-2*a*b; //for (a+b)^2 =a*a+b*b+2*a*b
    printf("%d",c);
    return 0;
}*/ //correct

/*{
    int i;
    scanf("%d",&i);
    double d = (double)i;
    printf("%lf",d);
    return 0;
}*/  //correct
 
/*{
    float f=2.345678;  
    printf("%.f",f);
}*/ //correct

/*{
    double f=2.345678988;
    printf("%.9lf",f);
}*/ //corect

/*{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c=a-(-b);
    printf("%d",c);
    return 0;
}*/ //correct
//all calculations

//add of no. given by user
/*{
    int n,count;
    float sum =0,x,avg;
    printf("enter how many number\n");
    scanf("%d",&n);
    for (count=1; count<=n; count++)
    {
        printf("x= ");
        scanf("%f",&x);
        sum += x;
    }
    sum = sum;
    printf("sum\n%f",sum);
    
    return 0;
}*/
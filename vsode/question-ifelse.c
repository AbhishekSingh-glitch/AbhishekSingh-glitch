#include<stdio.h>
int main()

/*{
    char ch;
    scanf("%c",&ch);

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}*/   // right




/*{
    int x,y;
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        printf("%d",x-y);
    }
    else if(y>x)
    {
        printf("%d",x+y);
    }
    else{
        printf("number is equal");
    }
    return 0;

}*/   // right

/*{
    int a,b,c;
    scanf("%d%d",&a,&b);
    
    if (a>b)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        a=a-b;
        printf("%d",a);
    }

    else
    {
        int c,d;
        scanf("%d%d",&c,&d);
        c=c+d;
        printf("%d",c);
    }

    if(a==c)
    {
        printf("number is equal");
    }

    return 0;
}*/   // error    if else if used



/*{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}*/   //right

/*{
    int year;
    scanf("%d",&year);
    if(year%4==0) 
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("leap year");
            }
            else
            {
                printf("not a leap year");
            }
        }
        else
        {
            printf("leap year");
        }
    }
    else
    {  
        printf("not a leap year");
    }
    return 0;
}*/  //right

/*{
    int a;
    scanf("%d",&a);

    if(a>0)
    {
        printf("positive");
    }
    if(a<0)
    {
        printf("negative");
    }
    if(a==0)
    {
        printf("zero");
    }

}*/  //right

/*{
    int a;
    
    scanf("%d",&a);

    if(1<=a&&a<=12)
    {
        printf("Good Morning");
    }
    if(12<a && a<=16)
    {
        printf("Good Afternoon");
    }
    if(16<a && a<=24)
    {
        printf("Good Evening");
    }
    return 0;
}*/



//Character to ASCII
/*{
    int n1;
    char ascii;
    printf("Enter a character: ");
    scanf("%c",&ascii);
    printf("%c(character) = %d(corresponding ASCII code)",ascii,ascii);
    return 0;
}*/

/*{
    char a,z;
    
    scanf("%d",&a);

    if(a>=a||a<=z)
    {
        printf("character");
    }
    if(||0==a||a==9||0==a||a==9||0==a||a==9||0==a||a==9||0==a)
    {
        printf("Number");
    }
    else
    {
        printf("special character");
    }
    return 0;
}*/  //wrong

/*{
    float maths,english,hindi,sst,science;
    scanf("%f%f%f%f%f",&maths,&english,&hindi,&sst,&science);

    maths=maths/100*100;
    hindi=hindi/100*100;
    english=english/100*100;
    science=science/100*100;
    sst=sst/100*100;

    float result=maths+hindi+english+science+sst;
   

    printf("%f",result);
    if(result>=90)
    {
        printf("A");
    }
    
    return 0;


}*/


{
    char ch;
    
    // Prompt the user for a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is character.\n", ch);
    }
    
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') 
    {
        printf("%c is number.\n", ch);
    }
    
    // Otherwise, it's a special character
    else 
    {
        printf("%c is special character.\n", ch);
    }
    
    return 0;
}
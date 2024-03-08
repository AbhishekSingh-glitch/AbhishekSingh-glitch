#include<stdio.h>
int main()
/*printf("%f%d",f1,n1);
  scanf("%f%d",&f1,&n1);*/

//45.5 to 45
/*{
    int n1=45.5;                        //45, 45.5
    printf("Enter a number:");
    scanf("%d",&n1);               //45, 45.5
    printf("n1 = %d",n1);
    return 0;
}*/

//print float
/*{
    float f1;                         //45.5, 34
    printf("Enter a real number:");
    scanf("%f",&f1);                  //45.5, 34, 2.123456, 2.1232315, 2.1234395
    printf("f1 = %f",f1);
    return 0;
}*/

//print after the decimal
/*{
    float f1;                         //45.5, 34
    printf("Enter a real number:");
    scanf("%f",&f1);                   //45.5, 34, 2.123856
    printf("f1 = %.9f",f1);         //%.9f  //2.123456787
    return 0;
}*/

/*{
    char c1='A';                               //'A', 'AB'
    printf("Enter a character number:");
    scanf("%c",&c1);                       //A, 1, AB
    printf("c1 = %c",c1);
    return 0;
}*/

//garbage value
/*{
    int n2=5;
    printf("Enter a number:");
    scanf("%f",&n2);              //Here n2 will take some garbage value
    printf("n2 = %d",n2);
    return 0;
}*/

//Question 6
/*{
    int n2=5;
    printf("Enter a number:");
    scanf("%d",&n2);              
    printf("n2 = %f\n",n2);   //Garbage value
    printf("n2 = %d",n2);
    return 0;
}*/

//ASCII to Character  done
/*{
    int ascii;
    printf("Enter ASCII code: ");
    scanf("%d",&ascii);
    printf("%d(ASCII) = %c(corresponding character)",ascii,ascii);
    return 0;
}*/

//Character to ASCII  done
/*{
    int n1;
    char ascii;
    printf("Enter a character: ");
    scanf("%c",&ascii);
    printf("%c(character) = %d(corresponding ASCII code)",ascii,ascii);
    return 0;
}*/

//Question 9 
/*{
    char c1;
    char c2; 
    printf("Enter two characters(c1 and c2): ");
    scanf("%c %c",&c1,&c2);                                    
    printf("c1 = %c, c2 = %c\n",c1,c2);
    return 0;
}*/

//Undefined Behaviour
/*{
    char c1 = 2;
    char c2 = 5; 
    printf("Before scan: c1 = %d, c2 = %d\n",c1,c2);
    scanf("%d",&c1);                                    //Undefined Behaviour
    printf("After scan: c1 = %d, c2 = %d\n",c1,c2);
    return 0;
}*/

//find area
/*{
    int r=2;
    float area = 3.14*r*r;      //float area
    printf("Area = %d", area); //%d, %f
    return 0;
}*/

//division of int to float
/*{
    float f = 5/2.0;         // int/int=int
    printf("f = %f",f);      //
    return 0;
}*/

//typecasting
/*{
    int n1=5;
    int n2=2;            //float n1, float n2
    float f = n1/(float)n2;    
    printf("f = %f",f);
    return 0;
}*/

/*{   
    int a,b;
    float f = a/b;    
    printf("f =%f",f);
    return 0;
}*/
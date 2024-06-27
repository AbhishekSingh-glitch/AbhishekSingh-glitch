#include<stdio.h>
int main ()
{
    int op; //orignal price
    int fp; //final price
    int d; //discount
    scanf("%d%d",&op,&d);
    fp=op-(op*(d/100.0));
    printf("%d",fp);
    return 0;
}

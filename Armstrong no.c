// Any no. digit whill be the power all the digit of that no.
// and get sum if = to that no. then armstrong no.
#include <stdio.h>
#include<math.h>
int main() {
    int n,a,b,sum=0;
    scanf("%d",&n);
    a=n;
    while(n>0) {
        b=n%10;
        sum+=pow(b,3);
        n/=10;
    }
    if (a==sum) {
        printf("Armstrong number\n");
    }
    else {
        printf("not an Armstrong number");
    }
    return 0;
}

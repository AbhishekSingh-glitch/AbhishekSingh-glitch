#include<stdio.h>
int main() {
    int a,b,d=1;
    scanf("%d%d",&a,&b);

    for(int c;c<b; ++c)
    d*=a;

    printf("%d",d);
    return 0;
}

#include<stdio.h>
int main(){
    int a,b,d=1;
    scanf("%d%d",&a,&b);
    while(b!=0){
        d*=a;
        --b;
    }
    printf("%d",d);
    return 0;
}

#include<stdio.h>
int main(){
    int a,b,c=0,d=1;
    scanf("%d%d",&a,&b);
    while(c<b){
        d*=a;
        ++c;
    }
    printf("%d",d);
    return 0;
}

#include<stdio.h>
int main(){
    int a, b,c=1, d=1;
    scanf("%d%d",&a,&b);
    while(c<=b){
        d*=a;
        ++c;
    }
    printf("%d",d);
    return 0;
}


double myPow(double a,double b) {

    double d = 1.0,t;
    t=b>0?1:-1;
    for (int c = 0; c !=b;) {
        c+=t;
        d *= a;
        }
    return t>0?d:1/d;
}

    
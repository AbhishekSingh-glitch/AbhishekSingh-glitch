#include<stdio.h>
int main()
{
int a;
int b;
int d=1;

scanf("%d%d",&a,&b);

for(int c;c<b; ++c){
d*=a;
}
printf("%d",d);
return 0;
}

#include<stdio.h>
int main()
{
int a;
int b;
int d=1;

scanf("%d%d",&a,&b);

while(b!=0){
d*=a;
--b;
}
printf("%d",d);
return 0;
}

#include<stdio.h>
int main()
{
int a;
int b;
int c=0;
int d=1;

scanf("%d%d",&a,&b);
while(c<b){
d*=a;
++c;
}
printf("%d",d);
return 0;
}

#include<stdio.h>
int main()
{
int a, b,c=1, d=1;

scanf("%d%d",&a,&b);
while(c<=b){
d*=a;
++c;

}
printf("%d",d);
return 0;
}
// concentric matrix pattern or Rangoli Pattern
#include <stdio.h>

int min(int a,int b){
    return a<b?a:b;
}


int main() 
{

    int n;
    scanf("%d", &n);
  	
      for(int i=1;i<2*n;i++){
          for(int j=1;j<2*n;j++){
              int a=i;
              int b=j;
              if(a>n) a= 2*n-i;
              if(b>n) b= 2*n-j;
              int num=min(a,b);
              printf("%d ",n-num+1);
          }
          printf("\n");
      }
      
      
    return 0;
}
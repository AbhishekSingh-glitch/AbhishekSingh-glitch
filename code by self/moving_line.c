#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int d=1;
	while(d){
	    sleep(0);
	    system("cls");
	    if(d>n)d=1; 
	    for(i=1;i<=n;i++){
		    for(j=1;j<=i;j++)
			    if(d==j&&i==j)
			        if (d==n)
				        printf("*");
			        else printf("\\");		 
			    else  printf(" ");
		printf("\n");		
	}
	d++;
	}
	return 0;
}
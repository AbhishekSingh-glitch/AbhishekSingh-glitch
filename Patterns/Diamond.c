#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<2*n;i++){
		for(j=1;j<2*n;j++)
			if(i+j<n+1||j>n+i-1||i-j>n-1||i+j>2*n+n-1)
				printf(" ");
			else
				printf("*");
		printf("\n");
	}
}
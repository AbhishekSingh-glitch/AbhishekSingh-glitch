#include<stdio.h>
int main(){
    int s=4;
	printf("enter the size of the matrix\n");
    scanf("%d",&s); 
	int a[s][s];

	for(int i=0;i<s;i++)
        for(int j=0;j<s;j++)
            scanf("%d",&a[i][j]);

	// transpose of matrix
	for(int i=0;i<s;i++)
	  	for(int j=0;j<i;j++){
	        int temp=a[i][j];
        	a[i][j]=a[j][i];
        	a[j][i]=temp;
		}
    // arranging 
   	for(int i=0;i<s;i++)
	  	for(int j=0,l=s-1;j<s/2;j++,l--){
	        int temp=a[i][l];
        	a[i][l]=a[i][j];
        	a[i][j]=temp;
		}

    printf("\n");
    for(int i=0;i<s;i++){
		for(int j=0;j<s;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
//celsius to fahrenheit
/*
#include<stdio.h>
int main(){
    float c;
    scanf("%f",&c); //c is celsius
    float f = c*((float)9/5) + 32;
    printf("%f",f);  //f is fahrenheit
    return 0;
}*/

//fahrenheit to celsius
/*
#include<stdio.h>
int main(){
    float f;
    scanf("%f",&f);
    float c = f*((float)9/5) + 32;
    printf("%f",c);
    return 0;
}*/

//kelvin to fahrenheit
/*
#include<stdio.h>
int main(){
    float k;  //k is kelvin
    scanf("%f",&k);
    float f = (k-273.15)* 9/5 + 32;
    printf("%f",f);
    return 0;  
}*/

//fahrenheit to kelvin 
/*
#include<stdio.h>
int main(){
    float f;
    scanf("%f",&f);
    float k =(f-32)*5/9 + 273.15 ;
    printf("%f",k);
    return 0;  
}*/

//celeius to kelvin
/*
#include<stdio.h>
int main(){
    float c;
    scanf("%f",&c);
    float k = c + 273.15;
    printf("%f",k);
    return 0;  
}*/

//kelvin to celsius
/*
#include<stdio.h>
int main(){
    float k;
    scanf("%f",&k);
    float c = k - 273.15;
    printf("%f",c);
    return 0;    
}*/






#include<stdio.h>
#include<limits.h>
int main(){
	int a,b;
	int arr[]={1,7,3,4,10,6};
	int mx=INT_MIN;
	for(int i=0;i<7;i++){
		if(mx<arr[i]){
		    a=mx;
            b=mx;
			mx=arr[i];
			}
		else if(arr[i]!=mx && arr[i]>a){
	        a=arr[i];
        }
        else if(arr[i]<mx || arr[i]<a &&arr[i]>b){ 
            b=arr[i];}
    }
		printf("%d largest\n",mx);
		printf("%d second largest\n",a);
        printf("%d third largest",b);
	return 0;}
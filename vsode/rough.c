// #include <stdio.h>
// int main() {
// 	int c,d;
// 	printf("enter matrix size\n");
// 	scanf("%d%d",&c,&d);
//   int a[c][d] ;
// printf("Enter elements of matrix\n");
//   for (int i = 0; i < c; i++) {
//     for (int j = 0; j < d; j++)
//      scanf("%d",&a[i][j]);
 
//   }

//   for (int i = 0; i < c; i++)
//     for (int j = 0; j < i; j++) {
//       int temp = a[i][j];
//       a[i][j] = a[j][i];
//       a[j][i] = temp;
//     }
    

//   for (int i = 0; i < c; i++)
//     for (int j = 0; j <=(d-1)/2; j++) {
    	
//       int temp = a[i][d-1-j];
//       a[i][d-1-j] = a[i][j];
//       a[i][j] = temp;
      
     
//     }

//   printf("\n");
//   for (int i = 0; i < d; i++) {
//     for (int j = 0; j < c; j++)
//       printf("%d ", a[j][i]);
//     printf("\n");
//   }
// } // trying to rotate rectangle matrix


// #include <stdio.h>

// int main() 
// {
//     int  a[2] = {1,3},b[1] = {2},n=sizeof(a)/sizeof(int),
//     m=sizeof(b)/sizeof(int),
//     c[n+m],k=0,i=0,j=0;
//     float q,w;
//     while(i<n&&j<m){
//         if(a[i]<b[j]) {
//             c[k]=a[i];
//             i++;}
//         else{
//             c[k]=b[j];
//             j++;}
//         ++k;
//     }

//     while(i<n){
//         c[k]=a[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         c[k]=b[j];
//         j++;
//         ++k;
//     }
//     i=0,j=n+m-1;
//     while(i<=j){
//         q=c[i];
//         w=c[j];
//         i++;
//         j--;
//     }
//     q=(q+w)/2;
//     printf("%f",q);
// }  // medimum of 2 sorted array

// #include <stdio.h>
// int isValid(char *s,int n) {
//     int c,h=0;
//     for(int i=0;i<n;i++){
//         c=0;
//         for(int j=0;j<n;j++)
//             if( s[i]=='('&&s[j]==')'||s[i]=='{'&&s[j]=='}'||s[i]=='['&&s[j]==']'&&i!=j
//             ||s[j]=='('&&s[i]==')'||s[j]=='{'&&s[i]=='}'||s[j]=='['&&s[i]==']'){
//                 printf("%c",s[i]);
//                 c++;
//             }
//         if(c==0) break;
//     }
//     if(c==0) 
//     return 0;
//     else
//     return 1;
// }
// int main() {
//     char t[]= "{[]}";
//     int n=sizeof(t)-1;
//     for(int i=0;i<n;i++)
//     printf("%c",t[i]);
// printf("\n");
//     int g=isValid(t,n);
//     printf("\n%d",g);
//     return 0;
// }  //checking braces if open ,then closed or not


// char* triangleType(int* s) {
    
//     if (s[0] + s[1] > s[2] && s[1] + s[2] > s[0] && s[0] + s[2] > s[1]) {
//     // printf("it can be a");
//     if (s[0] == s[1] && s[0] == s[2] && s[2] == s[1])
//        return 'e';
//     else if (s[0] == s[1] || s[1] == s[2] || s[0] == s[2])
//        return 'i';
//     else
//        return 's';
//   }
//   else {
//      return 0;
//   }
  
// }
// #include <stdio.h>

// int main() {
//   int s[3];
//   printf("Enter 3 no. ");
//   scanf("%d%d%d", &s[0], &s[1], &s[2]);
//   printf("%c",triangleType( s));
// } // triangle validity check
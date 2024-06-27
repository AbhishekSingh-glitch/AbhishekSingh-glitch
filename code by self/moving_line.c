// #include<stdio.h>
// #include<unistd.h>
// #include<stdlib.h>
// int main()
// {
// 	int i,j,n;
// 	scanf("%d",&n);
// 	int d=1;
// 	while(d){
// 	    sleep(0);
// 	    system("cls");
// 	    if(d>n)d=1; 
// 	    for(i=1;i<=n;i++){
// 		    for(j=1;j<=i;j++)
// 			    if(d==j&&i==j)
// 			        if (d==n)
// 				        printf("*");
// 			        else printf("\\");		 
// 			    else  printf(" ");
// 		printf("\n");		
// 	}
// 	d++;
// 	}
// 	return 0;
// }


// #include<stdio.h>
// #include<unistd.h>
// #include<stdlib.h>
// #include <time.h>
// void csleep(int milliseconds) {
//     struct timespec ts;
//     ts.tv_sec = milliseconds / 1000; // Convert milliseconds to seconds
//     ts.tv_nsec = (milliseconds % 1000) * 1000000; // Convert remaining milliseconds to nanoseconds

//     // customSleep for the specified time
//     nanosleep(&ts, NULL);
// }
// int main()
// {
// 	while(1){
// 		csleep(30);
// 		system("cls");
// 		printf("\n___");
	   	
// 		csleep(40);
// 		system("cls");
// 	   	printf("\\\n \\\n  \\");
	   	
// 		csleep(50);
// 		system("cls");
// 	   	printf(" |\n |\n |");

// 		csleep(60);
// 		system("cls");
// 	   	printf("  /\n /\n/");

// 	}
// 	return 0;
// }
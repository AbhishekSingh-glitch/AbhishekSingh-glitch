#include<stdio.h>
int main(){

    int md[12]={31},i,year, t=1899,che=0;
    md[2]=31;
    md[3]=30;
    md[4]=31;
    md[5]=30;
    md[6]=31;
    md[7]=31;
    md[8]=30; 
    md[9]=31; 
    md[10]=30;
    md[11]=31;
    
    printf("Enter year greater than 1900\n");
    scanf("%d",&year);
    
    char mn[][10]={"January","February","March","April","May","June",
                 "July","August","September","October","November","December"},
         w[]="SMTWTFS";
         
   while(t<=year){
       // leap year logic
       if(t%4==0)
        if(t%100==0)
            if(t%400==0) md[1]=29;
            else md[1]=28;
        else md[1]=29;
    else md[1]=28;
    
    for(int m=0;m<12;m++){
        if(t==year) 
            printf("%s\n",mn[m]);  //print months
        
        if(t==year){
            for( i=0;i<7;i++)
                printf("%c\t",w[i]);  //print weeks
                printf("\n");
        }
        i=0;
        
        for(int d=1,q=1;q<=md[m];d++,i++,q++){
            // date formating for next month            
            if(che>0){
                if(t==year)
                    printf("\t"); 
                che--;
                q--;
            }
            else if(t==year)
                printf("%d\t",q);  //print days
                
                //prints next line for date formating
            if(d%7==0){
                if(t==year)
                    printf("\n");
                i=0;
            }
            // date formating for next month
            if(q==md[m]) {
                che=i;
            }
        }
        if(t==year)
            printf("\n\n");
    }
    t++;
   }
}
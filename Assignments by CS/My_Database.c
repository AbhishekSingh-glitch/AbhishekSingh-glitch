#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    char fName[50];
    char mName[50];
    int rollNo;
    float marks;
}stu;

int main(){
    FILE *f;
    f= fopen("mydatabase.txt","w");
    int i=0;
    stu s[3];
    while(i < 1){
        printf("Enter roll number:");
        scanf("%d",&s[i].rollNo);
        printf("Enter student name:");
        scanf(" %[^\n]s",s[i].name);
        printf("Enter father's name:");
        scanf(" %[^\n]s",s[i].fName);
        printf("Enter mother's name:");
        scanf(" %[^\n]s",s[i].mName);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
        ++i;
    }
    i = 0;
    printf("SL. No. Roll No. Name                Father's Name       Mother's Name       Marks\n");
    fprintf(f,"SL. No. Roll No. Name                Father's Name       Mother's Name       Marks\n");
    while(i<1){
        printf("%03d    ",i+1);
        printf("%3d       ",s[i].rollNo);
        printf("%-20s",s[i].name);
        printf("%-20s",s[i].fName);
        printf("%-20s",s[i].mName);
        printf("%.2f",s[i].marks);
        printf("\n");
        fprintf(f,"%03d    ",i+1);
        fprintf(f,"%3d       ",s[i].rollNo);
        fprintf(f,"%-20s",s[i].name);
        fprintf(f,"%-20s",s[i].fName);
        fprintf(f,"%-20s",s[i].mName);
        fprintf(f,"%.2f",s[i].marks);
        fprintf(f,"\n");
        ++i;
    }
    fclose(f);
    return 0;
}
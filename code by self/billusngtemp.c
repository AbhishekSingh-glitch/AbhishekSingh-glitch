#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* wordReplace(const char *str, const char *oldWord, const char *newWord){
    int lenStr = strlen(str);
    int lenOldWord = strlen(oldWord);
    int lenNewWord = strlen(newWord);
     
    int i = 0;
    int cnt = 0;
    //count the freq of oldWord
    while(str[i] != '\0'){
        if(strstr(&str[i],oldWord) == &str[i]){
            ++cnt;
        }
        ++i;
    }
    
    //allocating memory for updated/new string
    char *newStr = (char*)malloc(lenStr+ cnt* (lenNewWord-lenOldWord)+1);

    i = 0;
    int j = 0;
    //Replacing oldWord with newWord
    while (str[i] != '\0')
    {
        if(strstr(&str[i],oldWord) == &str[i]){ //strstr("go to spain.","go")
            strcpy(&newStr[j],newWord);
            j += lenNewWord;
            i += lenOldWord;
        }
        else{
            newStr[j] = str[i];
            ++i;
            ++j;
        }
    }
    newStr[j] = '\0';
    
    //returning new string
    return newStr;
}

int main(){
    FILE *fp1 = fopen("billtemp.txt","r");
    if(fp1 == NULL){
        printf("There is an error in opening the bill template...\n");
        return 0;
    }
    FILE *fp2 = fopen("bill.txt","w");
    if(fp2 == NULL){
        printf("There is an error in generating the bill...\n");
        return 0;
    }
    char templateContent[200];
    fgets(templateContent,200,fp1);
    printf("The template file is:\n");
    printf("%s\n",templateContent);
    fclose(fp1);
    char cusName[50];
    printf("\nEnter customer name: ");
    scanf("%[^\n]s",cusName);
    char *personalizedContent = wordReplace(templateContent,"{{name}}",cusName);
    char itemName[50];
    printf("Enter item name: ");
    scanf(" %[^\n]s",itemName);
    personalizedContent = wordReplace(personalizedContent,"{{item}}",itemName);
    char outletName[50];
    printf("Enter outlet name: ");
    scanf(" %[^\n]s",outletName);
    personalizedContent = wordReplace(personalizedContent,"{{outlet}}",outletName);
    fputs(personalizedContent,fp2);
    fclose(fp2);
    printf("\nThe personalized content is:\n");
    printf("%s\n",personalizedContent);
    return 0;
}
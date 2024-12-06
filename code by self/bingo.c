#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void print_blank_Map(int *bin);
void printMap(int *bin,int *bindup);

void scan(int *bin,int *bindup);
int validNumber(int n,int cnt,int *bin);
int random(int *arr);

void assignMap(int *bin,int *bindup);
void assignbingo(char *str,int bingo_count);

void ask(int *choice,char * a,char *b);

void line_check (char * bingoarr,int * bindup,int* bingo_count,int *line_number,int * side,int start,int end,int incre);
void check(char *user_bingo,int* bindup,int *bingo_count, int *line_number ,int *hrz ,int *vrt ,int *rtd, int *lfd, int i);

void assign_variables(int *bin,int *bindup,int *computer_bingo_map,int *CBMdup,int *vrt,int *hrz,int *vrt2,int *hrz2,int *line_number,int *line_number2,char *user_bingo,char *computer_bingo,int *number,int *lfd,int *rtd,int *bingo_count,int *lfd2,int *rtd2,int *idx,int *idx2,int *bingo_count2,int *moves,int *choice,int *choice2);

int main(){
    srand(time(NULL));

    // user variables
    int bin[25],bindup[25],number=0;
    int vrt[5], hrz[5],line_number[12];
    int lfd ,rtd,bingo_count;
    char user_bingo[6];

    // computer variables
    int computer_bingo_map[25],CBMdup[25];
    int vrt2[5], hrz2[5],line_number2[12];
    int lfd2 ,rtd2 ,bingo_count2;
    char computer_bingo[6];

    int idx,idx2, moves, choice,choice2;

    assign_variables(bin,bindup,computer_bingo_map,CBMdup,vrt,hrz,vrt2,hrz2,line_number,line_number2,user_bingo,computer_bingo,&number,&lfd,&rtd,&bingo_count,&lfd2,&rtd2,&bingo_count2,&idx,&idx2,&moves,&choice,&choice2);

    // start 
    ask(&choice,"Vs Human","Vs Computer");

    if(choice==2)
        assignMap(computer_bingo_map,CBMdup);

    ask(&choice2,"random numbers","manual numbers");

    // for automatic bingo number 
    if(choice2==1) assignMap(bin,bindup);
    // for manual numbers
    else          scan(bin,bindup);

    while (moves<25){
        printf("\033[H\033[J");

        printMap(bin, bindup);
        puts(user_bingo);

        do{
            printf("\nenter no. ");
            scanf("%d",&number);
        } while (validNumber(number,25,bindup));

        for(int i=0;i<25;i++){
            if(number==bin[i]){
                bindup[i]=0;
                idx=i;
                check(  user_bingo,  bindup,&bingo_count ,line_number ,hrz ,vrt ,&rtd ,&lfd ,idx);
            }

            if(choice ==2){

                if(number==computer_bingo_map[i]){
                    CBMdup[i]=0;
                    idx2=i;
                    check(computer_bingo,CBMdup,&bingo_count2,line_number2,hrz2,vrt2,&rtd2,&lfd2,idx2);
                }
            }
        }

        if(choice==2){

            do{
                number= random(CBMdup);
            } while (validNumber(number,25,CBMdup));

            for(int i=0;i<25;i++){
                if(number==bin[i]){
                    bindup[i]=0;
                    idx=i;
                    check(  user_bingo,  bindup,&bingo_count ,line_number ,hrz ,vrt ,&rtd ,&lfd ,idx);
                }

                if(number==computer_bingo_map[i]){
                    CBMdup[i]=0;
                    idx2=i;
                    check(computer_bingo,CBMdup,&bingo_count2,line_number2,hrz2,vrt2,&rtd2,&lfd2,idx2);
                }
            }
        }

        if (strcmp(  user_bingo,   "BINGO") == 0)   break;
        if(choice==2) if (strcmp(computer_bingo, "BINGO") == 0)   break;
        
        moves++;
    }
    
    printf("\033[H\033[J");

    printMap(bin, bindup);
    puts(user_bingo);

    if(choice==2){
        printMap(computer_bingo_map,CBMdup);
        puts(computer_bingo);
    }

    assign_variables(bin,bindup,computer_bingo_map,CBMdup,vrt,hrz,vrt2,hrz2,line_number,line_number2,user_bingo,computer_bingo,&number,&lfd,&rtd,&bingo_count,&lfd2,&rtd2,&bingo_count2,&idx,&idx2,&moves,&choice,&choice2);
    
    return 0;
}

// functions definitions
void printMap(int *bin, int *bindup){

    for(int i=0;i<5;i++)
        printf("-----");
    printf("-\n");

    for (int i=0; i<25;i++){

        if (i%5==0 && i>0)  printf("|\n");

        if (bindup[i]==0){
            printf("|\033[2m\033[9m %-2d \033[0m", bin[i],bindup[i]);
        }
        else printf("| %-2d ", bin[i],bindup[i]);
    }

    printf("|\n");
    for(int i=0;i<5;i++)
        printf("-----");
    printf("-\n");
}

void assignbingo(char *str, int bingo_count){
    switch(bingo_count){
  	    case 0: str[0]='B'; break;
        case 1: str[1]='I'; break;
        case 2: str[2]='N'; break;
        case 3: str[3]='G'; break;
        case 4: str[4]='O'; break;
        default: break;
    }
}

int validNumber(int n, int cnt, int *bin) {
    if (n < 1 || n > 25)  return 0;

    for (int i = 0; i < cnt; i++) {
        if (bin[i] == n) return 0;
    }
    return 1;
}

int random(int *arr) {
    int  number, size=25, index;
    int temp[size];
    int j=0;
    
    for (int  i = 0; i < size; i++)   
    {
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    
    index = rand() % (j);
    number =temp[index];
    return number;
}

void print_blank_Map(int *bin){
    
    for(int i=0;i<5;i++)
        printf("-----");
    printf("-\n");

    for (int i=0; i<25;i++){

        if (i%5==0 && i>0)  printf("|\n");

        printf(  (bin[i]!=0) ? ("| %-2d "): ("|    " ),bin[i]);
    }

    printf("|\n");
    for(int i=0;i<5;i++)
        printf("-----");
    printf("-\n\n");

}

void scan(int *bin,int *bindup){
    int i=0,num=0;

    while(i<25){
        printf("\033[H\033[J"); 

        print_blank_Map(bin);
        scanf("%d",&num);

        if(validNumber(num,i,bin)){ 
            bin[i]=num;
            bindup[i]=num;
            }
        else i--;
        i++;
    }
}

void assignMap(int *bin, int *bindup) {
    int size=25;
    int index, last_index = size - 1;
    int* temp=malloc(25*sizeof(int));

    // Initialize the temporary array with numbers from 1 to size-1
    for (int i = 0; i < size; ++i) {
        temp[i] = i + 1;
    }

    // Shuffle the numbers and populate the array
    for (int i = 0; i < size ; ++i) {
        index = rand() % (last_index + 1);
        bin[i] = temp[index];
        bindup[i]=temp[index];
        temp[index] = temp[last_index--]; // Remove the selected number
    }
    free(temp);
    temp=NULL;
}

void ask(int *choice ,char * a,char *b){
    do{
        printf("\033[H\033[J"); 
        printf("1. for %s   \n",a);
        printf("2. for %s\n",b);
        scanf("%d",&(*choice));
    }while((*choice)<1||(*choice)>2);
}

void line_check (char * bingoarr,int * bindup,int* bingo_count,int *line_number,int * side,int start,int end,int incre){
    // printf("Checking line: start=%d, end=%d, increment=%d\n", start, end-1, incre);

    for (int i = start; i < end; i += incre){

        if(bindup[i]==0)  (*side)++;

        if((*side)==5 && (*line_number)==0){
            assignbingo(bingoarr,(*bingo_count));
            (*bingo_count)++;
            (*line_number) = 1;
        }
    }
    (*side) = 0;
}

void check(char *bingo,int* dup,int *bingo_count, int *line_number ,int *hrz ,int *vrt ,int *rtd, int *lfd, int i){
    int row= i/5;
    int col= i%5;

    // printf("\n%d \n  %d\n%d\n",i,col,row);
    if(i!=1 && i!=2 && i!=3 && i!=5 && i!=7 && i!=9 && i!=10 && i!=11 && i!=13 && i!=14 && i!=15 && i!=17 && i!=19 && i!=21 && i!=22 && i!=23 ){
        line_check(bingo, dup, bingo_count, &line_number[0], rtd, 4, 21, 4);
        line_check(bingo, dup, bingo_count, &line_number[1], lfd, 0, 25, 6);
    }

    line_check(bingo, dup, bingo_count, &line_number[2+row], &hrz[row], (row*5), ((row*5)+5), 1);
    line_check(bingo, dup, bingo_count, &line_number[7+col], &vrt[col],   col,    (col  +21), 5);

}

void assign_variables(int *bin,int *bindup,int *computer_bingo_map,int *CBMdup,int *vrt,int *hrz,int *vrt2,int *hrz2,int *line_number,int *line_number2,char *user_bingo,char *computer_bingo,int *number,int *lfd,int *rtd,int *bingo_count,int *lfd2,int *rtd2,int *idx,int *idx2,int *bingo_count2,int *moves,int *choice,int *choice2){
    
    for (int i = 0; i < 25; i++){
        bin[i]                = 0;
        bindup[i]             = 0;
        computer_bingo_map[i] = 0;
        CBMdup[i]             = 0;

        if (i < 5){
            vrt[i]  =0;
            hrz[i]  =0;
            vrt2[i] =0;
            hrz2[i] =0;
        }
        
        if (i < 12){
            line_number[i]  =0;
            line_number2[i] =0;
        }

        if(i<6){
            user_bingo[i]='\0';
            computer_bingo[i]='\0';
        }
    }
    *number = 0;

    *lfd = 0;
    *rtd = 0;
    *bingo_count = 0;

    *lfd2 = 0;
    *rtd2 = 0;
    *bingo_count2 = 0;

    *idx = 0;
    *idx2 = 0;
    
    *moves = 0;
    *choice = 0;
    *choice2 = 0;
}
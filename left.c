// 7 C Program to print Individual Digits

// 8 C Program to accept a three digit number and print the sum of individual digits.

// 9 C Program to accept a number and check the given number is Armstrong or not.

// 15 C Program to print fibonacci series.
{
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }

    return 0;
}
// 16 C Program to print numeric pyramid
{
    int a=5,b=1;                       
    for(int i=0;i<a;i++){
        for(int j=a;j>i;j--)      //      * 
        printf(" ");              //     * * 
        for(int j=0;j<=i;j++){    //    * * * 
            printf("%d ",b);
        }     
        b++;
        printf("\n");
    }
}
//17 C Program to print numerical pyramid II.
    
// 18 C Program to print numerical diamond.
{
    int a=4,b=1; 
      for(int i=0;i<=a;i++){
        for(int j=a;j>i;j--)      //      * 
        printf(" ");              //     * * 
        for(int j=0;j<=i;j++){    //    * * * 
            printf("%d ",b);         //   * * * * 
        }    
        b++;                     //  * * * * *
        printf("\n");             //   * * * *
    }             
    b-=2;                //    * * *
    for(int i=0;i<a;i++){         //     * *
        for(int j=0;j<=i;j++)     //      *
        printf(" ");              
        for(int j=a;j>i;j--){    
            printf("%d ",b);       
        } 
        b--;                        
        printf("\n");
    }                  
}
// 19 C Program to print character pyramid.
{
    int a=5; 
    char b='A';
    for(int i=0;i<a;i++){
        for(int j=a;j>i;j--)      //      * 
        printf(" ");              //     * * 
        for(int j=0;j<=i;j++){    //    * * * 
            printf("%c ",b);         //   * * * * 
        }         
        b++;//  * * * * *
        printf("\n");
    }
}
// 20 C Program to print character diamond.
{
    int a=4;
    char b='A'; 
      for(int i=0;i<=a;i++){
        for(int j=a;j>i;j--)      //      * 
        printf(" ");              //     * * 
        for(int j=0;j<=i;j++){    //    * * * 
            printf("%c ",b);         //   * * * 
        }    
        b++;                     //  * * * * *
        printf("\n");             //   * * * *
    }             
    b-=2;                //    * * *
    for(int i=0;i<a;i++){         //     * *
        for(int j=0;j<=i;j++)     //      *
        printf(" ");              
        for(int j=a;j>i;j--){    
            printf("%c ",b);       
        } 
        b--;                        
        printf("\n");
    }                  
}
// 22 C Program to find biggest of four no by using ternary numbers

// 23 C Program to print smallest of four no by using ternary operators
    
// 24 C Program to accept a year and check the given year is leap or not by using ternary

// 28 C Program to accept a string and print it by using the wille loop
    
// 29 C Program to accept a string in upper case and print it by lower case
    
// 30 C Program to accept a string in any case and print it by another case.
    
// 31 C Program to accept a string print each word in new line
    
// 32 C Program to accept a string and count no of capital letters, no. of small fetters and no, of special characters

// 34 C Program to print prime numbers between 1 to 100

// 37 C Program to accept a number and check the given number Armstrong or not (Processill

// 54 C Program to read in number and orint them in matrixterms in all orders.
    
// 55 C Program to search an element using binary search

// 56 C Program to accept two number and print the sum of given two number by using pointers
    
// 57 C Programs to multiply two Matrices
    
// 58 C Program to print prime number between 1-100

// 59 C Program to accept a string and find the length of the string
    
// 60 C program to fibanocci of matrix
    
// 61 C Program a struture which reads 'n' students information (name, 3 subjects marks) and calculite total marks, resuit print them in aparticular format
    
// 62 C Program to find whether a square matrix is a symmetric b) skew symmetric c) none of two

// 64 C Program to print Armstrong number between 1-500.

// 65 C Program to check whether a given number is Armstrong or not
    
// 66 C Program to print the floyd's' triangle
    
// 67 C Program to read data in 3 structures and print
    
// 68 C Program to print a diagonal matex.
    
// 69 C Program to copy contents of one file into another

// 70 C Program to create a file of number and copy odd number into second file and even number into third file
    
// 71 C Program a structure which stores information about hotel which stores information about name grade, room change, no of rooms
    
// 72 C Program which does the below process after reading an odd no af integer
    
// 73 C Program to sort the entered elements using selection sort technique.

// 75 C Program to find maximum and minimum of entered 'n' number using arrays.
    
// 76 C Program to print the following series until the sum exceeds 2.6 term value exceeds 1.5 x+x2/21+x3/31+.......
    
// 77 C Program to print a frequency distribution table for a dass ul 20-students in the foliowing format. The marks range form 1-25.

// 79 C Program to Becept vilues into smale dimensional array and print the array in reverse by using pointers
    
// 80 C Program to read a string and print the mimber of characters in each word of the string
   
// 81 C Program to acrept two strings and compare those two strings
    
// 82 C Program to accept a string using pointers and functions
    
// 83 C Program to read a string and print the first two characters of each word in the string
    
// 84 C Program to accept two numbers and print the sum of given two numbers by using pointers reverse of the given string by using functions
    
// 85 C Program to accept a string and print 
    
// 86 C Program to accept two 3 dimensional array and store subtraction of these two arrays into third array

// 87 C Program to accept a single dimensional array and print them by using pointers
    
// 88 C Program to accept two strings and biggest among them 
    
// 89 C Program to print 4 dimentional motro with constant number
    
// 90 C Prongram to accept a string and print each word in reverse
    
// 91 C Program to accept elements into single dimensional array and print the array in ascending order by using three different arrays.
    
// 92 C Program to accept data and store the given date into file print the date:

// 94 C Program to copy contents of one file into another.
   
// 95 C Program to create a file of numbers and copy oded number into second file and even number into third file and print first character of each word in upper case.
    
// 96 C Program to accept a string in lower case 
    
// 97 C Program to accept two numbers and interchange two Values using functions
    
// 98 C Program for example of static variable.
    
// 99 C Program to accept a string and print by trailing spaces
    
// 100 C Program to print anti diagonal.

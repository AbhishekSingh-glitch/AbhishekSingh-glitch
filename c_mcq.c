#include <stdio.h>

int main() {
    // Array of questions
    char questions[][512] = {
        // Unit I: Arrays
        "1. How do you declare a one-dimensional array in C?\n   a) int array[];\n   b) int array[10];\n   c) array{10};\n   d) array[10] = int;",
        "2. How do you initialize all elements of an array to zero?\n   a) int array[10] = {0};\n   b) int array[10] = 0;\n   c) int array = {0};\n   d) int array[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};",
        "3. How do you access the third element of an array?\n   a) array[3];\n   b) array(3);\n   c) array[2];\n   d) array[1];",
        "4. Which sorting algorithm is commonly used for sorting arrays?\n   a) Bubble sort\n   b) Quick sort\n   c) Merge sort\n   d) All of the above",
        "5. How do you pass an array to a function in C?\n   a) By value\n   b) By reference\n   c) By both value and reference\n   d) None of the above",
        "6. How do you declare a two-dimensional array?\n   a) int array[2][3];\n   b) int array[6];\n   c) int array = new int[2][3];\n   d) int array(2,3);",
        "7. How do you initialize a two-dimensional array?\n   a) int array[2][3] = {{1, 2, 3}, {4, 5, 6}};\n   b) int array[2][3] = {1, 2, 3, 4, 5, 6};\n   c) int array[2][3] = [1, 2, 3, 4, 5, 6];\n   d) int array[2][3] = {1, 2, 3, 4, 5, 6};",
        "8. How do you access the element in the second row, first column of a two-dimensional array?\n   a) array[2][1];\n   b) array[1][0];\n   c) array[0][1];\n   d) array[1][1];",
        "9. What is the memory layout of a two-dimensional array in C?\n   a) Row-major order\n   b) Column-major order\n   c) Both row-major and column-major\n   d) None of the above",
        "10. How do you declare a three-dimensional array?\n   a) int array[3][3][3];\n   b) int array[27];\n   c) int array = new int[3][3][3];\n   d) int array(3,3,3);",
        
        // Unit II: Pointers
        "11. How do you declare a pointer in C?\n   a) int *p;\n   b) int p*;\n   c) int *p;\n   d) *int p;",
        "12. What does the indirection operator (*) do?\n   a) Allocates memory\n   b) Deallocates memory\n   c) Accesses the value at the memory address\n   d) Returns the memory address",
        "13. How do you get the address of a variable?\n   a) Using the & operator\n   b) Using the * operator\n   c) Using the @ operator\n   d) Using the # operator",
        "14. What is pointer arithmetic?\n   a) Adding or subtracting integers to pointers\n   b) Multiplying or dividing pointers\n   c) Performing bitwise operations on pointers\n   d) None of the above",
        "15. How do you dynamically allocate memory for an array of integers?\n   a) int *p = malloc(n * sizeof(int));\n   b) int p = malloc(n * sizeof(int));\n   c) int *p = malloc(n * int);\n   d) int *p = malloc(n);",
        "16. How are arrays and pointers related?\n   a) An array name is a pointer to the first element\n   b) A pointer is an array\n   c) They are not related\n   d) None of the above",
        "17. How do you pass a pointer to a function?\n   a) By value\n   b) By reference\n   c) By both value and reference\n   d) None of the above",
        "18. What happens when you increment a pointer?\n   a) It points to the next memory location of its type\n   b) It points to the previous memory location\n   c) It points to the same memory location\n   d) None of the above",
        "19. How do you deallocate dynamically allocated memory?\n   a) free(p);\n   b) delete(p);\n   c) remove(p);\n   d) dispose(p);",
        "20. What is a NULL pointer?\n   a) A pointer that does not point to any memory location\n   b) A pointer that points to zero\n   c) A pointer that points to an invalid memory location\n   d) A pointer that points to the last memory location",

        // Unit III: Strings
        "21. How do you declare a string in C?\n   a) char str[];\n   b) char str[10];\n   c) string str;\n   d) char str;",
        "22. How do you initialize a string with a value?\n   a) char str[] = \"Hello\";\n   b) char str = \"Hello\";\n   c) string str = \"Hello\";\n   d) char str[] = {'H', 'e', 'l', 'l', 'o'};",
        "23. Which function is used to find the length of a string?\n   a) strlen()\n   b) strcpy()\n   c) strcat()\n   d) strcmp()",
        "24. How do you copy one string to another?\n   a) strcpy(destination, source);\n   b) strcat(destination, source);\n   c) strcopy(destination, source);\n   d) strconcat(destination, source);",
        "25. How do you concatenate two strings?\n   a) strcat(destination, source);\n   b) strcpy(destination, source);\n   c) strcopy(destination, source);\n   d) strconcat(destination, source);",
        "26. How do you compare two strings?\n   a) strcmp(str1, str2);\n   b) strcat(str1, str2);\n   c) strcpy(str1, str2);\n   d) strcompare(str1, str2);",
        "27. What is the output of strlen(\"Hello\")?\n   a) 5\n   b) 6\n   c) 4\n   d) 7",
        "28. How do you declare an empty string?\n   a) char str[10] = \"\";\n   b) char str[10] = {0};\n   c) char str[10] = {\'\\0\'};\n   d) All of the above",
        "29. Which library is required for string functions?\n   a) string.h\n   b) stdlib.h\n   c) stdio.h\n   d) strings.h",
        "30. How do you initialize a string without using the standard library functions?\n   a) Manually setting each character\n   b) Using strcpy()\n   c) Using strcat()\n   d) Using memcpy()",

        // Unit IV: Structures
        "31. How do you define a structure in C?\n   a) struct { int a; float b; };\n   b) struct { int a, float b };\n   c) struct { int a; float b; } myStruct;\n   d) struct { int a, float b } myStruct;",
        "32. How do you declare a variable of a structure?\n   a) struct myStruct var;\n   b) myStruct var;\n   c) struct var myStruct;\n   d) var myStruct;",
        "33. How do you initialize a structure variable?\n   a) struct myStruct var = {1, 2.5};\n   b) struct myStruct var = 1, 2.5;\n   c) struct var = {1, 2.5};\n   d) var myStruct = {1, 2.5};",
        "34. How do you access the fields of a structure?\n   a) Using the dot operator\n   b) Using the arrow operator\n   c) Using the star operator\n   d) Using the ampersand operator",
        "35. What is a nested structure?\n   a) A structure inside another structure\n   b) A structure with functions inside\n   c) A structure with arrays inside\n   d) A structure with pointers inside",
        "36. How do you define a union?\n   a) union { int a; float b; };\n   b) union { int a, float b };\n   c) union { int a; float b; } myUnion;\n   d) union { int a, float b } myUnion;",
        "37. What is the difference between a union and a structure?\n   a) Union shares memory among members\n   b) Structure shares memory among members\n   c) Union allocates separate memory for each member\n   d) Structure allocates shared memory for each member",
        "38. How do you declare a variable of a union?\n   a) union myUnion var;\n   b) myUnion var;\n   c) union var myUnion;\n   d) var myUnion;",
        "39. How do you initialize a union variable?\n   a) union myUnion var = {1};\n   b) union myUnion var = 1;\n   c) union var = {1};\n   d) var myUnion = {1};",
        "40. How do you access the members of a union?\n   a) Using the dot operator\n   b) Using the arrow operator\n   c) Using the star operator\n   d) Using the ampersand operator",

        // Unit V: Preprocessor and Bitwise Operators
        "41. What is a macro in C?\n   a) A preprocessor directive\n   b) A function\n   c) A variable\n   d) A loop",
        "42. How do you define a macro?\n   a) #define MAX 100\n   b) #macro MAX 100\n   c) define MAX 100\n   d) macro MAX 100",
        "43. What is the purpose of the #include directive?\n   a) To include a file in the program\n   b) To define a macro\n   c) To start a loop\n   d) To end a function",
        "44. What is conditional compilation?\n   a) Compiling code based on a condition\n   b) Running a loop based on a condition\n   c) Defining a variable based on a condition\n   d) Including a file based on a condition",
        "45. What is the bitwise AND operator?\n   a) &\n   b) |\n   c) ^\n   d) ~",
        "46. How do you perform a left shift operation?\n   a) <<\n   b) >>\n   c) &\n   d) |",
        "47. What is a bit mask?\n   a) A pattern of bits used to set or clear specific bits\n   b) A loop that iterates over bits\n   c) A condition that checks bits\n   d) A variable that stores bits",
        "48. How do you define a bit field in a structure?\n   a) struct { unsigned int a : 1; };\n   b) struct { int a : 1; };\n   c) struct { int a[1]; };\n   d) struct { unsigned a : 1; };",
        "49. What is the bitwise OR operator?\n   a) |\n   b) &\n   c) ^\n   d) ~",
        "50. How do you invert all the bits in a variable?\n   a) Using the ~ operator\n   b) Using the & operator\n   c) Using the | operator\n   d) Using the ^ operator",

        // Unit VI: File Handling
        "51. Which function is used to open a file in C?\n   a) fopen()\n   b) open()\n   c) file_open()\n   d) f_open()",
        "52. What is the correct way to open a file named \"data.txt\" for reading?\n   a) fopen(\"data.txt\", \"r\")\n   b) fopen(\"data.txt\", \"w\")\n   c) fopen(\"data.txt\", \"rw\")\n   d) fopen(\"data.txt\", \"a\")",
        "53. Which mode is used to open a file for writing and truncates the file to zero length?\n   a) \"r\"\n   b) \"w\"\n   c) \"a\"\n   d) \"r+\"",
        "54. What does the fclose() function do?\n   a) Opens a file\n   b) Closes a file\n   c) Reads from a file\n   d) Writes to a file",
        "55. What is the purpose of the feof() function?\n   a) To check for the end of a file\n   b) To open a file\n   c) To close a file\n   d) To read from a file",
        "56. Which function is used to move the file pointer to a specific location?\n   a) fseek()\n   b) rewind()\n   c) ftell()\n   d) fmove()",
        "57. What does the rewind() function do?\n   a) Moves the file pointer to the beginning of the file\n   b) Moves the file pointer to the end of the file\n   c) Moves the file pointer to a specific location\n   d) Closes the file",
        "58. Which function is used to read a character from a file?\n   a) fgetc()\n   b) fputc()\n   c) fscanf()\n   d) fgets()",
        "59. What is the return value of fgetc() when it reaches the end of a file?\n   a) 0\n   b) 1\n   c) EOF\n   d) NULL",
        "60. Which function is used to write a character to a file?\n   a) fputc()\n   b) fgetc()\n   c) fprintf()\n   d) fwrite()",
        "61. What does the fscanf() function do?\n   a) Reads formatted input from a file\n   b) Writes formatted output to a file\n   c) Reads a single character from a file\n   d) Writes a single character to a file",
        "62. Which function is used to get the current position of the file pointer?\n   a) ftell()\n   b) fseek()\n   c) rewind()\n   d) fgetpos()",
        "63. How do you open a file named \"log.txt\" for appending?\n   a) fopen(\"log.txt\", \"a\")\n   b) fopen(\"log.txt\", \"r\")\n   c) fopen(\"log.txt\", \"w\")\n   d) fopen(\"log.txt\", \"rw\")",
        "64. Which function is used to check if the end-of-file indicator associated with the stream is set?\n   a) feof()\n   b) ferror()\n   c) fclose()\n   d) fseek()",
        "65. What is the purpose of the fprintf() function?\n   a) To write formatted output to a file\n   b) To read formatted input from a file\n   c) To open a file\n   d) To close a file",
        "66. What will be the result of attempting to read from a file that was opened with mode \"w\"?\n   a) Undefined behavior\n   b) Reading will succeed\n   c) Reading will fail\n   d) The file will be truncated",
        "67. What is the difference between fopen() modes \"w\" and \"a\"?\n   a) \"w\" truncates the file; \"a\" appends to the file\n   b) \"w\" appends to the file; \"a\" truncates the file\n   c) Both truncate the file\n   d) Both append to the file",
        "68. Which function writes a block of data to a file?\n   a) fwrite()\n   b) fread()\n   c) fprintf()\n   d) fputc()",
        "69. What is the purpose of ferror() function?\n   a) To check for a file error\n   b) To open a file\n   c) To close a file\n   d) To read from a file",
        "70. How do you close a file and flush the buffer to the file?\n   a) fclose()\n   b) fflush()\n   c) ferror()\n   d) feof()"
    };

    // Correct answers corresponding to the questions
    char correct_answers[] = {
        // Unit I: Arrays
        'b', 'a', 'c', 'd', 'b', 'a', 'a', 'b', 'a', 'a',
        // Unit II: Pointers
        'a', 'c', 'a', 'a', 'a', 'a', 'b', 'a', 'a', 'a',
        // Unit III: Strings
        'b', 'a', 'a', 'a', 'a', 'a', 'a', 'd', 'a', 'a',
        // Unit IV: Structures
        'c', 'a', 'a', 'a', 'a', 'c', 'a', 'a', 'a', 'a',
        // Unit V: Preprocessor and Bitwise Operators
        'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a',
        // Unit VI: File Handling
        'a', 'a', 'b', 'b', 'a', 'a', 'a', 'a', 'c', 'a',
        'a', 'a', 'a', 'a', 'a', 'a', 'c', 'a', 'a', 'a'
    };

    int num_questions = sizeof(questions) / sizeof(questions[0]);
    char user_answers[num_questions];
    int score = 0;

    // Ask questions and get user answers
    for (int i = 0; i < num_questions; i++) {
        printf("%s\n", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answers[i]);

        // Check if the answer is correct
        if (user_answers[i] == correct_answers[i]) {
            score++;
        }
    }

    // Display the score
    printf("\nYou scored %d out of %d.\n", score, num_questions);

    // Display incorrect answers with correct answers
    for (int i = 0; i < num_questions; i++) {
        if (user_answers[i] != correct_answers[i]) {
            printf("\nQuestion %d:\n%s\n", i + 1, questions[i]);
            printf("Correct answer: %c\n", correct_answers[i]);
        }
    }

    return 0;
}

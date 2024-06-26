/*1 WAP to input a sentence and modify it such that the new sentence is made by swapping the first and last character of each word. Example: input:
The heavens are telling the glory of god 
output: 
ehT seavenh era gellint eht ylorg fo dog
*/
#include <stdio.h>

void strrv(char *st, int y, int q) {
    char p = st[y];
    st[y] = st[q];
    st[q] = p;
}
int main() {
    char str[1000] ;int y=0;
    fgets(str,1000,stdin);
 
    for (int q = 0; str[q] != '\n'; q++) { 
        if (str[q+1] == ' '||str[ q+1] == '\n') { 
            strrv(str ,y, q);
            y=q+2;
        }
    }
    puts(str);
    return 0;
}

// #include <stdio.h>

// void strrv(char *st, int y, int h) {
//  while (y <= h) {

//  char p = st[y];
//  st[y] = st[h];
//  st[h] = p;
//  ++y;
//  --h;
//  }
// }
// int main() {
//  char str[1000] ;int y=0, h = 0;
//  fgets(str,1000,stdin);
 
//  for (int q = 0; str[q] != '\0'; q++) {
// if(h!=0)
//  y = h+2;
 
//  if (str[q+1] == ' '&&str[q]!=' ') {
//  h = q ;
//  strrv(str, y, h);

//  } else if (str[ q+1] == '\0') {
//  h = q;
//  strrv(str, y, h);
//  }
//  }
//  for(int i=0;str[i]!=0;i++){
//  if(str[i]=='\n') i++;
 
//  printf("%c", str[i]);}
//  return 0;
// }
// // if (str[q]!=' ') for if(str[q+1]==' ') rev //words
// // if(str[q]==' ') for if(str[q+1]!=' ') rev //gaps 
// OR
// #include <stdio.h>

// void strrv(char *st, int y, int h) {
//  while (y <= h) {

//  char p = st[y];
//  st[y] = st[h];
//  st[h] = p;
//  ++y;
//  --h;
//  }
// }
// int main() {
//  char str[1000] ;int y=0, h = 0;
//  fgets(str,1000,stdin);
 
//  for (int q = 0; str[q] != '\n'; q++) { 
//  if (str[q+1] == ' '&&str[q]!=' '||str[ q+1] == '\n') {
//  h = q ;
//  strrv(str, y, h);
//  y=h+2;
// }
//  }
//  for(int i=0;str[i]!=0;i++){
//  //if(str[i]=='\n') i++;
 
//  printf("%c", str[i]);}
//  return 0;
// }

/*2 WAP to arrange each word of a sentence in alphabetic order.
Example:
input: Tanay sings a song
 output: aanty gins a gnos
*/
#include <stdio.h>
// alphabetical order logic
void strrv(char *st, int y, int h) {
    for (int i = y; i < h; i++)
        for (int j = i + 1; j <= h; j++){
            if(st[i]>='A'&&st[i]<='Z')
                    st[i]+=32;
        
            if (st[i] > st[j]) {
                char te = st[i];
                st[i] = st[j];
                st[j] = te;
            }
        }
}
int main() {
    char str[1000] ;
    int y = 0;
    fgets(str, 1000, stdin);
 
    for (int q = 0; str[q] != '\n'; q++) {
        if (str[q + 1] == ' '|| str[q + 1] == '\n') {
            strrv(str, y, q);
            y=q+2;
        }
    }
    puts(str);
    return 0;
}


/*3 WAP that accepts a sentence from user and encrypts the sentence such that, the new sentence contains the reverse of each word.
Example:
input: malayalam madam
output: malayalam madam
Example:
input: let us c
output: tel su c
*/
#include <stdio.h>

void strrv(char *st, int y, int q) {
    while (y <= q) {
        char p = st[y];
        st[y] = st[q];
        st[q] = p;
        ++y;
        --q;
    }
}
int main() {
    char str[1000] ;int y=0;
    fgets(str,1000,stdin);
 
    for (int q = 0; str[q] != '\n'; q++) { 
        if (str[q+1] == ' '||str[ q+1] == '\n') { 
            strrv(str ,y, q);
            y=q+2;
        }
    }
    puts(str);

    return 0;
}

/*4 WAP to count and display the frequency of double letter characters in a
sentence.
Example:
input: Jeet is eating a sweet apple
output: 3
*/

#include <stdio.h>

int main() {
    char str[1000] ;int fre=0;
    fgets(str,1000,stdin);
 
    for(int i=0;str[i]!=0;i++){
        if(str[i]==str[i+1]) 
            fre++;
    }
    printf("%d",fre);
    return 0;
}

/*5 WAP to accept the name of the user (Full Name).
Print the initials of this name as in the example.

Example:
input: Sunil Bharati Mittal
output: S.B.M.
*/

#include <stdio.h>

int main() {
    char str[1000] ;
    fgets(str,1000,stdin);
    for(int i=0;str[i]!=0;i++)
        if(str[i-1]==' '||i==0)
            printf("%c.",str[i]);
    return 0;
}

/*6 WAP to accept the name of the user (Full Name).
Print this name as in the example.
Example:
input: Sunil Bharati Mittal
output: S.B. Mittal
*/

#include <stdio.h>

int main() {
    char str[1000];
    int y = 0, h = 0, wc=0;
    fgets(str, 1000, stdin);
 
    for(int i=0;str[i]!='\0';i++)
        if(str[i]==' ') wc++;
 
    for(int i=0;str[i]!='\0';i++){
        if(h<wc&&(str[i-1]==' '||i==0)) {
            if(h!=wc-1)
                printf("%c.",str[i],h);
            h++;
        }
        if(h==wc&&str[i]!=' ') 
            printf("%c",str[i]);
    }

  return 0;
}

/*7 WAP which accepts a single word from user, convert it into UPPERCASE and then prints its Piglatin form.
(A piglatin is such a word which begins with the first vowel of original word and goes till the end. Then the left substring before the first vowel is appended to the right and a 'Y' is appended in the last. If there are no vowels in the original word then piglatin is same with 'N' at the end)
Example:
input: LOndon
output: ONDONLY
Example:
input: gYM
output: GYMN
Example:
input: K
output: KN
Example:
input: India
output: INDIAY
*/

#include <stdio.h>
int main() {
    char s[50], r;
    int i = 0, l, h = 0, v = 0;
    fgets(s, 50, stdin);
    for (l = 0; s[l] != '\n'; l++);
    l -= 1;
    for (int i = 0; s[i] != 0; i++)
        if (s[i] == 'a' || s[i] == 'A' || 
            s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' || 
            s[i] == 'o' || s[i] == 'O' ||
            s[i] == 'u' || s[i] == 'U') {
            h = i;
            v = 1;
            break;
        }

    while (h > 0) {
        char v = s[0];
        for (int i = 0; i < l; i++) {
            s[i] = s[i + 1];
        }
        s[l] = v;
        h--;
    }
    s[l+1]=v==1?'Y':'N';
    for(int i=0;s[i]!=0;i++){
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
        printf("%c",s[i]);
    }
}

/*8 WAP for encryption with following specifications, each alphabet in the input
sentence is replaced with two characters ahead of it. Like: 'a' replaced by 'c'
'b' replaced by 'd'
'y' replaced by 'a'
'z' replaced by 'b'
Only alphabets are to be replaced.
Other characters remain the same(spaces, commas, etc)
Example:
input: boy plays with zebra
output: dqa rncau ykuj bgatc
*/
#include <stdio.h>

int main() {
    char str[1000];
    int fre = 0;
    fgets(str, 1000, stdin);
    for (int i = 0; str[i] != 0; i++)
        if(str[i]>='A'&&str[i]<'Y'||str[i]>='a'&&str[i]<'y')
            printf("%c", str[i]+2);
        else if(str[i]=='Y'||str[i]=='Z'||str[i]=='y'||str[i]=='z') 
            printf("%c",str[i]-26+2);
        else 
            printf("%c",str[i]);
 return 0;
}

/*9 WAP to check if input sentence is Pangram or not.
A pangram is a sentence containing every letter in the English Alphabet.

Input: “the quick brown fox jumps over the lazy dog”
Output: is a Pangram
Explanation: Contains all the characters from ‘a’ to ‘z’]

Input: “The quick brown fox jumps over the dog”
Output: is not a Pangram
Explanation: Doesn’t contain all the characters from ‘a’ to ‘z’, as ‘l’, ‘z’,
‘y’ are missing

HINT: Try with the approach used for frequency in last question of String class
notes.
*/
#include <stdio.h>
int main() { 
    char s[1000];
    int f=0;
    fgets(s,1000,stdin);
    for(int i=0;s[i]!=0;i++){
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]==' '||s[i]=='\n') 
            f++;
        else{ 
            printf("-%c-\n",s[i]); 
            f=0; 
            break;}
    }
    if(f==0) 
        printf("is not a Pangram");
    else   
        printf("is a Pangram");
}

/*10 WAP that swaps the contains of two strings.
Do not use any library functions other then strlen().
Do not use any extra array/string.
Temporary variables can be used.

Example:
input: //before swapping
str1= Boys will be boys
str2= Girls will be girls

output: //after swapping
str1= Girls will be girls
str2= Boys will be boys

Consider no overflow occurs, meaning take large sizes for str1 and str2 in
declarati */
#include <stdio.h>
int main() {
    char a[1000], b[1000];
    printf("enter 1st string\n");
    fgets(a, 1000, stdin);
    printf("enter 2nd string\n");
    fgets(b, 1000, stdin);
    int i = 0, j = 0;
    while (a[i] != '\n' || b[j] != '\n') {
        if (a[i] != '\n')
            i++;
        if (b[j] != '\n')
        j++;
    }

    int q =0;
    while (q < i || q < j) {
        char s = a[q];
        a[q] = b[q];
        b[q] = s;
        q++;
        //w++;
    }
    printf("%s\n%s", a, b);
}

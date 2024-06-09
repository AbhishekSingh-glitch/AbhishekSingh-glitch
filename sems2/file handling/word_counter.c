#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *f = 0;
  f = fopen("ex.txt", "r");

  if (f == 0) {
    printf("File didn't open\n");
    return 0;
  }
  //printf("File open successfully\n");
  int cnt = 0;
  char b = fgetc(f);
  while (!feof(f)) {
    if (b ==' ')
      cnt++;
    printf("%c", b);
    b = fgetc(f);
  }
  printf("\n%d", cnt + 1);
  fclose(f);

  return 0;
}

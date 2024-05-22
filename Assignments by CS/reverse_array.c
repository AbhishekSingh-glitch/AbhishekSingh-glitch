#include <stdio.h>
void p(int arr[],int n){
  int i = 0;
  int j = n - 1;
  while (i <= j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    ++i;
    --j;
  }
  }
int main() {

  int arr[] = {3, -1, 8, 5, 4, 9, 2};
  int n = sizeof(arr) / sizeof(int);
  for (int i = 0; i < n; ++i)  
    scanf("%d ", &arr[i]);
  for (int i = 0; i < n; ++i) // actual array
    printf("%d ", arr[i]);
  
  printf("\n");
  p(arr,n);
  for (int i = 0; i < n; ++i) { // after reversing
    printf("%d ", arr[i]);
  }
  return 0;
  }
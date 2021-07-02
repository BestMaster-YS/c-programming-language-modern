#include <stdio.h>

int main() {
  int arr[10] = {0};
  int size_arr = sizeof(arr);
  printf("the size of the arr: %d\n", size_arr);

  int i;
  for (i = 0; i < (int) (sizeof(arr) / sizeof(arr[0])); i++) {
    arr[i]=0;
  }
}

#include <stdio.h>

int main() {
  int arr[6] = { 5, 2, 4, 6, 1, 3 };

  for (int i = 0; i < sizeof(arr); ++i) {
    printf("%d\t", arr[i]);
  }

  return 0;
}
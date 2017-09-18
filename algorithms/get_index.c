#include <stdio.h>

int get_index(int a, int b[]);

int main() {

  int value = 19;
  int arr[6] = { 2, 5, 4, 1, 6, 14 };

  printf("Index of value: %d\n", get_index(value, arr));

  return 0;
}

int get_index(int a, int b[]) {

  for (int i = 0; i < 6; ++i) {
    if (a == b[i]) {
      return i;
    }
  }

  return -1;
}
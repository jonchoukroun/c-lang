#include <stdio.h>

void swap(int a, int b);

int main() {
  int a = 1;
  int b = 2;

  swap(a, b);

  if (a == 2 && b == 1)
    printf("success!\n");

  return 0;
}

void swap(int a, int b) {
  int c;

  c = a;
  a = b;
  b = c;

  printf("%d, %d", a, b);
}
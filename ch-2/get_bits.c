#include <stdio.h>

unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

int main() {
  printf("%d\n", getbits(50, 4, 2));

  return 0;
}
#include <stdio.h>

unsigned set_bits(unsigned x, int p, int n, unsigned y) {
  int y_field = ( (y & ~(~0 << n)) << (p - n) );
  return (x ^ y_field) | y_field;
}

int main() {
  printf("%d\n", set_bits(466, 7, 5, 1234));
  printf("%d\n", set_bits(128, 7, 5, 1234));
  printf("%d\n", set_bits(50, 5, 2, 13));

  return 0;
}
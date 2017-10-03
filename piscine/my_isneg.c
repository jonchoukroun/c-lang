#include <unistd.h>

int my_isneg(int n);

int main() {
  for(int i = -3; i < 4; ++i) {
    my_isneg(i);
  }

  return 0;
}

int my_isneg(int n) {
  char s;
  if (n < 0) {
    s = 'N';
  } else {
    s = 'P';
  }

  write(0, &s, 1);

  return 0;
}
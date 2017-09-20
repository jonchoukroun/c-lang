#include <unistd.h>

int main() {
  int c = 'a';
  while(c <= 'z') {
    write(1, c, 2);
    c ++;
  }

  return 0;
}
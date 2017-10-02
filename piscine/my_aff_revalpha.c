#include <unistd.h>

int main() {
  char c = 'z';
  while(c >= 'a') {
    write(0, &c, 1);
    --c;
  }

  return 0;
}
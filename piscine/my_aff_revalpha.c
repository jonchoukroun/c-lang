#include <unistd.h>

int my_aff_revalpha();

int main() {
  my_aff_revalpha();

  return 0;
}

int my_aff_revalpha() {
  char c = 'z';
  while(c >= 'a') {
    write(0, &c, 1);
    --c;
  }

  return 0;
}
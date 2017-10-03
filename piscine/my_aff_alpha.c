#include <unistd.h>

int my_aff_alpha();

int main() {
  my_aff_alpha();

  return 0;
}

int my_aff_alpha() {
  char c = 'a';
  while(c <= 'z') {
    write(1, &c, 1);
    c ++;
  }

  return 0;
}
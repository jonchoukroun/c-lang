#include <unistd.h>

int my_aff_chiffre();

int main() {
  my_aff_chiffre();

  return 0;
}

int my_aff_chiffre() {
  char c = '0';
  while(c <= '9') {
    write(1, &c, 1);
    c ++;
  }

  return 0;
}
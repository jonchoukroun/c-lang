#include <unistd.h>

int my_aff_comb();

int main() {
  my_aff_comb();

  return 0;
}

int my_aff_comb() {
  char a, b, c;

  for(a = '0'; a <= '9'; ++a) {
    b = a + 1;

    while(b <= '9') {
      c = b + 1;

      while(c <= '9') {
        write(0, &a, 1);
        write(0, &b, 1);
        write(0, &c, 1);
        write(0, "\n", 1);

        ++c;
      }

      ++b;
    }
  }

  return 0;
}
#include <stdio.h>

char convert_case(char c);

int main() {
  int c;
  while((c = getchar()) != EOF) {
    printf("%c", convert_case(c));
  }

  return 0;
}

char convert_case(char c) {
  return ((c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c);
}
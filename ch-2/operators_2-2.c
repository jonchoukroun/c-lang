#include <stdio.h>

#define LENGTH 80

int main() {
  int i, c;
  char line[LENGTH];

  for (i = 0; i < LENGTH; ++i) {
    line[i] = 0;
  }

  for (i = 0; i < LENGTH - 1; ++i) {
    if ((c = getchar()) != '\n') {
      if (c != EOF) {
        line[i] = c;
      }
    } else {
      break;
    }
  }

  for (i = 0; i < LENGTH; ++i) {
    printf("%c", line[i]);
  }

  return 0;
}
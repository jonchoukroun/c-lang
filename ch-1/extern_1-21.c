#include <stdio.h>

#define LINELENGTH 81
#define IN 1
#define OUT 0

char line[LINELENGTH];
char new_line[LINELENGTH];

int read_line();
void replace_spaces();

int main() {
  int length = 0;

  while ((length = read_line()) > 0) {
    replace_spaces();
    printf("%s", new_line);
  }

  return 0;
}

int read_line() {
  int i, c;

  for (i = 0; i < LINELENGTH && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}

void replace_spaces() {
  int i, n, state;

  n = 0;
  state = OUT;
  for (i = 0; i < LINELENGTH; ++i) {
    if (line[i] == ' ') {
      if (state == IN) {
        new_line[n] = '\t';
        state = OUT;
      } else {
        state = IN;
        --n;
      }
    } else {
      if (state == IN) {
        new_line[n] = ' ';
        ++n;
        new_line[n] = line[i];
        state = OUT;
      } else {
        new_line[n] = line[i];
      }
    }
    ++n;
  }

}

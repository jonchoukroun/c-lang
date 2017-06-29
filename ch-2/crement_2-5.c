#include <stdio.h>

#define LENGTH 100

int any(char s[], char t[]);

int main() {

  char main_line[LENGTH] = "hey nong man\0";
  char passing_line[LENGTH] = "ny city\0";    // returns 2
  char failing_line[LENGTH] = "bw\0";         // returns -1

  printf("first match: %d\n", any(main_line, passing_line));

  return 0;
}

int any(char s[], char t[]) {
  int i, j;

  i = 0;
  while (s[i] != '\0') {
    j = 0;
    while (t[j] != '\0') {
      if (s[i] == t[j]) {
        return i;
      }
      ++j;
    }
    ++i;
  }
  return -1;
}
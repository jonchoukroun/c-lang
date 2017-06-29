#include <stdio.h>

#define LENGTH 500

void squeeze(char s[], char t[]);

int main() {
  char s[LENGTH] = "hey nong man\0";
  char t[LENGTH] = "non\0";

  squeeze(s, t);

  return 0;
}

void squeeze(char s[], char t[]) {
  int i, j, k;

  for (i = j = 0; s[i] != '\0'; ++i) {
    for (k = 0; t[k] != '\0'; ++k) {
      if (s[i] == t[k]) {
        ++i;
      }
    }
    s[j++] = s[i];
  }
  s[j] = '\0';

  for (i = 0; s[i] != '\0'; ++i) {
    printf("%c", s[i]);
  }

}
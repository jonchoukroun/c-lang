#include <stdio.h>

#define OUT 0
#define IN 1

int main() {

  int word_length, c, i, n, state;
  int word_counts[31];

  word_length = c = i = n = 0;
  for (i = 0; i < 31; ++i) {
    word_counts[i] = 0;
  }
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != '\t' && c != ' ') {
      state = IN;
      ++word_length;
    }
    else {
      ++word_counts[word_length];
      word_length = 0;
      state = OUT;
    }
  }

  for (i = 1; i < 31; ++i) {
    if (word_counts[i] != 0) {
      printf("%d characters:\t", i);

      for (n = 0; n < word_counts[i]; ++n) {
        printf("=");
      }

      printf("\t (%d) \n", word_counts[i]);
    }
  }

  /*
  while (for (i = 0; i < 31; ++i) {word_counts[i] != 0}) {
    for (i = 1; i < 31; ++i) {
      if (word_counts[i] > 0) {
        printf("  |  ");
      }
      printf("\n");
    }

  }
  */
}
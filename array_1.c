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

  /* Horizontal histogram */
  for (i = 1; i < 31; ++i) {
    if (word_counts[i] != 0) {
      printf("%d characters:\t", i);

      for (n = 0; n < word_counts[i]; ++n) {
        printf("=");
      }

      printf("\t (%d) \n", word_counts[i]);
    }
  }

  /* Vertical histogram */
  // int j;
  // i = n = j = 0;
  // int highest_count = 0;

  // for (j = 1; j < 31; ++j) {
  //   if (highest_count < word_counts[j])
  //     highest_count = word_counts[j];
  // }

  // while (n < highest_count) {
  //   for (i = 1; i < 31; ++i) {
  //     if (word_counts[i] > 0)
  //       printf(" . ");
  //     else
  //       printf ("   ");
  //   }
  //   for (i = 1; i < 31; ++i) {
  //     --word_counts[i];
  //   }
  //   printf("\n");
  //   ++n;
  // }


}
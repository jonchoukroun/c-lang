#include <stdio.h>

int to_celcius(int fahr);

int main() {

  int fahr;

  printf("Fahrenheit\tCelcius\n");

  for (fahr = 0; fahr <= 300; fahr += 20) {
    printf("%10d\t%7d\n", fahr, to_celcius(fahr));
  }

  return 0;
}

int to_celcius(int fahr) {
  return 5 * (fahr - 32) / 9;
}
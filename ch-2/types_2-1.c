#include <stdio.h>
#include <limits.h>

void print_heading();
void print_signed();
void print_unsigned();

int char_min();
int char_max();
int short_min();
int short_max();
int int_min();
int int_max();
long long_min();
long long_max();

long get_umax(long min, long max);

int main() {

  print_unsigned();
  printf("\n");
  print_signed();

  return 0;
}

void print_heading() {
  printf("\t\t\t Char");
  printf("\t\t\tShort");
  printf("\t\t\t  Int");
  printf("\t\t\t Long");

  printf("\n");
}

void print_unsigned() {
  printf("Unsigned\n");
  printf("--------\n");

  print_heading();

  printf("Min:");
  printf("\t\t\t    0");      // char
  printf("\t\t\t    0");      // short
  printf("\t\t\t    0");      // int
  printf("\t\t\t    0\n");    // long

  printf("Max:");
  printf("\t %20lu", get_umax(char_min(), char_max()));
  printf("\t %20lu", get_umax(short_min(), short_max()));
  printf("\t %20lu", get_umax(int_min(), int_max()));
  printf("\t %20lu", get_umax(long_min(), long_max()));
  printf("\n");
}

void print_signed() {
  printf("Signed\n");
  printf("--------\n");

  print_heading();

  printf("Min:");
  printf("\t %20d", char_min());
  printf("\t %20d", short_min());
  printf("\t %20d", int_min());
  printf("\t %20ld", long_min());
  printf("\n");

  printf("Max:");
  printf("\t %20d", char_max());
  printf("\t %20d", short_max());
  printf("\t %20d", int_max());
  printf("\t %20ld", long_max());
  printf("\n");
}

int char_min() {
  int n = SCHAR_MIN;
  return n;
}

int char_max() {
  int n = SCHAR_MAX;
  return n;
}

int short_min() {
  int n = SHRT_MIN;
  return n;
}

int short_max() {
  int n = SHRT_MAX;
  return n;
}

int int_min() {
  int n = INT_MIN;
  return n;
}

int int_max() {
  int n = INT_MAX;
  return n;
}

long long_min() {
  long n = LONG_MIN;
  return n;
}

long long_max() {
  long n = LONG_MAX;
  return n;
}

long get_umax(long a, long b) {
  return (a * -1) + b;
}
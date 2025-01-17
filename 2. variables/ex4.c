#include <stdio.h>

int main() {
  int year;

  printf("Insert a year: ");
  scanf("%d", &year);

  int isLeap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

  printf("Is it a leap year? (true=1, false=0): %d", isLeap);

  return 0;
}
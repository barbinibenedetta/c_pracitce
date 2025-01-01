#include <stdio.h>

int main() {
  int month;

  printf("Insert a number between 1 and 12 representing a month: ");
  scanf("%d", &month);

  int has30 = month == 4 || month == 6 || month == 9 || month == 11;

  printf("Does your month have 30 days? (true=1, false=0): %d", has30);

  return 0;
}
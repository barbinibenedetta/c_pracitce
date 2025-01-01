#include <stdio.h>

int main() {
  int year;

  printf("Please type the year you were born in: ");
  scanf("%d", &year);
  int age = 2024 - year;

  printf("You are %d years old.", age);

  return 0;
}
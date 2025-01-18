#include <stdio.h>

int main() {
  double c, newC;

  printf("This program will calculate your interests.\n");
  printf("Please enter a positive number that represent the initial capital invested: ");
  scanf("%lf", &c);

  printf("Initial capital invested: %.2lf\n", c);
  for(int i = 1; i <= 5; i++) {
    printf("\nInterest rate: %d%%\n", i);
    printf("Year\tAmount\n");
      newC = c;

    for(int j = 1; j <= 5; j++) {
      newC *= 1.0 + ((double)i / 100.0);
      printf("%d\t%.2lf\n", j, newC);
    }
  }

  return 0;
}
#include <stdio.h>

int main() {
  double c;

  printf("This program will calculate your interests.\n");
  printf("Please enter a positive number that represent the initial capital invested: ");
  scanf("%lf", &c);

  printf("Initial capital invested: %.2lf\n", c);
  printf("Interest rate: 5%%\n");
  printf("Year\tAmount\n");

  for(int i = 1; i <= 5; i++) {
    c *= 1.0 + 0.05;
    printf("%d\t%.2lf\n", i, c);
  }

  return 0;
}
#include <stdio.h>

int main() {
  double k;
  double p;

  printf("Insert a number: ");
  scanf("%lf", &k);
  printf("Insert another number between 0 and 100, to calculate the percentage: ");
  scanf("%lf", &p);

  double percentage = k * p / 100;
  printf("The %lf%% of %lf is: %lf", p, k, percentage);

  return 0;
}
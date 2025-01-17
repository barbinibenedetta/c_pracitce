#include <stdio.h>
#include <math.h>

int main() {
  double weight;
  double height;

  printf("Please type your weight in kilograms: ");
  scanf("%lf", &weight);
  printf("Please type your height in meters: ");
  scanf("%lf", &height);

  double bmi = weight / pow(height, 2);
  printf("Your BMI is: %lf", bmi);

  return 0;
}
#include <stdio.h>
#include <math.h>

double calcLog(double x, double b);

int main() {
  double x, b;

  printf("Enter the argument of the logarithm: ");
  scanf("%lf", &x);
  printf("Enter the base of the logarithm: ");
  scanf("%lf", &b);

  printf("The logarithm of %lf to the base %lf is %lf.", x, b, calcLog(x, b));

  return 0;
}

//This function will calcualte the log of x, base b
double calcLog(double x, double b) {
  double result = log(x) / log(b);
  return result;
}
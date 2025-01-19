#include <stdio.h>

int main() {
  double a, b, c;

  printf("You will be asked to type the three coefficients of a second degree polynomial ax^2 + bx + c\n");
  printf("The program will show you different values of the polynomial, with x from 0 to 3 with 0.1 increments.\n");
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);
  printf("Enter c: ");
  scanf("%lf", &c);

  for(double i = 0; i <= 3; i += 0.1) {
    double value = a * i * i + b * i + c;
    printf("%.2lf, ", value);
  }

  return 0;
}
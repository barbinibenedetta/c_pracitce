#include <stdio.h>
#include <math.h>
#include <complex.h>

struct Complex {
  double real;
  double imaginary;
};

void findSols(double a, double b, double c, struct Complex *x1, struct Complex *x2);

int main() {
  double a, b, c;
  struct Complex x1, x2;

  printf("Enter the coefficients of a second degree equation: ax^2 + bx + c = 0\n");
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);
  printf("Enter c: ");
  scanf("%lf", &c);

  findSols(a, b, c, &x1, &x2);
  if (x1.imaginary != 0 && x2.imaginary != 0) {
    printf("Here are the solutions of the equation: x1 = %lf + %lf * i; x2 = %lf - %lf * i", x1.real, x1.imaginary, x2.real, x2.imaginary);
  } else {
    printf("Here are the solutions of the equation: x1 = %lf; x2 = %lf", x1.real, x2.real);
  }

  return 0;
}

void findSols(double a, double b, double c, struct Complex *x1, struct Complex *x2) {
  double delta = pow(b, 2) - 4 * a * c;

  if (delta >= 0) {
    x1->real = (-b + sqrt(delta)) / (2 * a);
    x2->real = (-b - sqrt(delta)) / (2 * a);
    x1->imaginary = 0;
    x2->imaginary = 0;
  } else {
    x1->real = -b / (2 * a);
    x1->imaginary = sqrt(-delta) / (2 * a);
    x2->real = -b / (2 * a);
    x2->imaginary = sqrt(-delta) / (2 * a);
  }
}
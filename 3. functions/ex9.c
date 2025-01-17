#include <stdio.h>
#include <math.h>

void calcSol(double a, double b, double c);

int main() {
  double myA, myB, myC;

  printf("Type the three coefficients of a seconde degree equation: ax^2 + bx + c = 0\n");
  printf("Type a: ");
  scanf("%lf", &myA);
  printf("Type b: ");
  scanf("%lf", &myB);
  printf("Type c: ");
  scanf("%lf", &myC);

  calcSol(myA, myB, myC);

  return 0;
}

void calcSol(double a, double b, double c) {
  double delta = pow(b, 2) - 4 * a * c;

  if (delta < 0) {
    printf("The equation has no real solutions.");
  } else {
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    printf("The solutions of the equation are: x1=%lf, x2=%lf", x1, x2);
  }
}
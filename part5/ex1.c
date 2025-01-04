#include <stdio.h>
#include <math.h>

int calcEq(double a, double b, double c, double *px1, double *px2);

int main() {
  double myA, myB, myC, x1, x2, *px1 = &x1, *px2 = &x2;

  printf("Type the three coefficients of a seconde degree equation: ax^2 + bx + c = 0\n");
  printf("Type a: ");
  scanf("%lf", &myA);
  printf("Type b: ");
  scanf("%lf", &myB);
  printf("Type c: ");
  scanf("%lf", &myC);

  int result = calcEq(myA, myB, myC, px1, px2);
  if(result == 0) {
    printf("The equation has no real solutions.");
  } else {
    printf("The solutions of the equation are: x1=%lf, x2=%lf", x1, x2);
  }

  return 0;
}

int calcEq(double a, double b, double c, double *px1, double *px2) {
  double delta = pow(b, 2) - 4 * a * c;

  if (delta < 0) {
    return 0;
  } else {
    *px1 = (-b + sqrt(delta)) / (2 * a);
    *px2 = (-b - sqrt(delta)) / (2 * a);
    return 1;
  }
}
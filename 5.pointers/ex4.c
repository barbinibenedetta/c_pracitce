#include <stdio.h>
#include <math.h>

void calcCenterRadius(double a, double b, double c, double *pxc, double *pyc, double *pr);

int main() {
  double a, b, c, xc, yc, r, *pxc = &xc, *pyc = &yc, *pr = &r;

  printf("Type the three coefficients of the equation of a circumference: x^2 + y^2 + ax + by + c = 0\n");
  printf("Type a: ");
  scanf("%lf", &a);
  printf("Type b: ");
  scanf("%lf", &b);
  printf("Type c: ");
  scanf("%lf", &c);

  calcCenterRadius(a, b, c, pxc, pyc, pr);

  printf("The coordinates of the center of the circumference are (%lf; %lf).\n", xc, yc);
  printf("The radius is %lf", r);

  return 0;
}

void calcCenterRadius(double a, double b, double c, double *pxc, double *pyc, double *pr) {
  *pxc = -a / 2;
  *pyc = -b / 2;
  *pr = sqrt(pow(a, 2) / 4 + pow(b, 2) / 4 - c);
}
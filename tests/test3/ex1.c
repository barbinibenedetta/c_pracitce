#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

double calcX(double r, double t);
double calcY(double r, double t);

int main() {
  double r, t;
  int k;

  printf("Enter an integer positive number: ");
  scanf("%d", &k);
  printf("The program will show you a number of cartesian coordinates.\n\n");

  for(int i = 0; i <= k; i++) {
    r = i;
    t = 2 * PI / k * i;
    printf("%lf\t%lf\n", calcX(r, t), calcY(r, t));
  }

  return 0;
}

double calcX(double r, double t) {
  return r * cos(t);
}

double calcY(double r, double t) {
  return r * sin(t);
}
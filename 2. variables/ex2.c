#include <stdio.h>
#include <float.h>

int main() {
  double a = DBL_MAX;
  double b = DBL_TRUE_MIN;
  double c = a * 2;
  double d = b / 2;

  printf("c: %lf\nd: %lf", c, d);

  return 0;
}
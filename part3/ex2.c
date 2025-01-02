#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double degToRad(double deg);

int main() {
  for(int i = 0; i <= 360; i+=10) {
    printf("Degrees: %d\tRadians: %lf\n", i, degToRad(i));
  }
  return 0;
}

double degToRad(double deg) {
  double rad = deg * M_PI / 180;
  return rad;
}
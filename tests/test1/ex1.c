#include <stdio.h>
#include <math.h>

int main() {
  double radius;
  double PI = 3.14159;

  printf("Please write the radius of a sphere: ");
  scanf("%lf", &radius);

  double volume = (4.0 / 3.0) * (PI * pow(radius, 3));
  double surface = 4 * PI * pow(radius, 2);

  printf("The volume of the sphere is: %.3lf\n", volume);
  printf("The surface of the sphere is: %.3lf\n", surface);

  return 0;
}
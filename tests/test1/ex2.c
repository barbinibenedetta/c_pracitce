#include <stdio.h>

struct Point {
  double x;
  double y;
};

int main() {
  struct Point p1;
  struct Point p2;

  printf("This program will find the slope and the y-intercept of the straight line\n");
  printf("passing through 2 points.\n");
  printf("Please type the coordinates of the first point, separated by a space: ");
  scanf("%lf %lf", &p1.x, &p1.y);
  printf("Please type the coordinates of the second point, separated by a space: ");
  scanf("%lf %lf", &p2.x, &p2.y);

  double m = (p2.y - p1.y) / (p2.x - p1.x);
  double q = (p1.y * p2.x - p2.y * p1.x) / (p2.x - p1.x);

  printf("The slope of the line is: %lf", m);
  printf("The y-intercept of the line is: %lf", q);

  return 0;
}
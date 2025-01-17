#include <stdio.h>
#include <math.h>

struct Point {
  double x;
  double y;
};

struct Circle {
  struct Point center;
  double radius;
};

double calcDistance(struct Point p1, struct Point p2);
void isPointInternal(struct Point p, struct Circle c);

int main() {
  struct Circle myCircle;
  struct Point myPoint;

  printf("This program checks wheter a point is inside or outside of a circumference.\n");
  printf("Please enter the coordinates of the center of the circumferece, separated by a space: ");
  scanf("%lf %lf", &myCircle.center.x, &myCircle.center.y);
  printf("Please enter the length of the radius of the circumference: ");
  scanf("%lf", &myCircle.radius);
  printf("Perfect, now enter the coordinates of the point you want to check the position of: ");
  scanf("%lf %lf", &myPoint.x, &myPoint.y);

  isPointInternal(myPoint, myCircle);

  return 0;
}

double calcDistance(struct Point p1, struct Point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void isPointInternal(struct Point p, struct Circle c) {
  double distance = calcDistance(p, c.center);
  
  if(distance < c.radius) {
    printf("The point is inside the circumference.");
  } else if (distance == c.radius) {
    printf("The point is on the circumference.");
  } else if (distance > c.radius) {
    printf("The point is outside the circumference.");
  }
}
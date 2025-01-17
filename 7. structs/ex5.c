#include <stdio.h>
#include <math.h>

struct Point {
  double x;
  double y;
};

struct straightLine {
  double m;
  double b;
};

void findPerpendicular(struct straightLine r, struct Point p);

int main() {
  struct straightLine myLine;
  struct Point myP;

  printf("You will be asked to enter a point and a straight line of the kind y = mx + b.\n");
  printf("You will recieve the equation of the perpendicular line to the line you entered passing throught that point.\n");
  printf("Enter the slope of the line: ");
  scanf("%lf", &myLine.m);
  printf("Enter the y-intercept: ");
  scanf("%lf", &myLine.b);
  printf("Enter the coordinates of the point, separated by a space: ");
  scanf("%lf %lf", &myP.x, &myP.y);

  findPerpendicular(myLine, myP);

  return 0;
}

void findPerpendicular(struct straightLine r, struct Point p) {
  if(r.m == 0) {
    double myM = INFINITY;
    double myB = p.x;
    printf("The perpendicular line passing through the point is: x = %lf", myB);
    return;
  }

  double myM = -1 / r.m;
  double myB = -myM * p.x + p.y;
  if (myB < 0) {
    printf("The perpendicular line passing through the point is: y = %lfx - %lf", myM, -myB);
  } else if (myB > 0) {
    printf("The perpendicular line passing through the point is: y = %lfx + %lf", myM, myB);
  } else if (myB == 0) {
    printf("The perpendicular line passing through the point is: y = %lfx", myM);
  }
}
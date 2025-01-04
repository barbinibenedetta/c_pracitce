#include <stdio.h>
#include <math.h>

void calcLineEq(double x1, double y1, double x2, double y2, double *pm, double *pq);

int main() {
  double x1, y1, x2, y2, m, q, *pm = &m, *pq = &q;

  printf("Type the coordinates of 2 points, to recieve the equation of the straight line passing through them.\n");
  printf("Type the first point like this: x1 y1: ");
  scanf("%lf %lf", &x1, &y1);
  printf("Type the second point like this: x2 y2: ");
  scanf("%lf %lf", &x2, &y2);

  calcLineEq(x1, y1, x2, y2, pm, pq);

  if (*pm == INFINITY) {
    printf("The equation of the line is: x = %lf\n", x1);  // For vertical line
  } else {
    printf("The equation fo the line is: y = %lfx + %lf", *pm, *pq);
  }
  

  return 0;
}

void calcLineEq(double x1, double y1, double x2, double y2, double *pm, double *pq) {

  *pm = (y1 - y2) / (x1 - x2);
  *pq = y1 - (*pm * x1);

  if (x1 == x2) {
    *pm = INFINITY;
  }
}
#include <stdio.h>
#include <math.h>

struct Point {
  double x;
  double y;
};

struct Parabola {
  double a;
  double b;
  double c;
};

struct Point findFocus(struct Parabola p);

int main() {
  struct Parabola myParabola;

  printf("Write the coefficients of a parabola in the form y = ax^2 + bx + c\n");
  printf("Enter a: ");
  scanf("%lf", &myParabola.a);
  printf("Enter b: ");
  scanf("%lf", &myParabola.b);
  printf("Enter c: ");
  scanf("%lf", &myParabola.c);

  struct Point focus = findFocus(myParabola);
  printf("The coordinates of the focus of the parabola are: (%lf, %lf)", focus.x, focus.y);

  return 0;
}

struct Point findFocus(struct Parabola p) {
  struct Point point;

  double delta = (pow(p.b, 2) - 4 * p.a * p.c);
  point.x = -p.b / (2 * p.a);
  point.y = (1 - delta) / (4 * p.a);

  return point;
}
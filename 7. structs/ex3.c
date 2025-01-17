#include <stdio.h>
#include <math.h>

struct Point {
  double x;
  double y;
};

double calcDistance(struct Point p1, struct Point p2);
double calcPolygonal(struct Point arr[], int length);

int main() {
  int myLenght;
  struct Point myArray[20];

  printf("You will be asked to type an array of coordinates of points.\n");
  printf("The program will then calculate the total length of the polygonal line composed by said points.\n");
  printf("Please enter the number of points you will enter (2 min, 20 max): ");
  scanf("%d", &myLenght);
  printf("Now enter the coordinates of the points one by one, separated by a space.\n");

  for(int i = 0; i < myLenght; i++) {
    printf("Point %d: ", i + 1);
    scanf("%lf %lf", &myArray[i].x, &myArray[i].y);
  }

  printf("The total length of the polygonal is: %lf", calcPolygonal(myArray, myLenght));

  return 0;
}

double calcDistance(struct Point p1, struct Point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double calcPolygonal(struct Point arr[], int length) {
  double totalLength = 0;

  for(int i = 0; i < length - 1; i++) {
    totalLength += calcDistance(arr[i], arr[i + 1]);
  }

  return totalLength;
}
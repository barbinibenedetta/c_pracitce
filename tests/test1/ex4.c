#include <stdio.h>
#include <math.h>

int main() {
  int sec;

  printf("Enter an amount of time in seconds to recieve the equivalent\n");
  printf("in hours, minutes and seconds.\n");
  printf("Enter the amount fo seconds: ");
  scanf("%d", &sec);

  int h = floor(sec / 3600);
  int m = floor((sec % 3600 / 60));
  int s = sec % 3600 % 60;

  printf("%d seconds are equivalent to %d h %d m and %d s.", sec, h, m, s);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int secsSinceMidnight(int h, int m, int s);

int main() {
  int myH1, myM1, myS1, myH2, myM2, myS2;

  printf("You will be asked to type 2 times in 24 hours format, like this hh:mm:ss\n");
  printf("Type the first time: ");
  scanf("%d:%d:%d", &myH1, &myM1, &myS1);
  printf("Type the second time: ");
  scanf("%d:%d:%d", &myH2, &myM2, &myS2);

  int seconds1 = secsSinceMidnight(myH1, myM1, myS1);
  int seconds2 = secsSinceMidnight(myH2, myM2, myS2);
  int elapsedSeconds = abs(seconds1 - seconds2);
  printf("%d seconds passed between the 2 times.", elapsedSeconds);

  return 0;
}

int secsSinceMidnight(int h, int m, int s) {
  int numOfSecs = h * 3600 + m * 60 + s;
  return numOfSecs;
}
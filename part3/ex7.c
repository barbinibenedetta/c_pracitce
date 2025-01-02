#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coinToss();

int main() {
  srand(time(NULL));
  int heads = 0;
  int tails = 0;

  for(int i = 1; i <= 100; i++) {
    coinToss() ? tails++ : heads++;
  }
  printf("After 100 tosses:\nHeads: %d\tTails: %d", heads, tails);
  return 0;
}

int coinToss() {
  return rand() % 2;
}
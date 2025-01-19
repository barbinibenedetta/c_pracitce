#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int guess, counter = 1, random = rand() % 100 + 1;

  printf("Guess the number between 1 and 100\n");
  scanf(" %d", &guess);
  
  while (guess != random) {
    counter++;

    if (guess < random) {
      printf("%d is too low.\n", guess);
    } else {
      printf("%d is too high.\n", guess);
    }

    printf("Guess the number between 1 and 100\n");
    scanf(" %d", &guess);
  }

  printf("Congrats! You guessed in %d tries.", counter);

  return 0;
}
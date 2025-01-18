#include <stdio.h>

int main() {
  int n, counter = 1;

  printf("This programs generates Hailstone numbers, following Collatz conjecture.\n");
  printf("Please enter a non-negative integer to start the sequence: ");
  scanf("%d", &n);

  printf("%d ", n);
  while (n != 1) {
    n = (n % 2 == 0) ? (n / 2) : (3 * n + 1);
    printf("%d ", n);
    counter++;
  }
  printf("\nNumber of Hailstones: %d", counter);

  return 0;
}
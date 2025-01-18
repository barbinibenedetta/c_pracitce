#include <stdio.h>

int main() {
  int num, isPrime = 1;

  printf("Type an integer number to check if it is a prime number: ");
  scanf("%d", &num);

  for(int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = 0;
      break;
    }
  }

  if (isPrime == 0) {
    printf("%d is not a prime number.", num);
  } else {
    printf("%d is a prime number.", num);
  }

  return 0;
}
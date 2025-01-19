#include <stdio.h>

int isPrime(int n);

int main() {
  int a, b, isTrue = 1;

  printf("The Goldbach Conjecture states:\n");
  printf("\"Every even integer greater than 2 can be expressed as the sum of two prime numbers.\"\n");
  printf("Please enter two integer numbers (greater than 2) to check if all the numbers in the interval verify the conjecture: ");
  scanf("%d %d", &a, &b);

  for(int i = a; i <= b; i++) {
    if(i % 2 == 0) {
      int foundPair = 0;

      for(int j = 2; j <= i - 2; j++) {
        // i can be expressed as the sum of j and i - j
        // we start from 2 because 2 is the first prime number
        // we will check if j and i - j are both prime

        // if one pair of prime numbers is found, exit the loop, and move on to the next
        // number in the interval
        if(isPrime(j) && isPrime(i - j)) {
          foundPair = 1;
          break;
        }
      }

      // if at least one even number doesn't have even one pair of suitable numbers, break
      if (!foundPair) {
        isTrue = 0;
        break;
      }
    }
  }

  printf("Is the conjecture verified for all the numbers in the interval? (y=1; n=0)\n");
  printf("%d", isTrue);

  return 0;
}

int isPrime(int n) {
  for(int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}
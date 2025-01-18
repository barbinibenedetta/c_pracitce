#include <stdio.h>

int main() {
  int n;

  printf("Enter an integer number: ");
  scanf("%d", &n);

  printf("Is the number divisible by 5 and between 80 and 210 (inclusive)? (y=1, n=0)\n");
  int result = n % 5 == 0 && n >= 80 && n <= 210;
  printf("%d", result); 

  return 0;
}
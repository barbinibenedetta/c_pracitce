#include <stdio.h>

int main() {
  int n;
  int n1, n2, n3, n4;

  printf("Enter an integer number between 0 and 15: ");
  scanf("%d", &n);

  n1 = n / 8;
  n2 = n % 8 / 4;
  n3 = n % 4 / 2;
  n4 = n % 2;

  printf("%d in binary is: %d%d%d%d", n, n1, n2, n3, n4);

  return 0;
}
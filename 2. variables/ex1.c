#include <stdio.h>

int main() {
  int num;

  printf("Insert an integer: ");
  scanf("%d", &num);

  int isEven = num % 2 == 0;
  printf("Is you number even? (0=false, 1=true): %d", isEven);

  return 0;
}
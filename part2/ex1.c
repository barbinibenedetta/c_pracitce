#include <stdio.h>

int main() {
  int num;

  printf("Insert an integer: ");
  scanf("%d", &num);

  int isEven = num % 2 == 0;
  printf("%d", isEven);

  return 0;
}
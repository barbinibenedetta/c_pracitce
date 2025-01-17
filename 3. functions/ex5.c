#include <stdio.h>

void draw(int n);

int main() {
  int num;

  printf("Enter an integer to select the size of the pyramid: ");
  scanf("%d", &num);
  draw(num);

  return 0;
}

void draw(int n) {
  for (int i = 1; i <= n; i++) {
    int spaces = n - i;
    for (int j = 1; j <= spaces; j++) {
      printf(" ");
    }
    for (int k = 1; k <= i; k++) {
      printf("*");
    }
    printf("\n");
  }
}
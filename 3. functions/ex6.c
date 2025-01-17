#include <stdio.h>

void draw(int n, char c);

int main() {
  int num;
  char myChar;

  printf("Enter an integer to select the size of the pyramid: ");
  scanf("%d", &num);
  printf("Enter a character to be the \'brick\' of the pyramid: ");
  scanf(" %c", &myChar);

  draw(num, myChar);

  return 0;
}

void draw(int n, char c) {
  for (int i = 1; i <= n; i++) {
    int spaces = n - i;
    for (int j = 1; j <= spaces; j++) {
      printf(" ");
    }
    for (int k = 1; k <= i; k++) {
      printf("%c", c);
    }
    printf("\n");
  }
}
#include <stdio.h>

int main() {
  int rows, cols;

  printf("Enter a number of rows: ");
  scanf("%d", &rows);
  printf("Enter a number of columns: ");
  scanf("%d", &cols);

  for(int i = 1; i <= rows; i++) {
    if(i % 2 == 0) {
      printf(" ");
    }
    for(int j = 1; j <= cols / 2; j++) {
      printf("* ");
    }
    if(cols % 2 == 1 && i % 2 == 1) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
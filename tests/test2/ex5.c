#include <stdio.h>

int main() {
  int rows;
  
  printf("Enter the number of rows to print a tree: ");
  scanf("%d", &rows);

  for(int i = 1; i <= 5; i++) {
    
  }

  for(int i = 1; i <= rows; i++) {
    for(int k = rows - i; k > 0; k--) {
      printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
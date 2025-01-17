#include <stdio.h>

int isMatrixDiagonal(int rows, int cols, int m[][cols]);

int main() {
  int size;

  printf("You will be asked to type a square matrix.\n");
  printf("This program will check if the matrix is a diagonal matrix.\n");
  printf("Enter the size of the matrix: ");
  scanf("%d", &size);

  int myMatrix[size][size];

  printf("You will now type each integer number that will fill in each cell of the matrix.\n");
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      printf("Row %d, Col %d: ", i + 1, j + 1);
      scanf("%d", &myMatrix[i][j]);
    }
  }

  if (isMatrixDiagonal(size, size, myMatrix) == 0) {
    printf("Your matrix is NOT a diagonal matrix.");
  } else {
    printf("Your matrix is a diagonal matrix.");
  }

  return 0;
}

int isMatrixDiagonal(int rows, int cols, int m[][cols]) {
  int isDiagonal = 1;

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      if (i == j) {
        //I'm on the diagonal
        if (m[i][j] == 0) {
          isDiagonal = 0;
          break;
        }
      } else {
        //I'm outside the diagonal
        if (m[i][j] != 0) {
          isDiagonal = 0;
          break;
        }
      }
      if (isDiagonal == 0) {break;}
    }
    if (isDiagonal == 0) {break;}
  }

  return isDiagonal;
}
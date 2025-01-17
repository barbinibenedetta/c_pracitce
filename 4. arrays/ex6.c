#include <stdio.h>

int calcMax(int rows, int cols, int m[][cols], int j);

int main() {
  int mySize, columnIndex;

  printf("You will be asked to type a square matrix and a column index.\n");
  printf("The program will determine the highest value in that column.\n");
  printf("Enter the size of the matrix: ");
  scanf("%d", &mySize);

  int myMatrix[mySize][mySize];

  printf("Now you will fill in the matrix with integers values.\n");
  for(int i = 0; i < mySize; i++) {
    for(int j = 0; j < mySize; j++) {
      printf("Row %d, Col %d:\t", i + 1, j + 1);
      scanf("%d", &myMatrix[i][j]);
    }
  }

  printf("Finally, you will select a column index. (choose a number between 0 and %d): ", mySize - 1);
  scanf("%d", &columnIndex);

  int maxValue = calcMax(mySize, mySize, myMatrix, columnIndex);
  printf("The highest value in the column with index %d is: %d", columnIndex, maxValue);

  return 0;
}

int calcMax(int rows, int cols, int m[][cols], int j) {
  int maxValue = m[0][j];

  for(int i = 1; i < cols; i++) {
    if(maxValue < m[i][j]) {
      maxValue = m[i][j];
    }
  }

  return maxValue;

}
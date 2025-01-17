#include <stdio.h>

int isMagicSquare(int rows, int cols, int m[][cols]);

int main() {
  int mySize;

  printf("You will be asked to type a square matrix.\n");
  printf("The program will determine if the matrix is a magic square or not.\n");
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

  int result = isMagicSquare(mySize, mySize, myMatrix);
  if(result == 0) {
    printf("The matrix is NOT a magic square.");
  } else {
    printf("The matrix is a magic square.");
  }

  return 0;
}

int isMagicSquare(int rows, int cols, int m[][cols]) {
  int isMS = 1;
  int firstColSum = 0;
  int mainDiag = 0;
  int Antidiag = 0;

  //calcs the total of the first column (j=0),
  //this will be used to confront the other sums
  for(int i = 0; i < rows; i++) {
    firstColSum += m[i][0];
  }

  //This checks the total of the rows
  for(int i = 0; i < rows; i++) {
    int rowTotal = 0;
    for(int j = 0; j < cols; j++) {
      rowTotal += m[i][j];
    }
    if(rowTotal != firstColSum) {
      isMS = 0;
      return isMS;
    }
  }

  //This checks the total of the cols
  //we start from j = 1 since the firstColSum has already been calculated
  for(int j = 1; j < cols; j++) {
    int colTotal = 0;
    for(int i = 0; i < rows; i++) {
      colTotal += m[i][j];
    }
    if(colTotal != firstColSum) {
      isMS = 0;
      return isMS;
    }
  }
  
  //This checks the main diagonal
  for(int d = 0; d < rows; d++) {
    mainDiag += m[d][d];
  }
  if (mainDiag != firstColSum) {
    isMS = 0;
    return isMS;
  }

  //This checks the antidiagonal
  for(int i = 0; i < rows; i++) {
    Antidiag += m[i][rows - 1 - i];
  }
  if (Antidiag != firstColSum) {
    isMS = 0;
    return isMS;
  }

  return isMS;
}
#include <stdio.h>

int isMatrixUpperTriangular(int rows, int cols, int m[][cols]);

int main() {
  int mySize;
  
  printf("You will be asked to type a square matrix.\n");
  printf("The program will determine if its an upper triangular matrix or not.\n");
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

  if(isMatrixUpperTriangular(mySize, mySize, myMatrix) == 0) {
    printf("The matrix is NOT upper triangular.");
  } else {
    printf("The matrix is upper triangular.");
  }

  return 0;
}

int isMatrixUpperTriangular(int rows, int cols, int m[][cols]) {
  int isUppTri = 1;

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      if (i > j) {
        //I'm in the lower half of the matrix.
        //As for definition, to ensure the matrix is an upper
        //triangular matrix, all elements in this area must be 0
        isUppTri = m[i][j] != 0 ? 0 : 1;
      }
      if (isUppTri == 0) {break;}
    }
    if (isUppTri == 0) {break;}
  }

  return isUppTri;
}
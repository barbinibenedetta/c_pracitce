#include <stdio.h>

int calcAdiacents(int rows, int cols, int m[rows][cols], int i, int j);

int main() {
  int myRows, myColumns, rowIndex, columnIndex;

  printf("You will be asked to type a matrix and a column and row index.\n");
  printf("The program will determine the number of cells adiacent to the one identified\nby the indexes you provided that contain a positive number.\n");
  printf("Enter the number of rows of the matrix: ");
  scanf("%d", &myRows);
  printf("Enter the number of columns of the matrix: ");
  scanf("%d", &myColumns);

  int myMatrix[myRows][myColumns];

  printf("Now you will fill in the matrix with integers values.\n");
  for(int i = 0; i < myRows; i++) {
    for(int j = 0; j < myColumns; j++) {
      printf("Row %d, Col %d:\t", i + 1, j + 1);
      scanf("%d", &myMatrix[i][j]);
    }
  }

  printf("Select a row index (choose a number between 0 and %d): ", myRows - 1);
  scanf("%d", &rowIndex);
  printf("Select a column index (choose a number between 0 and %d): ", myColumns - 1);
  scanf("%d", &columnIndex);

  int positiveAd = calcAdiacents(myRows, myColumns, myMatrix, rowIndex, columnIndex);
  printf("The cell (%d, %d) has %d adiacent cell(s) containing a positive integer.", rowIndex, columnIndex, positiveAd);

  return 0;
}

int calcAdiacents(int rows, int cols, int m[rows][cols], int i, int j) {
  int adiacents = 0;

  //(h,k) will be the adiacents cells
  for(int h = i - 1; h <= i + 1; h++) {
    if(h < 0 || h >= rows) {continue;}
    for(int k = j - 1; k <= j + 1; k++) {
      if(k < 0 || k >= cols) {continue;}
      if(m[h][k] > 0) {
        adiacents++;
      }
    }
  }

  //the above loop will count also the (i, j) cell
  //the if statement below ensures that the count doesn't include the (i, j) cell content
  if(m[i][j] > 0) {
    adiacents--;
  }

  return adiacents;
}
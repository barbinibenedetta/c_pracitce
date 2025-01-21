#include <stdio.h>

int verifyRegion(int arr[][9], int a, int b);

int main() {
  int sudoku[9][9] = {  {5,3,4,6,7,8,9,1,2},
                        {6,7,2,1,9,5,3,4,8},
                        {1,9,8,3,4,2,5,6,7},
                        {8,5,9,7,6,1,4,2,3},
                        {4,2,6,8,5,3,7,9,1},
                        {7,1,3,9,2,4,8,5,6},
                        {9,6,1,5,3,7,2,8,4},
                        {2,8,7,4,1,9,6,3,5},
                        {3,4,5,2,8,6,1,7,9}
  };

  int result = verifyRegion(sudoku, 0, 3);

  if (result == 0) {
    printf("The region is NOT correct.");
  } else if (result == 1) {
    printf("The region is correct!");
  }

  return 0;
}

int verifyRegion(int arr[][9], int a, int b) {
  int temp[9];
  int index = 0;

  for(int i = a; i < a + 3; i++) {
    for(int j = b; j < b + 3; j++) {
      temp[index] = arr[i][j];
      index++;
    }
  }

  for(int i = 0; i < 9; i++) {
    for(int j = i + 1; j < 9; j++) {
      if(temp[i] == temp[j]) {
        return 0;
      }
    }
  }

  return 1;
}
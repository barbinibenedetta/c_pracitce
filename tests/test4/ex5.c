#include <stdio.h>

int submatrix(int r, int c, int m[][c], int i, int j, int h, int k);

int main() {
  int c, r, i, j, h, k;

  printf("This program will ask you to type a matrix of integer numbers.\n");
  printf("Enter the number of columns of the matrix: ");
  scanf("%d", &c);
  printf("Enter the number of rows of the matrix: ");
  scanf("%d", &r);

  int arr[r][c];

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      printf("Row %d Column %d:\t", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Now you will enter four indexes (i, j) and (h, k)\n");
  printf("These pairs will determine a submatrix.\n");
  printf("Keep in mind that i < h and j < k\n");
  printf("Enter i: ");
  scanf("%d", &i);
  printf("Enter j: ");
  scanf("%d", &j);
  printf("Enter h: ");
  scanf("%d", &h);
  printf("Enter k: ");
  scanf("%d", &k);

  int result = submatrix(r, c, arr, i, j, h, k);

  if (result == -1) {
    printf("Error, the indexes you entered are invalid.");
  } else if (result == 0) {
    printf("The elements of the submatrix are NOT all equal to 0.");
  } else if (result == 1) {
    printf("All the elements of the submatrix are equal to 0.");
  }

  return 0;
}

int submatrix(int r, int c, int m[][c], int i, int j, int h, int k) {
  if(i > h || j > k || i < 0 || j < 0 || h >= r || k >= c) {
    return -1;
  }

  for(int a = i; a <= h; a++) {
    for(int b = j; b <= k; b++) {
      if(m[a][b] != 0) {
        return 0;
      }
    }
  }

  return 1;
}
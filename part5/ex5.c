#include <stdio.h>

int calcPos(int *arr, int size);

int main() {
  int mySize;

  printf("Enter the size of your array: ");
  scanf("%d", &mySize);

  int myArr[mySize];

  printf("Enter the elements (integers) of you array:\n");
  for(int i = 0; i < mySize; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &myArr[i]);
  }

  printf("The number of positive integers in your array is: %d", calcPos(myArr, mySize));

  return 0;
}

int calcPos(int *arr, int size) {
  int totalPos = 0;

  for(int i = 0; i < size; i++) {
    if(*(arr + i) > 0) {
      totalPos++;
    }
  }

  return totalPos;
}
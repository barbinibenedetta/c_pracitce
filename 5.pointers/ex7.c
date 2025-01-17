#include <stdio.h>

int countGreat(int *arr, int size);

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

  printf("The number of integers in your array that are greater than the following element is: %d", countGreat(myArr, mySize));

  return 0;
}

int countGreat(int *arr, int size) {
  int count = 0;

  for(int i = 0; i < size - 1; i++) {
    if(*(arr + i) > *(arr + i + 1)) {
      count++;
    }
  }

  return count;
}
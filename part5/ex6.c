#include <stdio.h>

int calcSum(int *arr, int size);

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

  printf("The sum of the elements that have an even index position in your array is: %d", calcSum(myArr, mySize));

  return 0;
}

int calcSum(int *arr, int size) {
  int sum = 0;

  for(int i = 0; i < size; i += 2) {
    sum += *(arr + i);
  }

  return sum;
}
#include <stdio.h>

int calcSum(int arr[], int size, int h, int k);

int main() {
  int mySize, myH, myK;
  
  printf("You will be asked to type an array of integers.\n");
  printf("How many elements you want to type in your array? ");
  scanf("%d", &mySize);

  int myArr[mySize];

  for (int i = 0; i < mySize; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &myArr[i]);
  }

  printf("Now enter a starting point and an end point\n(between 0 and %d):\n", mySize - 1);
  printf("Start point: ");
  scanf("%d", &myH);
  printf("End point: ");
  scanf("%d", &myK);

  int mySum = calcSum(myArr, mySize, myH, myK);
  printf("The sum of the elements of the array between the position %d and %d is: %d", myH, myK, mySum);

  return 0;
}

//The function will calc the sum of the elements of the array between the position h and k
int calcSum(int arr[], int size, int h, int k) {
  int sum = 0;

  for (int i = h; i <= k; i++) {
    sum += arr[i];
  }

  return sum;
}
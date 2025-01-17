#include <stdio.h>

int areElementsDistinct(int arr[], int size);

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

  if (areElementsDistinct(myArr, mySize) == 1) {
    printf("The array has all distinct elements.");
  } else {
    printf("The array contains duplicates");
  }

  return 0;
}

int areElementsDistinct(int arr[], int size) {
  int areDistinct = 1;

  for(int i = 0; i < size; i++) {
    int confront = arr[i];
    for (int j = i + 1; j < size; j++) {
      if (arr[j] == confront) {
        areDistinct = 0;
        break;
      }
    }
    if (areDistinct == 0) {
      break;
    }
  }

  return areDistinct;
}
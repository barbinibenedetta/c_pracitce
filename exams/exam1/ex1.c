#include <stdio.h>

int main() {
  int length, result = 1;

  printf("You will be asked to enter a sequence of integers.\n");
  printf("Enter the length of the sequence: ");
  scanf("%d", &length);

  int arr[length];

  printf("Now enter the integer numbers.\n");
  for(int i = 0; i < length; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < length; i++) {
    for(int j = i + 1; j < length; j++) {
      if(arr[i] == arr[j]) {
        result = 0;
      }
    }
  }

  if(result == 1) {
    printf("There are NO duplicates in the sequence.");
  } else if (result == 0) {
    printf("The sequence has multiple occurences of the same number.");
  }

  return 0;
}